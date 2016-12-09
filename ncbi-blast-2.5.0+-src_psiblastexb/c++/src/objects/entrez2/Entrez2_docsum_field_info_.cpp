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
#include <objects/entrez2/Entrez2_docsum_field_info.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CEntrez2_docsum_field_info_Base::ResetField_name(void)
{
    m_Field_name.erase();
    m_set_State[0] &= ~0x3;
}

void CEntrez2_docsum_field_info_Base::ResetField_description(void)
{
    m_Field_description.erase();
    m_set_State[0] &= ~0xc;
}

void CEntrez2_docsum_field_info_Base::Reset(void)
{
    ResetField_name();
    ResetField_description();
    ResetField_type();
}

BEGIN_NAMED_BASE_CLASS_INFO("Entrez2-docsum-field-info", CEntrez2_docsum_field_info)
{
    SET_CLASS_MODULE("NCBI-Entrez2");
    ADD_NAMED_STD_MEMBER("field-name", m_Field_name)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("field-description", m_Field_description)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("field-type", m_Field_type, EEntrez2_docsum_field_type)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CEntrez2_docsum_field_info_Base::CEntrez2_docsum_field_info_Base(void)
    : m_Field_type((int)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CEntrez2_docsum_field_info_Base::~CEntrez2_docsum_field_info_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

