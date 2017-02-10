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
 *   'seqloc.asn'.
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
#include <objects/seqloc/Seq_loc.hpp>
#include <objects/seqfeat/Feat_id.hpp>
#include <objects/seqloc/Packed_seqint.hpp>
#include <objects/seqloc/Packed_seqpnt.hpp>
#include <objects/seqloc/Seq_bond.hpp>
#include <objects/seqloc/Seq_id.hpp>
#include <objects/seqloc/Seq_interval.hpp>
#include <objects/seqloc/Seq_loc_equiv.hpp>
#include <objects/seqloc/Seq_loc_mix.hpp>
#include <objects/seqloc/Seq_point.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CSeq_loc_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CSeq_loc_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Empty:
    case e_Whole:
    case e_Int:
    case e_Packed_int:
    case e_Pnt:
    case e_Packed_pnt:
    case e_Mix:
    case e_Equiv:
    case e_Bond:
    case e_Feat:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CSeq_loc_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Empty:
        (m_object = new(pool) ncbi::objects::CSeq_id())->AddReference();
        break;
    case e_Whole:
        (m_object = new(pool) ncbi::objects::CSeq_id())->AddReference();
        break;
    case e_Int:
        (m_object = new(pool) ncbi::objects::CSeq_interval())->AddReference();
        break;
    case e_Packed_int:
        (m_object = new(pool) ncbi::objects::CPacked_seqint())->AddReference();
        break;
    case e_Pnt:
        (m_object = new(pool) ncbi::objects::CSeq_point())->AddReference();
        break;
    case e_Packed_pnt:
        (m_object = new(pool) ncbi::objects::CPacked_seqpnt())->AddReference();
        break;
    case e_Mix:
        (m_object = new(pool) ncbi::objects::CSeq_loc_mix())->AddReference();
        break;
    case e_Equiv:
        (m_object = new(pool) ncbi::objects::CSeq_loc_equiv())->AddReference();
        break;
    case e_Bond:
        (m_object = new(pool) ncbi::objects::CSeq_bond())->AddReference();
        break;
    case e_Feat:
        (m_object = new(pool) ncbi::objects::CFeat_id())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CSeq_loc_Base::sm_SelectionNames[] = {
    "not set",
    "null",
    "empty",
    "whole",
    "int",
    "packed-int",
    "pnt",
    "packed-pnt",
    "mix",
    "equiv",
    "bond",
    "feat"
};

NCBI_NS_STD::string CSeq_loc_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CSeq_loc_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CSeq_loc_Base::TEmpty& CSeq_loc_Base::GetEmpty(void) const
{
    CheckSelected(e_Empty);
    return *static_cast<const TEmpty*>(m_object);
}

CSeq_loc_Base::TEmpty& CSeq_loc_Base::SetEmpty(void)
{
    Select(e_Empty, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TEmpty*>(m_object);
}

void CSeq_loc_Base::SetEmpty(CSeq_loc_Base::TEmpty& value)
{
    TEmpty* ptr = &value;
    if ( m_choice != e_Empty || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Empty;
    }
}

const CSeq_loc_Base::TWhole& CSeq_loc_Base::GetWhole(void) const
{
    CheckSelected(e_Whole);
    return *static_cast<const TWhole*>(m_object);
}

CSeq_loc_Base::TWhole& CSeq_loc_Base::SetWhole(void)
{
    Select(e_Whole, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TWhole*>(m_object);
}

void CSeq_loc_Base::SetWhole(CSeq_loc_Base::TWhole& value)
{
    TWhole* ptr = &value;
    if ( m_choice != e_Whole || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Whole;
    }
}

const CSeq_loc_Base::TInt& CSeq_loc_Base::GetInt(void) const
{
    CheckSelected(e_Int);
    return *static_cast<const TInt*>(m_object);
}

CSeq_loc_Base::TInt& CSeq_loc_Base::SetInt(void)
{
    Select(e_Int, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TInt*>(m_object);
}

void CSeq_loc_Base::SetInt(CSeq_loc_Base::TInt& value)
{
    TInt* ptr = &value;
    if ( m_choice != e_Int || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Int;
    }
}

const CSeq_loc_Base::TPacked_int& CSeq_loc_Base::GetPacked_int(void) const
{
    CheckSelected(e_Packed_int);
    return *static_cast<const TPacked_int*>(m_object);
}

CSeq_loc_Base::TPacked_int& CSeq_loc_Base::SetPacked_int(void)
{
    Select(e_Packed_int, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TPacked_int*>(m_object);
}

void CSeq_loc_Base::SetPacked_int(CSeq_loc_Base::TPacked_int& value)
{
    TPacked_int* ptr = &value;
    if ( m_choice != e_Packed_int || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Packed_int;
    }
}

const CSeq_loc_Base::TPnt& CSeq_loc_Base::GetPnt(void) const
{
    CheckSelected(e_Pnt);
    return *static_cast<const TPnt*>(m_object);
}

CSeq_loc_Base::TPnt& CSeq_loc_Base::SetPnt(void)
{
    Select(e_Pnt, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TPnt*>(m_object);
}

void CSeq_loc_Base::SetPnt(CSeq_loc_Base::TPnt& value)
{
    TPnt* ptr = &value;
    if ( m_choice != e_Pnt || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Pnt;
    }
}

const CSeq_loc_Base::TPacked_pnt& CSeq_loc_Base::GetPacked_pnt(void) const
{
    CheckSelected(e_Packed_pnt);
    return *static_cast<const TPacked_pnt*>(m_object);
}

CSeq_loc_Base::TPacked_pnt& CSeq_loc_Base::SetPacked_pnt(void)
{
    Select(e_Packed_pnt, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TPacked_pnt*>(m_object);
}

void CSeq_loc_Base::SetPacked_pnt(CSeq_loc_Base::TPacked_pnt& value)
{
    TPacked_pnt* ptr = &value;
    if ( m_choice != e_Packed_pnt || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Packed_pnt;
    }
}

const CSeq_loc_Base::TMix& CSeq_loc_Base::GetMix(void) const
{
    CheckSelected(e_Mix);
    return *static_cast<const TMix*>(m_object);
}

CSeq_loc_Base::TMix& CSeq_loc_Base::SetMix(void)
{
    Select(e_Mix, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TMix*>(m_object);
}

void CSeq_loc_Base::SetMix(CSeq_loc_Base::TMix& value)
{
    TMix* ptr = &value;
    if ( m_choice != e_Mix || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Mix;
    }
}

const CSeq_loc_Base::TEquiv& CSeq_loc_Base::GetEquiv(void) const
{
    CheckSelected(e_Equiv);
    return *static_cast<const TEquiv*>(m_object);
}

CSeq_loc_Base::TEquiv& CSeq_loc_Base::SetEquiv(void)
{
    Select(e_Equiv, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TEquiv*>(m_object);
}

void CSeq_loc_Base::SetEquiv(CSeq_loc_Base::TEquiv& value)
{
    TEquiv* ptr = &value;
    if ( m_choice != e_Equiv || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Equiv;
    }
}

const CSeq_loc_Base::TBond& CSeq_loc_Base::GetBond(void) const
{
    CheckSelected(e_Bond);
    return *static_cast<const TBond*>(m_object);
}

CSeq_loc_Base::TBond& CSeq_loc_Base::SetBond(void)
{
    Select(e_Bond, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TBond*>(m_object);
}

void CSeq_loc_Base::SetBond(CSeq_loc_Base::TBond& value)
{
    TBond* ptr = &value;
    if ( m_choice != e_Bond || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Bond;
    }
}

const CSeq_loc_Base::TFeat& CSeq_loc_Base::GetFeat(void) const
{
    CheckSelected(e_Feat);
    return *static_cast<const TFeat*>(m_object);
}

CSeq_loc_Base::TFeat& CSeq_loc_Base::SetFeat(void)
{
    Select(e_Feat, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TFeat*>(m_object);
}

void CSeq_loc_Base::SetFeat(CSeq_loc_Base::TFeat& value)
{
    TFeat* ptr = &value;
    if ( m_choice != e_Feat || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Feat;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Seq-loc", CSeq_loc)
{
    SET_CHOICE_MODULE("NCBI-Seqloc");
    ADD_NAMED_NULL_CHOICE_VARIANT("null", null, ());
    ADD_NAMED_REF_CHOICE_VARIANT("empty", m_object, CSeq_id);
    ADD_NAMED_REF_CHOICE_VARIANT("whole", m_object, CSeq_id);
    ADD_NAMED_REF_CHOICE_VARIANT("int", m_object, CSeq_interval);
    ADD_NAMED_REF_CHOICE_VARIANT("packed-int", m_object, CPacked_seqint);
    ADD_NAMED_REF_CHOICE_VARIANT("pnt", m_object, CSeq_point);
    ADD_NAMED_REF_CHOICE_VARIANT("packed-pnt", m_object, CPacked_seqpnt);
    ADD_NAMED_REF_CHOICE_VARIANT("mix", m_object, CSeq_loc_mix);
    ADD_NAMED_REF_CHOICE_VARIANT("equiv", m_object, CSeq_loc_equiv);
    ADD_NAMED_REF_CHOICE_VARIANT("bond", m_object, CSeq_bond);
    ADD_NAMED_REF_CHOICE_VARIANT("feat", m_object, CFeat_id);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CSeq_loc_Base::CSeq_loc_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CSeq_loc_Base::~CSeq_loc_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
