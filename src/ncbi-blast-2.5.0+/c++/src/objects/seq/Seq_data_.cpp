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
 *   'seq.asn'.
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
#include <objects/seq/Seq_data.hpp>
#include <objects/seq/Seq_gap.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CSeq_data_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CSeq_data_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Iupacna:
        m_Iupacna.Destruct();
        break;
    case e_Iupacaa:
        m_Iupacaa.Destruct();
        break;
    case e_Ncbi2na:
        m_Ncbi2na.Destruct();
        break;
    case e_Ncbi4na:
        m_Ncbi4na.Destruct();
        break;
    case e_Ncbi8na:
        m_Ncbi8na.Destruct();
        break;
    case e_Ncbipna:
        m_Ncbipna.Destruct();
        break;
    case e_Ncbi8aa:
        m_Ncbi8aa.Destruct();
        break;
    case e_Ncbieaa:
        m_Ncbieaa.Destruct();
        break;
    case e_Ncbipaa:
        m_Ncbipaa.Destruct();
        break;
    case e_Ncbistdaa:
        m_Ncbistdaa.Destruct();
        break;
    case e_Gap:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CSeq_data_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Iupacna:
        m_Iupacna.Construct();
        break;
    case e_Iupacaa:
        m_Iupacaa.Construct();
        break;
    case e_Ncbi2na:
        m_Ncbi2na.Construct();
        break;
    case e_Ncbi4na:
        m_Ncbi4na.Construct();
        break;
    case e_Ncbi8na:
        m_Ncbi8na.Construct();
        break;
    case e_Ncbipna:
        m_Ncbipna.Construct();
        break;
    case e_Ncbi8aa:
        m_Ncbi8aa.Construct();
        break;
    case e_Ncbieaa:
        m_Ncbieaa.Construct();
        break;
    case e_Ncbipaa:
        m_Ncbipaa.Construct();
        break;
    case e_Ncbistdaa:
        m_Ncbistdaa.Construct();
        break;
    case e_Gap:
        (m_object = new(pool) ncbi::objects::CSeq_gap())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CSeq_data_Base::sm_SelectionNames[] = {
    "not set",
    "iupacna",
    "iupacaa",
    "ncbi2na",
    "ncbi4na",
    "ncbi8na",
    "ncbipna",
    "ncbi8aa",
    "ncbieaa",
    "ncbipaa",
    "ncbistdaa",
    "gap"
};

NCBI_NS_STD::string CSeq_data_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CSeq_data_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CSeq_data_Base::SetIupacna(const CSeq_data_Base::TIupacna& value)
{
    Select(e_Iupacna, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_Iupacna = value;
}

void CSeq_data_Base::SetIupacaa(const CSeq_data_Base::TIupacaa& value)
{
    Select(e_Iupacaa, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_Iupacaa = value;
}

void CSeq_data_Base::SetNcbieaa(const CSeq_data_Base::TNcbieaa& value)
{
    Select(e_Ncbieaa, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_Ncbieaa = value;
}

const CSeq_data_Base::TGap& CSeq_data_Base::GetGap(void) const
{
    CheckSelected(e_Gap);
    return *static_cast<const TGap*>(m_object);
}

CSeq_data_Base::TGap& CSeq_data_Base::SetGap(void)
{
    Select(e_Gap, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TGap*>(m_object);
}

void CSeq_data_Base::SetGap(CSeq_data_Base::TGap& value)
{
    TGap* ptr = &value;
    if ( m_choice != e_Gap || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Gap;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Seq-data", CSeq_data)
{
    SET_CHOICE_MODULE("NCBI-Sequence");
    ADD_NAMED_BUF_CHOICE_VARIANT("iupacna", m_Iupacna, CLASS, (CIUPACna));
    ADD_NAMED_BUF_CHOICE_VARIANT("iupacaa", m_Iupacaa, CLASS, (CIUPACaa));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbi2na", m_Ncbi2na, CLASS, (CNCBI2na));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbi4na", m_Ncbi4na, CLASS, (CNCBI4na));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbi8na", m_Ncbi8na, CLASS, (CNCBI8na));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbipna", m_Ncbipna, CLASS, (CNCBIpna));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbi8aa", m_Ncbi8aa, CLASS, (CNCBI8aa));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbieaa", m_Ncbieaa, CLASS, (CNCBIeaa));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbipaa", m_Ncbipaa, CLASS, (CNCBIpaa));
    ADD_NAMED_BUF_CHOICE_VARIANT("ncbistdaa", m_Ncbistdaa, CLASS, (CNCBIstdaa));
    ADD_NAMED_REF_CHOICE_VARIANT("gap", m_object, CSeq_gap);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CSeq_data_Base::CSeq_data_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CSeq_data_Base::~CSeq_data_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
