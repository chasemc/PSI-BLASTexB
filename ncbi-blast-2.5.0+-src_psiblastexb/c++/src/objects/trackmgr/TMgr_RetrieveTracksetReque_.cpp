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
#include <objects/trackmgr/TMgr_RetrieveTracksetReque.hpp>
#include <objects/trackmgr/TMgr_GenomeContext.hpp>
#include <objects/trackmgr/TMgr_Identity.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_RetrieveTracksetRequest_Base::ResetGenome_context(void)
{
    if ( !m_Genome_context ) {
        m_Genome_context.Reset(new TGenome_context());
        return;
    }
    (*m_Genome_context).Reset();
}

void CTMgr_RetrieveTracksetRequest_Base::SetGenome_context(CTMgr_RetrieveTracksetRequest_Base::TGenome_context& value)
{
    m_Genome_context.Reset(&value);
}

void CTMgr_RetrieveTracksetRequest_Base::ResetIdentity(void)
{
    m_Identity.Reset();
}

void CTMgr_RetrieveTracksetRequest_Base::SetIdentity(CTMgr_RetrieveTracksetRequest_Base::TIdentity& value)
{
    m_Identity.Reset(&value);
}

CTMgr_RetrieveTracksetRequest_Base::TIdentity& CTMgr_RetrieveTracksetRequest_Base::SetIdentity(void)
{
    if ( !m_Identity )
        m_Identity.Reset(new ncbi::objects::CTMgr_Identity());
    return (*m_Identity);
}

void CTMgr_RetrieveTracksetRequest_Base::Reset(void)
{
    ResetGenome_context();
    ResetIdentity();
}

BEGIN_NAMED_BASE_CLASS_INFO("TMgr-RetrieveTracksetRequest", CTMgr_RetrieveTracksetRequest)
{
    SET_CLASS_MODULE("NCBI-TrackManager");
    ADD_NAMED_REF_MEMBER("genome-context", m_Genome_context, CTMgr_GenomeContext);
    ADD_NAMED_REF_MEMBER("identity", m_Identity, CTMgr_Identity)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CTMgr_RetrieveTracksetRequest_Base::CTMgr_RetrieveTracksetRequest_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetGenome_context();
    }
}

// destructor
CTMgr_RetrieveTracksetRequest_Base::~CTMgr_RetrieveTracksetRequest_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

