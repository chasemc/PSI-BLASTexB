# $Id: Makefile.blast_format_unit_test.app 500512 2016-05-05 13:14:49Z gouriano $

APP = blast_format_unit_test
SRC = seqalignfilter_unit_test blastfmtutil_unit_test build_archive_unit_test vecscreen_run_unit_test

CPPFLAGS = -DNCBI_MODULE=BLASTFORMAT $(ORIG_CPPFLAGS) $(BOOST_INCLUDE)
CXXFLAGS = $(FAST_CXXFLAGS) 
LDFLAGS = $(FAST_LDFLAGS) 

LIB_ = test_boost $(BLAST_FORMATTER_LIBS) \
    $(BLAST_LIBS) $(OBJMGR_LIBS)

LIB = $(LIB_:%=%$(STATIC))
LIBS = $(CMPRS_LIBS) $(NETWORK_LIBS) $(DL_LIBS) $(ORIG_LIBS)

CHECK_REQUIRES = in-house-resources
CHECK_CMD = blast_format_unit_test
CHECK_COPY = data

REQUIRES = Boost.Test.Included

CHECK_TIMEOUT = 300

WATCHERS = jianye zaretska madden camacho
