# -*- makefile-gmake -*-
#################################
# $Id: Makefile.app.in 492189 2016-02-12 20:50:52Z ucko $
# Author:  Denis Vakatov (vakatov@ncbi.nlm.nih.gov)
#################################
# This can be used to build/install/clean
# a single(sic!) application [APP] using [OBJ, LIB]
#
# srcdir = /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/src/build-system
# include /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/ReleaseMT/build/Makefile.mk
#
# APP = my_app
# SRC = my_main my_obj1 my_obj2
# LIB = foo bar
# .....
# CXXFLAGS = -g $(ORIG_CXXFLAGS) -D_DEBUG -DXYZ_MY_APP
# .....
# include /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/ReleaseMT/build/Makefile.app
#################################

default_rule: all

-include $(srcdir)/Makefile.$(TMPL).app.unix

### C/C++ source file compilation setup

CXXFLAGS_ALL = -c  $(CXXFLAGS) $(LOCAL_CPPFLAGS) $(CPPFLAGS)
CFLAGS_ALL   = -c  $(CFLAGS) $(LOCAL_CPPFLAGS) $(CPPFLAGS)
SOURCES      = $(UNIX_SRC) $(SRC)

### Standard application build rules

XAPP = $(APP)
XOBJ = $(SOURCES:=.o)
XOBJ2 = $(OBJ:=.o)
XAPP_LIB_ = $(STATIC_LIB)
XAPP_LIB = $(XAPP_LIB_:%$(STATIC)$(STATIC)=%$(STATIC))
XAPP_LIBS = $(STATIC_LIBS)
XLIB_FLAGS = $(runpath) -L$(libdir)
XLIB    = $(XLIB_FLAGS) $(XAPP_LIB:%=-l%)
XLIBDEP = $(XAPP_LIB:%=$(status_dir)/.%.dep)

XLIB2      = $(XLIB)
XAPP_LIBS2 = $(XAPP_LIBS)

ifneq "" "$(wildcard Makefile.$(TMPL).app.libdep)"
  include Makefile.$(TMPL).app.libdep
  ifneq "" "$(GENERATED_LIB_ORDER)"
    XLIB2 = $(XLIB_FLAGS) $(GENERATED_LIB_ORDER)
  endif
  ifneq "" "$(GENERATED_LIB3PARTY_ORDER)"
    XAPP_LIBS2 = $(GENERATED_LIB3PARTY_ORDER)
  endif
endif

CMD_BASE = $(LINK_WRAPPER) $(LINK) $(LDFLAGS) $(APP_LDFLAGS) $(XOBJ) $(XOBJ2) $(PRE_LIBS)
CMD_TAIL = -o $(XAPP) $(LINK_FILTER)
CMD  = $(CMD_BASE) $(XLIB) $(XAPP_LIBS) $(CMD_TAIL)
CMD2 = $(CMD_BASE) $(XLIB2) $(XAPP_LIBS2) $(CMD_TAIL)

ifeq "$(CMD)" "$(CMD2)"
  OR_CMD2 =
else
  NOTE = "The original settings failed.  Trying project_tree_builder's suggestions:"
  OR_CMD2 = || (echo $(NOTE); echo $(CMD2); $(CMD2))
endif

include $(builddir)/Makefile.$(Rules)

ASK_REBUILD = \
    base=`echo $$l | $(SED) -e 's,.*/\.\([^.]*\)\.dep$$,\1,'`; \
    if (cd "$$builddir" && $(MAKE) $(MFLAGS) -q \
        -f "$(builddir)/Makefile.lib.tmpl" \
        srcdir="$$srcdir" TMPL="$$tmpl" all) ; then \
        true ; \
    else \
        echo "Rebuild $$tmpl (lib$$base.*) for $(XAPP)?" ; \
        read result ; \
        expr "$$result" : "^[Nn]" > /dev/null ; \
    fi

SKIP_REBUILD = true
ALL          = $(XAPP)
# SKIP_REBUILD = false
# ALL          = rebuild-libs
# SKIP_REBUILD = ($(ASK_REBUILD))
# ALL          = rebuild-libs

# 1: dep file
define rebuild_lib
read srcdir builddir tmpl < "$(1)" ; \
test -z "$$builddir" || $(SKIP_REBUILD) || \
(cd "$$builddir" && $(MAKE) $(MFLAGS) libs srcdir="$$srcdir")

endef

rebuild-libs:
	$(foreach l,$(XLIBDEP),$(call rebuild_lib,$(l)))

JUST_RUN_LDD = 0
ifneq "$(patsubst %,$(LDD_R),$(wildcard $(XAPP)))" ""
  DLL_DEP = $(wildcard $(XAPP_LIB:%=$(libdir)/lib%.so))
  ifneq "$(DLL_DEP)" ""
    ifeq "" "$(findstring q,$(MAKEFLAGS))"
      ifneq (,$(filter-out $(ALT_GOALS),$(if $(MAKECMDGOALS),$(MAKECMDGOALS),all)))
        NEWER := $(shell /usr/bin/find $(XOBJ) $(XOBJ2) $(XLIBDEP) -newer $(XAPP) 2>/dev/null)
        ifeq "$(NEWER)" ""
          JUST_RUN_LDD = 1
        endif
      endif
    else
      $(XAPP): $(DLL_DEP)
    endif
  endif
endif

ifeq "$(JUST_RUN_LDD)" "1"
$(XAPP): $(DLL_DEP) $(XOBJ) $(XLIBDEP)
# This is not entirely straightforward, due to some complications:
# * The above check doesn't account for object files rebuilt on the fly
#   (as they typically are).
# * ldd exits with status 0 even if it found unresolved symbols, so
#   checking whether it produced error output is necessary.
# * Executables may have relative rpaths, making it necessary to check
#   copies in $(bindir) if possible.
	@relink_after_all=false; \
	for x in $?; do \
	    case $$x in *.so) ;; *) relink_after_all=true ;; esac; \
	done; \
	if [ $$relink_after_all = false ]; then \
	    if [ -w $(bindir)/$(XAPP) ]  &&  \
	      /usr/bin/cmp -s $(XAPP) $(bindir)/$(XAPP); then \
	        d=$(bindir); \
	    else \
	        d=.; \
	    fi; \
	    if $(LDD_R) $$d/$(XAPP) 2>&1 >/dev/null | $(GREP) .; then \
	        echo "$(XAPP) apparently has unresolved symbols;" \
	            "relinking to confirm"; \
	        $(RM) $(XAPP); \
	        relink_after_all=true; \
	    fi; \
	fi; \
	if [ $$relink_after_all = true ]; then \
	    $(MAKE) -f $(MAKEFILE) $(MFLAGS) $(XAPP) LDD_R=; \
	else \
	    $(TOUCH) $(XAPP); \
	fi
else
$(XAPP): $(XOBJ) $(XOBJ2) $(XLIBDEP)
	@-$(RM) .$(XAPP).stamp
	@echo $(CMD)
	@$(CMD) $(OR_CMD2)
	$(STRIP) $(XAPP)
	$(POST_LINK) $(XAPP)
  ifneq "$(BINCOPY)" "@:"
    ifneq "$(srcdir)" "."
      ifneq "$(filter-out /.,$(wildcard $(bindir)/.))" ""
	@if [ -w $(bindir) ]; then \
	    echo $(BINCOPY) $(XAPP) $(bindir) && \
	    $(BINCOPY) $(XAPP) $(bindir); \
	fi
      endif
    endif
  endif
endif


### Standard targets (non-recursive)

# Kludge: done this way to force proper serialization
MAKEFILE = $(builddir)/Makefile.app.tmpl

ifdef import_root
  ifeq "$(ALL)" "rm-if-outdated"
    override ALL = $(XAPP)
    $(XAPP): $(wildcard $(LIB:%=$(import_root)/../lib/lib%.*))
  endif
endif

all: $(ALL)
ifneq "$(ALL)" "$(XAPP)"
	@$(MAKE) -f $(MAKEFILE) $(MFLAGS) $(XAPP)
endif

unlink:
	-$(RM) $(XAPP) .$(XAPP).stamp

clean: clean-common unlink
	-$(RM) $(XOBJ)
	-$(RM) core

purge: clean
ifneq "$(BINCOPY)" "@:"
  ifneq "$(srcdir)" "."
    ifneq "$(filter-out /.,$(wildcard $(bindir)/.))" ""
	-$(RM) $(bindir)/$(XAPP)
    endif
  endif
endif


# Guard against invalid PTB-oriented settings.
#
all: $(ASN_DEP:%=$(status_dir)/.%.files)
all: $(USR_DEP:%=$(status_dir)/.%.dep)

.PHONY: default_rule all unlink clean purge