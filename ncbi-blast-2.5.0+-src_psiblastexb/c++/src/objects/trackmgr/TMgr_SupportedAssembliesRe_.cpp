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
 *   'trackmgr.asn'.
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
#include <objects/trackmgr/TMgr_SupportedAssembliesRe.hpp>
#include <objects/trackmgr/TMgr_Message.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_SupportedAssembliesRequest_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CTMgr_SupportedAssembliesRequest_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Assembly_acc:
        m_string.Destruct();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CTMgr_SupportedAssembliesRequest_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    case e_Assembly_acc:
        m_string.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CTMgr_SupportedAssembliesRequest_Base::sm_SelectionNames[] = {
    "not set",
    "assembly-acc"
};

NCBI_NS_STD::string CTMgr_SupportedAssembliesRequest_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CTMgr_SupportedAssembliesRequest_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CTMgr_SupportedAssembliesRequest_Base::SetAssembly_acc(const CTMgr_SupportedAssembliesRequest_Base::TAssembly_acc& value)
{
    Select(e_Assembly_acc, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("TMgr-SupportedAssembliesRequest", CTMgr_SupportedAssembliesRequest)
{
    SET_CHOICE_MODULE("NCBI-TrackManager");
    ADD_NAMED_BUF_CHOICE_VARIANT("assembly-acc", m_string, STD, (string));
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CTMgr_SupportedAssembliesRequest_Base::CTMgr_SupportedAssembliesRequest_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CTMgr_SupportedAssembliesRequest_Base::~CTMgr_SupportedAssembliesRequest_Base(void)
{
    Reset();
}


void CTMgr_SupportedAssembliesReply_Base::C_Reply::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CTMgr_SupportedAssembliesReply_Base::C_Reply::ResetSelection(void)
{
    m_choice = e_not_set;
}

void CTMgr_SupportedAssembliesReply_Base::C_Reply::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    case e_Assembly_acc:
        m_Assembly_acc = 0;
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CTMgr_SupportedAssembliesReply_Base::C_Reply::sm_SelectionNames[] = {
    "not set",
    "assembly-acc"
};

NCBI_NS_STD::string CTMgr_SupportedAssembliesReply_Base::C_Reply::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CTMgr_SupportedAssembliesReply_Base::C_Reply::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CTMgr_SupportedAssembliesReply_Base::C_Reply)
{
    SET_INTERNAL_NAME("TMgr-SupportedAssembliesReply", "reply");
    SET_CHOICE_MODULE("NCBI-TrackManager");
    ADD_NAMED_STD_CHOICE_VARIANT("assembly-acc", m_Assembly_acc);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CTMgr_SupportedAssembliesReply_Base::C_Reply::C_Reply(void)
    : m_choice(e_not_set)
{
}

// destructor
CTMgr_SupportedAssembliesReply_Base::C_Reply::~C_Reply(void)
{
    Reset();
}


void CTMgr_SupportedAssembliesReply_Base::ResetMessages(void)
{
    m_Messages.clear();
    m_set_State[0] &= ~0x3;
}

void CTMgr_SupportedAssembliesReply_Base::ResetReply(void)
{
    m_Reply.Reset();
}

void CTMgr_SupportedAssembliesReply_Base::SetReply(CTMgr_SupportedAssembliesReply_Base::TReply& value)
{
    m_Reply.Reset(&value);
}

CTMgr_SupportedAssembliesReply_Base::TReply& CTMgr_SupportedAssembliesReply_Base::SetReply(void)
{
    if ( !m_Reply )
        m_Reply.Reset(new C_Reply());
    return (*m_Reply);
}

void CTMgr_SupportedAssembliesReply_Base::Reset(void)
{
    ResetMessages();
    ResetReply();
}

BEGIN_NAMED_BASE_CLASS_INFO("TMgr-SupportedAssembliesReply", CTMgr_SupportedAssembliesReply)
{
    SET_CLASS_MODULE("NCBI-TrackManager");
    ADD_NAMED_MEMBER("messages", m_Messages, STL_list, (STL_CRef, (CLASS, (CTMgr_Message))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("reply", m_Reply, C_Reply)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CTMgr_SupportedAssembliesReply_Base::CTMgr_SupportedAssembliesReply_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CTMgr_SupportedAssembliesReply_Base::~CTMgr_SupportedAssembliesReply_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

