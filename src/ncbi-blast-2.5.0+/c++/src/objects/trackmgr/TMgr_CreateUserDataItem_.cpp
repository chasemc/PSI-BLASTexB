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
 *   'trackmgr.asn'.
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
#include <objects/trackmgr/TMgr_CreateUserDataItem.hpp>
#include <objects/trackmgr/TMgr_Attribute.hpp>
#include <objects/trackmgr/TMgr_DatasetItemSeq.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_CreateUserDataItem_Base::ResetDatakey(void)
{
    m_Datakey.erase();
    m_set_State[0] &= ~0x3;
}

void CTMgr_CreateUserDataItem_Base::ResetSeqids(void)
{
    m_Seqids.clear();
    m_set_State[0] &= ~0xc;
}

void CTMgr_CreateUserDataItem_Base::ResetAttrs(void)
{
    m_Attrs.clear();
    m_set_State[0] &= ~0x30;
}

void CTMgr_CreateUserDataItem_Base::ResetSeqs(void)
{
    m_Seqs.clear();
    m_set_State[0] &= ~0xc0;
}

void CTMgr_CreateUserDataItem_Base::Reset(void)
{
    ResetDatakey();
    ResetSeqids();
    ResetAttrs();
    ResetSeqs();
}

BEGIN_NAMED_BASE_CLASS_INFO("TMgr-CreateUserDataItem", CTMgr_CreateUserDataItem)
{
    SET_CLASS_MODULE("NCBI-TrackManager");
    ADD_NAMED_STD_MEMBER("datakey", m_Datakey)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("seqids", m_Seqids, STL_list_set, (STD, (string)))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("attrs", m_Attrs, STL_list_set, (STL_CRef, (CLASS, (CTMgr_Attribute))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("seqs", m_Seqs, STL_list_set, (STL_CRef, (CLASS, (CTMgr_DatasetItemSeq))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CTMgr_CreateUserDataItem_Base::CTMgr_CreateUserDataItem_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CTMgr_CreateUserDataItem_Base::~CTMgr_CreateUserDataItem_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
