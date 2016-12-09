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
 *   'seqedit.asn'.
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
#include <objects/seqedit/SeqEdit_Cmd_AttachSet.hpp>
#include <objects/seqedit/SeqEdit_Id.hpp>
#include <objects/seqset/Bioseq_set.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CSeqEdit_Cmd_AttachSet_Base::ResetId(void)
{
    if ( !m_Id ) {
        m_Id.Reset(new TId());
        return;
    }
    (*m_Id).Reset();
}

void CSeqEdit_Cmd_AttachSet_Base::SetId(CSeqEdit_Cmd_AttachSet_Base::TId& value)
{
    m_Id.Reset(&value);
}

void CSeqEdit_Cmd_AttachSet_Base::ResetSet(void)
{
    if ( !m_Set ) {
        m_Set.Reset(new TSet());
        return;
    }
    (*m_Set).Reset();
}

void CSeqEdit_Cmd_AttachSet_Base::SetSet(CSeqEdit_Cmd_AttachSet_Base::TSet& value)
{
    m_Set.Reset(&value);
}

void CSeqEdit_Cmd_AttachSet_Base::Reset(void)
{
    ResetId();
    ResetSet();
}

BEGIN_NAMED_BASE_CLASS_INFO("SeqEdit-Cmd-AttachSet", CSeqEdit_Cmd_AttachSet)
{
    SET_CLASS_MODULE("NCBI-SeqEdit");
    ADD_NAMED_REF_MEMBER("id", m_Id, CSeqEdit_Id);
    ADD_NAMED_REF_MEMBER("set", m_Set, CBioseq_set);
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CSeqEdit_Cmd_AttachSet_Base::CSeqEdit_Cmd_AttachSet_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetId();
        ResetSet();
    }
}

// destructor
CSeqEdit_Cmd_AttachSet_Base::~CSeqEdit_Cmd_AttachSet_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

