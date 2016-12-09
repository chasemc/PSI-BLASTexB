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
 *   'macro.asn'.
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
#include <objects/macro/Sequence_constraint.hpp>
#include <objects/macro/Quantity_constraint.hpp>
#include <objects/macro/Seque_const_mol_type_const.hpp>
#include <objects/macro/String_constraint.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CSequence_constraint_Base::ResetSeqtype(void)
{
    m_Seqtype.Reset();
}

void CSequence_constraint_Base::SetSeqtype(CSequence_constraint_Base::TSeqtype& value)
{
    m_Seqtype.Reset(&value);
}

CSequence_constraint_Base::TSeqtype& CSequence_constraint_Base::SetSeqtype(void)
{
    if ( !m_Seqtype )
        m_Seqtype.Reset(new ncbi::objects::CSequence_constraint_mol_type_constraint());
    return (*m_Seqtype);
}

void CSequence_constraint_Base::ResetId(void)
{
    m_Id.Reset();
}

void CSequence_constraint_Base::SetId(CSequence_constraint_Base::TId& value)
{
    m_Id.Reset(&value);
}

CSequence_constraint_Base::TId& CSequence_constraint_Base::SetId(void)
{
    if ( !m_Id )
        m_Id.Reset(new ncbi::objects::CString_constraint());
    return (*m_Id);
}

void CSequence_constraint_Base::ResetNum_type_features(void)
{
    m_Num_type_features.Reset();
}

void CSequence_constraint_Base::SetNum_type_features(CSequence_constraint_Base::TNum_type_features& value)
{
    m_Num_type_features.Reset(&value);
}

CSequence_constraint_Base::TNum_type_features& CSequence_constraint_Base::SetNum_type_features(void)
{
    if ( !m_Num_type_features )
        m_Num_type_features.Reset(new ncbi::objects::CQuantity_constraint());
    return (*m_Num_type_features);
}

void CSequence_constraint_Base::ResetNum_features(void)
{
    m_Num_features.Reset();
}

void CSequence_constraint_Base::SetNum_features(CSequence_constraint_Base::TNum_features& value)
{
    m_Num_features.Reset(&value);
}

CSequence_constraint_Base::TNum_features& CSequence_constraint_Base::SetNum_features(void)
{
    if ( !m_Num_features )
        m_Num_features.Reset(new ncbi::objects::CQuantity_constraint());
    return (*m_Num_features);
}

void CSequence_constraint_Base::ResetLength(void)
{
    m_Length.Reset();
}

void CSequence_constraint_Base::SetLength(CSequence_constraint_Base::TLength& value)
{
    m_Length.Reset(&value);
}

CSequence_constraint_Base::TLength& CSequence_constraint_Base::SetLength(void)
{
    if ( !m_Length )
        m_Length.Reset(new ncbi::objects::CQuantity_constraint());
    return (*m_Length);
}

void CSequence_constraint_Base::Reset(void)
{
    ResetSeqtype();
    ResetId();
    ResetFeature();
    ResetNum_type_features();
    ResetNum_features();
    ResetLength();
    ResetStrandedness();
}

BEGIN_NAMED_BASE_CLASS_INFO("Sequence-constraint", CSequence_constraint)
{
    SET_CLASS_MODULE("NCBI-Macro");
    ADD_NAMED_REF_MEMBER("seqtype", m_Seqtype, CSequence_constraint_mol_type_constraint)->SetOptional();
    ADD_NAMED_REF_MEMBER("id", m_Id, CString_constraint)->SetOptional();
    ADD_NAMED_ENUM_MEMBER("feature", m_Feature, EMacro_feature_type)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("num-type-features", m_Num_type_features, CQuantity_constraint)->SetOptional();
    ADD_NAMED_REF_MEMBER("num-features", m_Num_features, CQuantity_constraint)->SetOptional();
    ADD_NAMED_REF_MEMBER("length", m_Length, CQuantity_constraint)->SetOptional();
    ADD_NAMED_ENUM_MEMBER("strandedness", m_Strandedness, EFeature_strandedness_constraint)->SetDefault(new TStrandedness(eFeature_strandedness_constraint_any))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CSequence_constraint_Base::CSequence_constraint_Base(void)
    : m_Feature((ncbi::objects::EMacro_feature_type)(0)), m_Strandedness(eFeature_strandedness_constraint_any)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CSequence_constraint_Base::~CSequence_constraint_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

