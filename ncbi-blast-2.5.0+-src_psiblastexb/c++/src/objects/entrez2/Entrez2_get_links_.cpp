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
#include <objects/entrez2/Entrez2_get_links.hpp>
#include <objects/entrez2/Entrez2_id_list.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CEntrez2_get_links_Base::ResetUids(void)
{
    if ( !m_Uids ) {
        m_Uids.Reset(new TUids());
        return;
    }
    (*m_Uids).Reset();
}

void CEntrez2_get_links_Base::SetUids(CEntrez2_get_links_Base::TUids& value)
{
    m_Uids.Reset(&value);
}

void CEntrez2_get_links_Base::ResetLinktype(void)
{
    m_Linktype.Set().erase();
    m_set_State[0] &= ~0xc;
}

void CEntrez2_get_links_Base::Reset(void)
{
    ResetUids();
    ResetLinktype();
    ResetMax_UIDS();
    ResetCount_only();
    ResetParents_persist();
}

BEGIN_NAMED_BASE_CLASS_INFO("Entrez2-get-links", CEntrez2_get_links)
{
    SET_CLASS_MODULE("NCBI-Entrez2");
    ADD_NAMED_REF_MEMBER("uids", m_Uids, CEntrez2_id_list);
    ADD_NAMED_MEMBER("linktype", m_Linktype, CLASS, (CEntrez2_link_id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("max-UIDS", m_Max_UIDS)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("count-only", m_Count_only)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("parents-persist", m_Parents_persist)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CEntrez2_get_links_Base::CEntrez2_get_links_Base(void)
    : m_Max_UIDS(0), m_Count_only(0), m_Parents_persist(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetUids();
    }
}

// destructor
CEntrez2_get_links_Base::~CEntrez2_get_links_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
