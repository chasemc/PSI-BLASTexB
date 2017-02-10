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
 *   'entrez2.asn'.
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
#include <objects/entrez2/Entrez2_field_info.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CEntrez2_field_info_Base::ResetField_name(void)
{
    m_Field_name.Set().erase();
    m_set_State[0] &= ~0x3;
}

void CEntrez2_field_info_Base::ResetField_menu(void)
{
    m_Field_menu.erase();
    m_set_State[0] &= ~0xc;
}

void CEntrez2_field_info_Base::ResetField_descr(void)
{
    m_Field_descr.erase();
    m_set_State[0] &= ~0x30;
}

void CEntrez2_field_info_Base::Reset(void)
{
    ResetField_name();
    ResetField_menu();
    ResetField_descr();
    ResetTerm_count();
    ResetIs_date();
    ResetIs_numerical();
    ResetSingle_token();
    ResetHierarchy_avail();
    ResetIs_rangable();
    ResetIs_truncatable();
}

BEGIN_NAMED_BASE_CLASS_INFO("Entrez2-field-info", CEntrez2_field_info)
{
    SET_CLASS_MODULE("NCBI-Entrez2");
    ADD_NAMED_MEMBER("field-name", m_Field_name, CLASS, (CEntrez2_field_id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("field-menu", m_Field_menu)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("field-descr", m_Field_descr)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("term-count", m_Term_count)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("is-date", m_Is_date)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("is-numerical", m_Is_numerical)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("single-token", m_Single_token)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("hierarchy-avail", m_Hierarchy_avail)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("is-rangable", m_Is_rangable)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("is-truncatable", m_Is_truncatable)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CEntrez2_field_info_Base::CEntrez2_field_info_Base(void)
    : m_Term_count(0), m_Is_date(0), m_Is_numerical(0), m_Single_token(0), m_Hierarchy_avail(0), m_Is_rangable(0), m_Is_truncatable(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CEntrez2_field_info_Base::~CEntrez2_field_info_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
