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
 *   'blast.asn'.
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
#include <objects/blast/Blast4_value.hpp>
#include <objects/blast/Blast4_cutoff.hpp>
#include <objects/blast/Blast4_mask.hpp>
#include <objects/scoremat/PssmWithParameters.hpp>
#include <objects/seq/Bioseq.hpp>
#include <objects/seqalign/Seq_align.hpp>
#include <objects/seqalign/Seq_align_set.hpp>
#include <objects/seqloc/Seq_id.hpp>
#include <objects/seqloc/Seq_loc.hpp>
#include <objects/seqset/Bioseq_set.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CBlast4_value_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CBlast4_value_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Big_integer_list:
        m_Big_integer_list.Destruct();
        break;
    case e_Bioseq_list:
        m_Bioseq_list.Destruct();
        break;
    case e_Boolean_list:
        m_Boolean_list.Destruct();
        break;
    case e_Cutoff_list:
        m_Cutoff_list.Destruct();
        break;
    case e_Integer_list:
        m_Integer_list.Destruct();
        break;
    case e_Matrix_list:
        m_Matrix_list.Destruct();
        break;
    case e_Real_list:
        m_Real_list.Destruct();
        break;
    case e_Seq_align_list:
        m_Seq_align_list.Destruct();
        break;
    case e_Seq_id_list:
        m_Seq_id_list.Destruct();
        break;
    case e_Seq_loc_list:
        m_Seq_loc_list.Destruct();
        break;
    case e_Strand_type_list:
        m_Strand_type_list.Destruct();
        break;
    case e_String_list:
        m_String_list.Destruct();
        break;
    case e_String:
        m_string.Destruct();
        break;
    case e_Bioseq:
    case e_Cutoff:
    case e_Matrix:
    case e_Seq_align:
    case e_Seq_id:
    case e_Seq_loc:
    case e_Bioseq_set:
    case e_Seq_align_set:
    case e_Query_mask:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CBlast4_value_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Big_integer:
        m_Big_integer = 0;
        break;
    case e_Bioseq:
        (m_object = new(pool) ncbi::objects::CBioseq())->AddReference();
        break;
    case e_Boolean:
        m_Boolean = 0;
        break;
    case e_Cutoff:
        (m_object = new(pool) ncbi::objects::CBlast4_cutoff())->AddReference();
        break;
    case e_Integer:
        m_Integer = 0;
        break;
    case e_Matrix:
        (m_object = new(pool) ncbi::objects::CPssmWithParameters())->AddReference();
        break;
    case e_Real:
        m_Real = 0;
        break;
    case e_Seq_align:
        (m_object = new(pool) ncbi::objects::CSeq_align())->AddReference();
        break;
    case e_Seq_id:
        (m_object = new(pool) ncbi::objects::CSeq_id())->AddReference();
        break;
    case e_Seq_loc:
        (m_object = new(pool) ncbi::objects::CSeq_loc())->AddReference();
        break;
    case e_Strand_type:
        m_Strand_type = (ncbi::objects::EBlast4_strand_type)(0);
        break;
    case e_Big_integer_list:
        m_Big_integer_list.Construct();
        break;
    case e_Bioseq_list:
        m_Bioseq_list.Construct();
        break;
    case e_Boolean_list:
        m_Boolean_list.Construct();
        break;
    case e_Cutoff_list:
        m_Cutoff_list.Construct();
        break;
    case e_Integer_list:
        m_Integer_list.Construct();
        break;
    case e_Matrix_list:
        m_Matrix_list.Construct();
        break;
    case e_Real_list:
        m_Real_list.Construct();
        break;
    case e_Seq_align_list:
        m_Seq_align_list.Construct();
        break;
    case e_Seq_id_list:
        m_Seq_id_list.Construct();
        break;
    case e_Seq_loc_list:
        m_Seq_loc_list.Construct();
        break;
    case e_Strand_type_list:
        m_Strand_type_list.Construct();
        break;
    case e_String_list:
        m_String_list.Construct();
        break;
    case e_Bioseq_set:
        (m_object = new(pool) ncbi::objects::CBioseq_set())->AddReference();
        break;
    case e_Seq_align_set:
        (m_object = new(pool) ncbi::objects::CSeq_align_set())->AddReference();
        break;
    case e_Query_mask:
        (m_object = new(pool) ncbi::objects::CBlast4_mask())->AddReference();
        break;
    case e_String:
        m_string.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CBlast4_value_Base::sm_SelectionNames[] = {
    "not set",
    "big-integer",
    "bioseq",
    "boolean",
    "cutoff",
    "integer",
    "matrix",
    "real",
    "seq-align",
    "seq-id",
    "seq-loc",
    "strand-type",
    "string",
    "big-integer-list",
    "bioseq-list",
    "boolean-list",
    "cutoff-list",
    "integer-list",
    "matrix-list",
    "real-list",
    "seq-align-list",
    "seq-id-list",
    "seq-loc-list",
    "strand-type-list",
    "string-list",
    "bioseq-set",
    "seq-align-set",
    "query-mask"
};

NCBI_NS_STD::string CBlast4_value_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CBlast4_value_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CBlast4_value_Base::TBioseq& CBlast4_value_Base::GetBioseq(void) const
{
    CheckSelected(e_Bioseq);
    return *static_cast<const TBioseq*>(m_object);
}

CBlast4_value_Base::TBioseq& CBlast4_value_Base::SetBioseq(void)
{
    Select(e_Bioseq, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TBioseq*>(m_object);
}

void CBlast4_value_Base::SetBioseq(CBlast4_value_Base::TBioseq& value)
{
    TBioseq* ptr = &value;
    if ( m_choice != e_Bioseq || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Bioseq;
    }
}

const CBlast4_value_Base::TCutoff& CBlast4_value_Base::GetCutoff(void) const
{
    CheckSelected(e_Cutoff);
    return *static_cast<const TCutoff*>(m_object);
}

CBlast4_value_Base::TCutoff& CBlast4_value_Base::SetCutoff(void)
{
    Select(e_Cutoff, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TCutoff*>(m_object);
}

void CBlast4_value_Base::SetCutoff(CBlast4_value_Base::TCutoff& value)
{
    TCutoff* ptr = &value;
    if ( m_choice != e_Cutoff || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Cutoff;
    }
}

const CBlast4_value_Base::TMatrix& CBlast4_value_Base::GetMatrix(void) const
{
    CheckSelected(e_Matrix);
    return *static_cast<const TMatrix*>(m_object);
}

CBlast4_value_Base::TMatrix& CBlast4_value_Base::SetMatrix(void)
{
    Select(e_Matrix, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TMatrix*>(m_object);
}

void CBlast4_value_Base::SetMatrix(CBlast4_value_Base::TMatrix& value)
{
    TMatrix* ptr = &value;
    if ( m_choice != e_Matrix || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Matrix;
    }
}

const CBlast4_value_Base::TSeq_align& CBlast4_value_Base::GetSeq_align(void) const
{
    CheckSelected(e_Seq_align);
    return *static_cast<const TSeq_align*>(m_object);
}

CBlast4_value_Base::TSeq_align& CBlast4_value_Base::SetSeq_align(void)
{
    Select(e_Seq_align, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSeq_align*>(m_object);
}

void CBlast4_value_Base::SetSeq_align(CBlast4_value_Base::TSeq_align& value)
{
    TSeq_align* ptr = &value;
    if ( m_choice != e_Seq_align || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Seq_align;
    }
}

const CBlast4_value_Base::TSeq_id& CBlast4_value_Base::GetSeq_id(void) const
{
    CheckSelected(e_Seq_id);
    return *static_cast<const TSeq_id*>(m_object);
}

CBlast4_value_Base::TSeq_id& CBlast4_value_Base::SetSeq_id(void)
{
    Select(e_Seq_id, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSeq_id*>(m_object);
}

void CBlast4_value_Base::SetSeq_id(CBlast4_value_Base::TSeq_id& value)
{
    TSeq_id* ptr = &value;
    if ( m_choice != e_Seq_id || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Seq_id;
    }
}

const CBlast4_value_Base::TSeq_loc& CBlast4_value_Base::GetSeq_loc(void) const
{
    CheckSelected(e_Seq_loc);
    return *static_cast<const TSeq_loc*>(m_object);
}

CBlast4_value_Base::TSeq_loc& CBlast4_value_Base::SetSeq_loc(void)
{
    Select(e_Seq_loc, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSeq_loc*>(m_object);
}

void CBlast4_value_Base::SetSeq_loc(CBlast4_value_Base::TSeq_loc& value)
{
    TSeq_loc* ptr = &value;
    if ( m_choice != e_Seq_loc || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Seq_loc;
    }
}

void CBlast4_value_Base::SetString(const CBlast4_value_Base::TString& value)
{
    Select(e_String, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

const CBlast4_value_Base::TBioseq_set& CBlast4_value_Base::GetBioseq_set(void) const
{
    CheckSelected(e_Bioseq_set);
    return *static_cast<const TBioseq_set*>(m_object);
}

CBlast4_value_Base::TBioseq_set& CBlast4_value_Base::SetBioseq_set(void)
{
    Select(e_Bioseq_set, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TBioseq_set*>(m_object);
}

void CBlast4_value_Base::SetBioseq_set(CBlast4_value_Base::TBioseq_set& value)
{
    TBioseq_set* ptr = &value;
    if ( m_choice != e_Bioseq_set || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Bioseq_set;
    }
}

const CBlast4_value_Base::TSeq_align_set& CBlast4_value_Base::GetSeq_align_set(void) const
{
    CheckSelected(e_Seq_align_set);
    return *static_cast<const TSeq_align_set*>(m_object);
}

CBlast4_value_Base::TSeq_align_set& CBlast4_value_Base::SetSeq_align_set(void)
{
    Select(e_Seq_align_set, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSeq_align_set*>(m_object);
}

void CBlast4_value_Base::SetSeq_align_set(CBlast4_value_Base::TSeq_align_set& value)
{
    TSeq_align_set* ptr = &value;
    if ( m_choice != e_Seq_align_set || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Seq_align_set;
    }
}

const CBlast4_value_Base::TQuery_mask& CBlast4_value_Base::GetQuery_mask(void) const
{
    CheckSelected(e_Query_mask);
    return *static_cast<const TQuery_mask*>(m_object);
}

CBlast4_value_Base::TQuery_mask& CBlast4_value_Base::SetQuery_mask(void)
{
    Select(e_Query_mask, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TQuery_mask*>(m_object);
}

void CBlast4_value_Base::SetQuery_mask(CBlast4_value_Base::TQuery_mask& value)
{
    TQuery_mask* ptr = &value;
    if ( m_choice != e_Query_mask || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Query_mask;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Blast4-value", CBlast4_value)
{
    SET_CHOICE_MODULE("NCBI-Blast4");
    ADD_NAMED_CHOICE_VARIANT("big-integer", m_Big_integer, BigInt, ());
    ADD_NAMED_REF_CHOICE_VARIANT("bioseq", m_object, CBioseq);
    ADD_NAMED_STD_CHOICE_VARIANT("boolean", m_Boolean);
    ADD_NAMED_REF_CHOICE_VARIANT("cutoff", m_object, CBlast4_cutoff);
    ADD_NAMED_STD_CHOICE_VARIANT("integer", m_Integer);
    ADD_NAMED_REF_CHOICE_VARIANT("matrix", m_object, CPssmWithParameters);
    ADD_NAMED_STD_CHOICE_VARIANT("real", m_Real);
    ADD_NAMED_REF_CHOICE_VARIANT("seq-align", m_object, CSeq_align);
    ADD_NAMED_REF_CHOICE_VARIANT("seq-id", m_object, CSeq_id);
    ADD_NAMED_REF_CHOICE_VARIANT("seq-loc", m_object, CSeq_loc);
    ADD_NAMED_ENUM_CHOICE_VARIANT("strand-type", m_Strand_type, EBlast4_strand_type);
    ADD_NAMED_BUF_CHOICE_VARIANT("string", m_string, STD, (string));
    ADD_NAMED_BUF_CHOICE_VARIANT("big-integer-list", m_Big_integer_list, STL_list, (BigInt, ()));
    ADD_NAMED_BUF_CHOICE_VARIANT("bioseq-list", m_Bioseq_list, STL_list, (STL_CRef, (CLASS, (CBioseq))));
    ADD_NAMED_BUF_CHOICE_VARIANT("boolean-list", m_Boolean_list, STL_list, (STD, (bool)));
    ADD_NAMED_BUF_CHOICE_VARIANT("cutoff-list", m_Cutoff_list, STL_list, (STL_CRef, (CLASS, (CBlast4_cutoff))));
    ADD_NAMED_BUF_CHOICE_VARIANT("integer-list", m_Integer_list, STL_list, (STD, (int)));
    ADD_NAMED_BUF_CHOICE_VARIANT("matrix-list", m_Matrix_list, STL_list, (STL_CRef, (CLASS, (CPssmWithParameters))));
    ADD_NAMED_BUF_CHOICE_VARIANT("real-list", m_Real_list, STL_list, (STD, (double)));
    ADD_NAMED_BUF_CHOICE_VARIANT("seq-align-list", m_Seq_align_list, STL_list, (STL_CRef, (CLASS, (CSeq_align))));
    ADD_NAMED_BUF_CHOICE_VARIANT("seq-id-list", m_Seq_id_list, STL_list, (STL_CRef, (CLASS, (CSeq_id))));
    ADD_NAMED_BUF_CHOICE_VARIANT("seq-loc-list", m_Seq_loc_list, STL_list, (STL_CRef, (CLASS, (CSeq_loc))));
    ADD_NAMED_BUF_CHOICE_VARIANT("strand-type-list", m_Strand_type_list, STL_list, (ENUM, (EBlast4_strand_type, EBlast4_strand_type)));
    ADD_NAMED_BUF_CHOICE_VARIANT("string-list", m_String_list, STL_list, (STD, (string)));
    ADD_NAMED_REF_CHOICE_VARIANT("bioseq-set", m_object, CBioseq_set);
    ADD_NAMED_REF_CHOICE_VARIANT("seq-align-set", m_object, CSeq_align_set);
    ADD_NAMED_REF_CHOICE_VARIANT("query-mask", m_object, CBlast4_mask);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CBlast4_value_Base::CBlast4_value_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CBlast4_value_Base::~CBlast4_value_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

