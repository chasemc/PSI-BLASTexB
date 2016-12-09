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
 *   'gbproj.asn'.
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
#include <objects/gbproj/ViewDescriptor.hpp>
#include <objects/gbproj/ProjectItem.hpp>
#include <objects/gbproj/ViewDataLink.hpp>
#include <objects/gbproj/ViewMemento.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CViewDescriptor_Base::C_Data::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CViewDescriptor_Base::C_Data::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Link:
    case e_Item:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CViewDescriptor_Base::C_Data::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Link:
        (m_object = new(pool) ncbi::objects::CViewDataLink())->AddReference();
        break;
    case e_Item:
        (m_object = new(pool) ncbi::objects::CProjectItem())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CViewDescriptor_Base::C_Data::sm_SelectionNames[] = {
    "not set",
    "link",
    "item"
};

NCBI_NS_STD::string CViewDescriptor_Base::C_Data::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CViewDescriptor_Base::C_Data::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CViewDescriptor_Base::C_Data::TLink& CViewDescriptor_Base::C_Data::GetLink(void) const
{
    CheckSelected(e_Link);
    return *static_cast<const TLink*>(m_object);
}

CViewDescriptor_Base::C_Data::TLink& CViewDescriptor_Base::C_Data::SetLink(void)
{
    Select(e_Link, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TLink*>(m_object);
}

void CViewDescriptor_Base::C_Data::SetLink(CViewDescriptor_Base::C_Data::TLink& value)
{
    TLink* ptr = &value;
    if ( m_choice != e_Link || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Link;
    }
}

const CViewDescriptor_Base::C_Data::TItem& CViewDescriptor_Base::C_Data::GetItem(void) const
{
    CheckSelected(e_Item);
    return *static_cast<const TItem*>(m_object);
}

CViewDescriptor_Base::C_Data::TItem& CViewDescriptor_Base::C_Data::SetItem(void)
{
    Select(e_Item, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TItem*>(m_object);
}

void CViewDescriptor_Base::C_Data::SetItem(CViewDescriptor_Base::C_Data::TItem& value)
{
    TItem* ptr = &value;
    if ( m_choice != e_Item || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Item;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CViewDescriptor_Base::C_Data)
{
    SET_INTERNAL_NAME("ViewDescriptor", "data");
    SET_CHOICE_MODULE("NCBI-GBProject");
    ADD_NAMED_REF_CHOICE_VARIANT("link", m_object, CViewDataLink);
    ADD_NAMED_REF_CHOICE_VARIANT("item", m_object, CProjectItem);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CViewDescriptor_Base::C_Data::C_Data(void)
    : m_choice(e_not_set)
{
}

// destructor
CViewDescriptor_Base::C_Data::~C_Data(void)
{
    Reset();
}


void CViewDescriptor_Base::ResetData(void)
{
    if ( !m_Data ) {
        m_Data.Reset(new TData());
        return;
    }
    (*m_Data).Reset();
}

void CViewDescriptor_Base::SetData(CViewDescriptor_Base::TData& value)
{
    m_Data.Reset(&value);
}

void CViewDescriptor_Base::ResetView_plugin(void)
{
    m_View_plugin.erase();
    m_set_State[0] &= ~0xc;
}

void CViewDescriptor_Base::ResetView_memento(void)
{
    m_View_memento.Reset();
}

void CViewDescriptor_Base::SetView_memento(CViewDescriptor_Base::TView_memento& value)
{
    m_View_memento.Reset(&value);
}

CViewDescriptor_Base::TView_memento& CViewDescriptor_Base::SetView_memento(void)
{
    if ( !m_View_memento )
        m_View_memento.Reset(new ncbi::objects::CViewMemento());
    return (*m_View_memento);
}

void CViewDescriptor_Base::Reset(void)
{
    ResetData();
    ResetView_plugin();
    ResetView_id();
    ResetView_memento();
}

BEGIN_NAMED_BASE_CLASS_INFO("ViewDescriptor", CViewDescriptor)
{
    SET_CLASS_MODULE("NCBI-GBProject");
    ADD_NAMED_REF_MEMBER("data", m_Data, C_Data);
    ADD_NAMED_STD_MEMBER("view-plugin", m_View_plugin)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("view-id", m_View_id)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("view-memento", m_View_memento, CViewMemento)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CViewDescriptor_Base::CViewDescriptor_Base(void)
    : m_View_id(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetData();
    }
}

// destructor
CViewDescriptor_Base::~CViewDescriptor_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
