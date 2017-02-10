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
#include <objects/varrep/NtSite.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CNtSite_Base::C_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CNtSite_Base::C_Base::ResetSelection(void)
{
    m_choice = e_not_set;
}

void CNtSite_Base::C_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    case e_Val:
        m_Val = 0;
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CNtSite_Base::C_Base::sm_SelectionNames[] = {
    "not set",
    "val",
    "unknown"
};

NCBI_NS_STD::string CNtSite_Base::C_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CNtSite_Base::C_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CNtSite_Base::C_Base)
{
    SET_INTERNAL_NAME("NtSite", "base");
    SET_CHOICE_MODULE("NCBI-VariationIRep");
    ADD_NAMED_STD_CHOICE_VARIANT("val", m_Val);
    ADD_NAMED_NULL_CHOICE_VARIANT("unknown", null, ());
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CNtSite_Base::C_Base::C_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CNtSite_Base::C_Base::~C_Base(void)
{
    Reset();
}


void CNtSite_Base::C_Offset::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CNtSite_Base::C_Offset::ResetSelection(void)
{
    m_choice = e_not_set;
}

void CNtSite_Base::C_Offset::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    case e_Val:
        m_Val = 0;
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CNtSite_Base::C_Offset::sm_SelectionNames[] = {
    "not set",
    "val",
    "plus-unknown",
    "minus-unknown"
};

NCBI_NS_STD::string CNtSite_Base::C_Offset::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CNtSite_Base::C_Offset::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CNtSite_Base::C_Offset)
{
    SET_INTERNAL_NAME("NtSite", "offset");
    SET_CHOICE_MODULE("NCBI-VariationIRep");
    ADD_NAMED_STD_CHOICE_VARIANT("val", m_Val);
    ADD_NAMED_NULL_CHOICE_VARIANT("plus-unknown", null, ());
    ADD_NAMED_NULL_CHOICE_VARIANT("minus-unknown", null, ());
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CNtSite_Base::C_Offset::C_Offset(void)
    : m_choice(e_not_set)
{
}

// destructor
CNtSite_Base::C_Offset::~C_Offset(void)
{
    Reset();
}


void CNtSite_Base::C_Utr::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CNtSite_Base::C_Utr::ResetSelection(void)
{
    m_choice = e_not_set;
}

void CNtSite_Base::C_Utr::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    default:
        break;
    }
    m_choice = index;
}

const char* const CNtSite_Base::C_Utr::sm_SelectionNames[] = {
    "not set",
    "five-prime",
    "three-prime"
};

NCBI_NS_STD::string CNtSite_Base::C_Utr::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CNtSite_Base::C_Utr::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CNtSite_Base::C_Utr)
{
    SET_INTERNAL_NAME("NtSite", "utr");
    SET_CHOICE_MODULE("NCBI-VariationIRep");
    ADD_NAMED_NULL_CHOICE_VARIANT("five-prime", null, ());
    ADD_NAMED_NULL_CHOICE_VARIANT("three-prime", null, ());
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CNtSite_Base::C_Utr::C_Utr(void)
    : m_choice(e_not_set)
{
}

// destructor
CNtSite_Base::C_Utr::~C_Utr(void)
{
    Reset();
}


void CNtSite_Base::ResetSeqid(void)
{
    m_Seqid.erase();
    m_set_State[0] &= ~0x3;
}

void CNtSite_Base::ResetBase(void)
{
    if ( !m_Base ) {
        m_Base.Reset(new TBase());
        return;
    }
    (*m_Base).Reset();
}

void CNtSite_Base::SetBase(CNtSite_Base::TBase& value)
{
    m_Base.Reset(&value);
}

void CNtSite_Base::ResetOffset(void)
{
    m_Offset.Reset();
}

void CNtSite_Base::SetOffset(CNtSite_Base::TOffset& value)
{
    m_Offset.Reset(&value);
}

CNtSite_Base::TOffset& CNtSite_Base::SetOffset(void)
{
    if ( !m_Offset )
        m_Offset.Reset(new C_Offset());
    return (*m_Offset);
}

void CNtSite_Base::ResetUtr(void)
{
    m_Utr.Reset();
}

void CNtSite_Base::SetUtr(CNtSite_Base::TUtr& value)
{
    m_Utr.Reset(&value);
}

CNtSite_Base::TUtr& CNtSite_Base::SetUtr(void)
{
    if ( !m_Utr )
        m_Utr.Reset(new C_Utr());
    return (*m_Utr);
}

void CNtSite_Base::Reset(void)
{
    ResetSeqid();
    ResetSeqtype();
    ResetBase();
    ResetOffset();
    ResetUtr();
    ResetStrand_minus();
    ResetFuzzy();
    ResetFuzzy_offset();
}

BEGIN_NAMED_BASE_CLASS_INFO("NtSite", CNtSite)
{
    SET_CLASS_MODULE("NCBI-VariationIRep");
    ADD_NAMED_STD_MEMBER("seqid", m_Seqid)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_ENUM_MEMBER("seqtype", m_Seqtype, EVariantSeqType)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("base", m_Base, C_Base);
    ADD_NAMED_REF_MEMBER("offset", m_Offset, C_Offset)->SetOptional();
    ADD_NAMED_REF_MEMBER("utr", m_Utr, C_Utr)->SetOptional();
    ADD_NAMED_STD_MEMBER("strand-minus", m_Strand_minus)->SetDefault(new TStrand_minus(false))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("fuzzy", m_Fuzzy)->SetDefault(new TFuzzy(false))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("fuzzy-offset", m_Fuzzy_offset)->SetDefault(new TFuzzy_offset(false))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CNtSite_Base::CNtSite_Base(void)
    : m_Seqtype((int)(0)), m_Strand_minus(false), m_Fuzzy(false), m_Fuzzy_offset(false)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetBase();
    }
}

// destructor
CNtSite_Base::~CNtSite_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
