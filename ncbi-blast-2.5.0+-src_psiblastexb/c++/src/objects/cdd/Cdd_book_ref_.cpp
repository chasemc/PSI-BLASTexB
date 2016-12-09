/* $Id$
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'cdd.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <objects/cdd/Cdd_book_ref.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CCdd_book_ref_Base::, ETextelement, false)
{
    SET_ENUM_INTERNAL_NAME("Cdd-book-ref", "textelement");
    SET_ENUM_MODULE("NCBI-Cdd");
    ADD_ENUM_VALUE("unassigned", eTextelement_unassigned);
    ADD_ENUM_VALUE("section", eTextelement_section);
    ADD_ENUM_VALUE("figgrp", eTextelement_figgrp);
    ADD_ENUM_VALUE("table", eTextelement_table);
    ADD_ENUM_VALUE("chapter", eTextelement_chapter);
    ADD_ENUM_VALUE("biblist", eTextelement_biblist);
    ADD_ENUM_VALUE("box", eTextelement_box);
    ADD_ENUM_VALUE("glossary", eTextelement_glossary);
    ADD_ENUM_VALUE("appendix", eTextelement_appendix);
    ADD_ENUM_VALUE("other", eTextelement_other);
}
END_ENUM_INFO

void CCdd_book_ref_Base::ResetBookname(void)
{
    m_Bookname.erase();
    m_set_State[0] &= ~0x3;
}

void CCdd_book_ref_Base::ResetCelementid(void)
{
    m_Celementid.erase();
    m_set_State[0] &= ~0x300;
}

void CCdd_book_ref_Base::ResetCsubelementid(void)
{
    m_Csubelementid.erase();
    m_set_State[0] &= ~0xc00;
}

void CCdd_book_ref_Base::Reset(void)
{
    ResetBookname();
    ResetTextelement();
    ResetElementid();
    ResetSubelementid();
    ResetCelementid();
    ResetCsubelementid();
}

BEGIN_NAMED_BASE_CLASS_INFO("Cdd-book-ref", CCdd_book_ref)
{
    SET_CLASS_MODULE("NCBI-Cdd");
    ADD_NAMED_STD_MEMBER("bookname", m_Bookname)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("textelement", m_Textelement, ETextelement)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("elementid", m_Elementid)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("subelementid", m_Subelementid)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("celementid", m_Celementid)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("csubelementid", m_Csubelementid)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CCdd_book_ref_Base::CCdd_book_ref_Base(void)
    : m_Textelement((ETextelement)(0)), m_Elementid(0), m_Subelementid(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CCdd_book_ref_Base::~CCdd_book_ref_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

