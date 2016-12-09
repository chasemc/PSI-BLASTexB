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
#include <objects/trackmgr/TMgr_TrackAttrValueReply.hpp>
#include <objects/trackmgr/TMgr_AttrReply.hpp>
#include <objects/trackmgr/TMgr_AttrValueReply.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_TrackAttrValueReply_Base::ResetTrack_type_list(void)
{
    m_Track_type_list.clear();
    m_set_State[0] &= ~0x3;
}

void CTMgr_TrackAttrValueReply_Base::ResetAttr_list(void)
{
    m_Attr_list.Reset();
}

void CTMgr_TrackAttrValueReply_Base::SetAttr_list(CTMgr_TrackAttrValueReply_Base::TAttr_list& value)
{
    m_Attr_list.Reset(&value);
}

CTMgr_TrackAttrValueReply_Base::TAttr_list& CTMgr_TrackAttrValueReply_Base::SetAttr_list(void)
{
    if ( !m_Attr_list )
        m_Attr_list.Reset(new ncbi::objects::CTMgr_AttrReply());
    return (*m_Attr_list);
}

void CTMgr_TrackAttrValueReply_Base::ResetValue_list(void)
{
    m_Value_list.clear();
    m_set_State[0] &= ~0x30;
}

void CTMgr_TrackAttrValueReply_Base::Reset(void)
{
    ResetTrack_type_list();
    ResetAttr_list();
    ResetValue_list();
}

BEGIN_NAMED_BASE_CLASS_INFO("TMgr-TrackAttrValueReply", CTMgr_TrackAttrValueReply)
{
    SET_CLASS_MODULE("NCBI-TrackManager");
    ADD_NAMED_MEMBER("track-type-list", m_Track_type_list, STL_list_set, (STD, (string)))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("attr-list", m_Attr_list, CTMgr_AttrReply)->SetOptional();
    ADD_NAMED_MEMBER("value-list", m_Value_list, STL_list_set, (STL_CRef, (CLASS, (CTMgr_AttrValueReply))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CTMgr_TrackAttrValueReply_Base::CTMgr_TrackAttrValueReply_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CTMgr_TrackAttrValueReply_Base::~CTMgr_TrackAttrValueReply_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

