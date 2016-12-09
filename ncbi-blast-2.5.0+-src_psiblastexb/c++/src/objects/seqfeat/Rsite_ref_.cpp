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
 *   'seqfeat.asn'.
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
#include <objects/seqfeat/Rsite_ref.hpp>
#include <objects/general/Dbtag.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CRsite_ref_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CRsite_ref_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Str:
        m_string.Destruct();
        break;
    case e_Db:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CRsite_ref_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Db:
        (m_object = new(pool) ncbi::objects::CDbtag())->AddReference();
        break;
    case e_Str:
        m_string.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CRsite_ref_Base::sm_SelectionNames[] = {
    "not set",
    "str",
    "db"
};

NCBI_NS_STD::string CRsite_ref_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CRsite_ref_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CRsite_ref_Base::SetStr(const CRsite_ref_Base::TStr& value)
{
    Select(e_Str, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

const CRsite_ref_Base::TDb& CRsite_ref_Base::GetDb(void) const
{
    CheckSelected(e_Db);
    return *static_cast<const TDb*>(m_object);
}

CRsite_ref_Base::TDb& CRsite_ref_Base::SetDb(void)
{
    Select(e_Db, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TDb*>(m_object);
}

void CRsite_ref_Base::SetDb(CRsite_ref_Base::TDb& value)
{
    TDb* ptr = &value;
    if ( m_choice != e_Db || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Db;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Rsite-ref", CRsite_ref)
{
    SET_CHOICE_MODULE("NCBI-Rsite");
    ADD_NAMED_BUF_CHOICE_VARIANT("str", m_string, STD, (string));
    ADD_NAMED_REF_CHOICE_VARIANT("db", m_object, CDbtag);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CRsite_ref_Base::CRsite_ref_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CRsite_ref_Base::~CRsite_ref_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

