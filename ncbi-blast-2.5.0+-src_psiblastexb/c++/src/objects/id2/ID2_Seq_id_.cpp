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
#include <objects/id2/ID2_Seq_id.hpp>
#include <objects/seqloc/Seq_id.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CID2_Seq_id_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CID2_Seq_id_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_String:
        m_string.Destruct();
        break;
    case e_Seq_id:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CID2_Seq_id_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Seq_id:
        (m_object = new(pool) ncbi::objects::CSeq_id())->AddReference();
        break;
    case e_String:
        m_string.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CID2_Seq_id_Base::sm_SelectionNames[] = {
    "not set",
    "string",
    "seq-id"
};

NCBI_NS_STD::string CID2_Seq_id_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CID2_Seq_id_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CID2_Seq_id_Base::SetString(const CID2_Seq_id_Base::TString& value)
{
    Select(e_String, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

const CID2_Seq_id_Base::TSeq_id& CID2_Seq_id_Base::GetSeq_id(void) const
{
    CheckSelected(e_Seq_id);
    return *static_cast<const TSeq_id*>(m_object);
}

CID2_Seq_id_Base::TSeq_id& CID2_Seq_id_Base::SetSeq_id(void)
{
    Select(e_Seq_id, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSeq_id*>(m_object);
}

void CID2_Seq_id_Base::SetSeq_id(CID2_Seq_id_Base::TSeq_id& value)
{
    TSeq_id* ptr = &value;
    if ( m_choice != e_Seq_id || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Seq_id;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("ID2-Seq-id", CID2_Seq_id)
{
    SET_CHOICE_MODULE("NCBI-ID2Access");
    ADD_NAMED_BUF_CHOICE_VARIANT("string", m_string, STD, (string));
    ADD_NAMED_REF_CHOICE_VARIANT("seq-id", m_object, CSeq_id);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CID2_Seq_id_Base::CID2_Seq_id_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CID2_Seq_id_Base::~CID2_Seq_id_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

