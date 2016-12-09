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
#include <objects/trackmgr/TMgr_BlastRIDReply.hpp>
#include <objects/trackmgr/TMgr_BlastRIDDetail.hpp>
#include <objects/trackmgr/TMgr_Message.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_BlastRIDReply_Base::ResetMessages(void)
{
    m_Messages.clear();
    m_set_State[0] &= ~0x3;
}

void CTMgr_BlastRIDReply_Base::ResetRid_detail(void)
{
    m_Rid_detail.Reset();
}

void CTMgr_BlastRIDReply_Base::SetRid_detail(CTMgr_BlastRIDReply_Base::TRid_detail& value)
{
    m_Rid_detail.Reset(&value);
}

CTMgr_BlastRIDReply_Base::TRid_detail& CTMgr_BlastRIDReply_Base::SetRid_detail(void)
{
    if ( !m_Rid_detail )
        m_Rid_detail.Reset(new ncbi::objects::CTMgr_BlastRIDDetail());
    return (*m_Rid_detail);
}

void CTMgr_BlastRIDReply_Base::Reset(void)
{
    ResetMessages();
    ResetRid_detail();
}

BEGIN_NAMED_BASE_CLASS_INFO("TMgr-BlastRIDReply", CTMgr_BlastRIDReply)
{
    SET_CLASS_MODULE("NCBI-TrackManager");
    ADD_NAMED_MEMBER("messages", m_Messages, STL_list, (STL_CRef, (CLASS, (CTMgr_Message))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("rid-detail", m_Rid_detail, CTMgr_BlastRIDDetail)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CTMgr_BlastRIDReply_Base::CTMgr_BlastRIDReply_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CTMgr_BlastRIDReply_Base::~CTMgr_BlastRIDReply_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

