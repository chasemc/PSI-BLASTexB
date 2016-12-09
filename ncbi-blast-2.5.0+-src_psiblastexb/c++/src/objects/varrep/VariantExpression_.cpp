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
 *   'varrep.asn'.
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
#include <objects/varrep/VariantExpression.hpp>
#include <objects/varrep/SequenceVariant.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CVariantExpression_Base::ResetInput_expr(void)
{
    m_Input_expr.erase();
    m_set_State[0] &= ~0x3;
}

void CVariantExpression_Base::ResetReference_id(void)
{
    m_Reference_id.erase();
    m_set_State[0] &= ~0xc;
}

void CVariantExpression_Base::ResetSequence_variant(void)
{
    if ( !m_Sequence_variant ) {
        m_Sequence_variant.Reset(new TSequence_variant());
        return;
    }
    (*m_Sequence_variant).Reset();
}

void CVariantExpression_Base::SetSequence_variant(CVariantExpression_Base::TSequence_variant& value)
{
    m_Sequence_variant.Reset(&value);
}

void CVariantExpression_Base::Reset(void)
{
    ResetInput_expr();
    ResetReference_id();
    ResetSequence_variant();
}

BEGIN_NAMED_BASE_CLASS_INFO("VariantExpression", CVariantExpression)
{
    SET_CLASS_MODULE("NCBI-VariationIRep");
    ADD_NAMED_STD_MEMBER("input-expr", m_Input_expr)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("reference-id", m_Reference_id)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("sequence-variant", m_Sequence_variant, CSequenceVariant);
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CVariantExpression_Base::CVariantExpression_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetSequence_variant();
    }
}

// destructor
CVariantExpression_Base::~CVariantExpression_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

