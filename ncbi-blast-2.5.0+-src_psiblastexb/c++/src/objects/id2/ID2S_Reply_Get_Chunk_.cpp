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
 *   'id2.asn'.
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
#include <objects/id2/ID2S_Reply_Get_Chunk.hpp>
#include <objects/id2/ID2_Blob_Id.hpp>
#include <objects/id2/ID2_Reply_Data.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CID2S_Reply_Get_Chunk_Base::ResetBlob_id(void)
{
    if ( !m_Blob_id ) {
        m_Blob_id.Reset(new TBlob_id());
        return;
    }
    (*m_Blob_id).Reset();
}

void CID2S_Reply_Get_Chunk_Base::SetBlob_id(CID2S_Reply_Get_Chunk_Base::TBlob_id& value)
{
    m_Blob_id.Reset(&value);
}

void CID2S_Reply_Get_Chunk_Base::ResetData(void)
{
    m_Data.Reset();
}

void CID2S_Reply_Get_Chunk_Base::SetData(CID2S_Reply_Get_Chunk_Base::TData& value)
{
    m_Data.Reset(&value);
}

CID2S_Reply_Get_Chunk_Base::TData& CID2S_Reply_Get_Chunk_Base::SetData(void)
{
    if ( !m_Data )
        m_Data.Reset(new ncbi::objects::CID2_Reply_Data());
    return (*m_Data);
}

void CID2S_Reply_Get_Chunk_Base::Reset(void)
{
    ResetBlob_id();
    ResetChunk_id();
    ResetData();
}

BEGIN_NAMED_BASE_CLASS_INFO("ID2S-Reply-Get-Chunk", CID2S_Reply_Get_Chunk)
{
    SET_CLASS_MODULE("NCBI-ID2Access");
    ADD_NAMED_REF_MEMBER("blob-id", m_Blob_id, CID2_Blob_Id);
    ADD_NAMED_MEMBER("chunk-id", m_Chunk_id, CLASS, (CID2S_Chunk_Id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("data", m_Data, CID2_Reply_Data)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CID2S_Reply_Get_Chunk_Base::CID2S_Reply_Get_Chunk_Base(void)
    : m_Chunk_id(CID2S_Chunk_Id(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetBlob_id();
    }
}

// destructor
CID2S_Reply_Get_Chunk_Base::~CID2S_Reply_Get_Chunk_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

