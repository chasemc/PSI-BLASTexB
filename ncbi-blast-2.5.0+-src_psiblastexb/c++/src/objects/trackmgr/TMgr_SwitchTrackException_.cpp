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
#include <objects/trackmgr/TMgr_SwitchTrackException.hpp>
#include <objects/trackmgr/TMgr_DTrackId.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_SwitchTrackException_Base::ResetDtrack_id(void)
{
    if ( !m_Dtrack_id ) {
        m_Dtrack_id.Reset(new TDtrack_id());
        return;
    }
    (*m_Dtrack_id).Reset();
}

void CTMgr_SwitchTrackException_Base::SetDtrack_id(CTMgr_SwitchTrackException_Base::TDtrack_id& value)
{
    m_Dtrack_id.Reset(&value);
}

void CTMgr_SwitchTrackException_Base::Reset(void)
{
    ResetDtrack_id();
    ResetCode();
}

BEGIN_NAMED_BASE_CLASS_INFO("TMgr-SwitchTrackException", CTMgr_SwitchTrackException)
{
    SET_CLASS_MODULE("NCBI-TrackManager");
    ADD_NAMED_REF_MEMBER("dtrack-id", m_Dtrack_id, CTMgr_DTrackId);
    ADD_NAMED_ENUM_MEMBER("code", m_Code, ETMgr_SwitchTrackExceptionCode)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CTMgr_SwitchTrackException_Base::CTMgr_SwitchTrackException_Base(void)
    : m_Code((int)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetDtrack_id();
    }
}

// destructor
CTMgr_SwitchTrackException_Base::~CTMgr_SwitchTrackException_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

