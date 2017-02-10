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
 *   'pcassay.asn'.
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
#include <objects/pcassay/PC_AssaySubmit.hpp>
#include <objects/pcassay/PC_AssayDescription.hpp>
#include <objects/pcassay/PC_AssayResults.hpp>
#include <objects/pcsubstance/PC_ID.hpp>
#include <objects/pcsubstance/PC_Source.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CPC_AssaySubmit_Base::C_Assay::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CPC_AssaySubmit_Base::C_Assay::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Aid_source:
    case e_Descr:
    case e_Aidver:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CPC_AssaySubmit_Base::C_Assay::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Aid:
        m_Aid = 0;
        break;
    case e_Aid_source:
        (m_object = new(pool) ncbi::objects::CPC_Source())->AddReference();
        break;
    case e_Descr:
        (m_object = new(pool) ncbi::objects::CPC_AssayDescription())->AddReference();
        break;
    case e_Aidver:
        (m_object = new(pool) ncbi::objects::CPC_ID())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CPC_AssaySubmit_Base::C_Assay::sm_SelectionNames[] = {
    "not set",
    "aid",
    "aid-source",
    "descr",
    "aidver"
};

NCBI_NS_STD::string CPC_AssaySubmit_Base::C_Assay::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CPC_AssaySubmit_Base::C_Assay::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CPC_AssaySubmit_Base::C_Assay::TAid_source& CPC_AssaySubmit_Base::C_Assay::GetAid_source(void) const
{
    CheckSelected(e_Aid_source);
    return *static_cast<const TAid_source*>(m_object);
}

CPC_AssaySubmit_Base::C_Assay::TAid_source& CPC_AssaySubmit_Base::C_Assay::SetAid_source(void)
{
    Select(e_Aid_source, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAid_source*>(m_object);
}

void CPC_AssaySubmit_Base::C_Assay::SetAid_source(CPC_AssaySubmit_Base::C_Assay::TAid_source& value)
{
    TAid_source* ptr = &value;
    if ( m_choice != e_Aid_source || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Aid_source;
    }
}

const CPC_AssaySubmit_Base::C_Assay::TDescr& CPC_AssaySubmit_Base::C_Assay::GetDescr(void) const
{
    CheckSelected(e_Descr);
    return *static_cast<const TDescr*>(m_object);
}

CPC_AssaySubmit_Base::C_Assay::TDescr& CPC_AssaySubmit_Base::C_Assay::SetDescr(void)
{
    Select(e_Descr, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TDescr*>(m_object);
}

void CPC_AssaySubmit_Base::C_Assay::SetDescr(CPC_AssaySubmit_Base::C_Assay::TDescr& value)
{
    TDescr* ptr = &value;
    if ( m_choice != e_Descr || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Descr;
    }
}

const CPC_AssaySubmit_Base::C_Assay::TAidver& CPC_AssaySubmit_Base::C_Assay::GetAidver(void) const
{
    CheckSelected(e_Aidver);
    return *static_cast<const TAidver*>(m_object);
}

CPC_AssaySubmit_Base::C_Assay::TAidver& CPC_AssaySubmit_Base::C_Assay::SetAidver(void)
{
    Select(e_Aidver, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAidver*>(m_object);
}

void CPC_AssaySubmit_Base::C_Assay::SetAidver(CPC_AssaySubmit_Base::C_Assay::TAidver& value)
{
    TAidver* ptr = &value;
    if ( m_choice != e_Aidver || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Aidver;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CPC_AssaySubmit_Base::C_Assay)
{
    SET_INTERNAL_NAME("PC-AssaySubmit", "assay");
    SET_CHOICE_MODULE("NCBI-PCAssay");
    ADD_NAMED_STD_CHOICE_VARIANT("aid", m_Aid);
    ADD_NAMED_REF_CHOICE_VARIANT("aid-source", m_object, CPC_Source);
    ADD_NAMED_REF_CHOICE_VARIANT("descr", m_object, CPC_AssayDescription);
    ADD_NAMED_REF_CHOICE_VARIANT("aidver", m_object, CPC_ID);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CPC_AssaySubmit_Base::C_Assay::C_Assay(void)
    : m_choice(e_not_set)
{
}

// destructor
CPC_AssaySubmit_Base::C_Assay::~C_Assay(void)
{
    Reset();
}


void CPC_AssaySubmit_Base::ResetAssay(void)
{
    if ( !m_Assay ) {
        m_Assay.Reset(new TAssay());
        return;
    }
    (*m_Assay).Reset();
}

void CPC_AssaySubmit_Base::SetAssay(CPC_AssaySubmit_Base::TAssay& value)
{
    m_Assay.Reset(&value);
}

void CPC_AssaySubmit_Base::ResetData(void)
{
    m_Data.clear();
    m_set_State[0] &= ~0xc;
}

void CPC_AssaySubmit_Base::ResetRevoke(void)
{
    m_Revoke.clear();
    m_set_State[0] &= ~0x30;
}

void CPC_AssaySubmit_Base::Reset(void)
{
    ResetAssay();
    ResetData();
    ResetRevoke();
}

BEGIN_NAMED_BASE_CLASS_INFO("PC-AssaySubmit", CPC_AssaySubmit)
{
    SET_CLASS_MODULE("NCBI-PCAssay");
    ADD_NAMED_REF_MEMBER("assay", m_Assay, C_Assay);
    ADD_NAMED_MEMBER("data", m_Data, STL_vector, (STL_CRef, (CLASS, (CPC_AssayResults))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("revoke", m_Revoke, STL_vector, (STD, (int)))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CPC_AssaySubmit_Base::CPC_AssaySubmit_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAssay();
    }
}

// destructor
CPC_AssaySubmit_Base::~CPC_AssaySubmit_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
