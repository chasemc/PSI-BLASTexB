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
 *   'medlars.asn'.
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
#include <objects/medlars/Medlars_record.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CMedlars_record_Base::ResetAbbr(void)
{
    m_Abbr.erase();
    m_set_State[0] &= ~0xc;
}

void CMedlars_record_Base::ResetData(void)
{
    m_Data.erase();
    m_set_State[0] &= ~0x30;
}

void CMedlars_record_Base::Reset(void)
{
    ResetCode();
    ResetAbbr();
    ResetData();
}

BEGIN_NAMED_BASE_CLASS_INFO("Medlars-record", CMedlars_record)
{
    SET_CLASS_MODULE("NCBI-Medlars");
    ADD_NAMED_STD_MEMBER("code", m_Code)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("abbr", m_Abbr)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("data", m_Data)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CMedlars_record_Base::CMedlars_record_Base(void)
    : m_Code(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CMedlars_record_Base::~CMedlars_record_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

