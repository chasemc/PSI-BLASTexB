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
 *   'cn3d.asn'.
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
#include <objects/cn3d/Cn3d_style_table_item.hpp>
#include <objects/cn3d/Cn3d_style_settings.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CCn3d_style_table_item_Base::ResetStyle(void)
{
    if ( !m_Style ) {
        m_Style.Reset(new TStyle());
        return;
    }
    (*m_Style).Reset();
}

void CCn3d_style_table_item_Base::SetStyle(CCn3d_style_table_item_Base::TStyle& value)
{
    m_Style.Reset(&value);
}

void CCn3d_style_table_item_Base::Reset(void)
{
    ResetId();
    ResetStyle();
}

BEGIN_NAMED_BASE_CLASS_INFO("Cn3d-style-table-item", CCn3d_style_table_item)
{
    SET_CLASS_MODULE("NCBI-Cn3d");
    ADD_NAMED_MEMBER("id", m_Id, CLASS, (CCn3d_style_table_id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("style", m_Style, CCn3d_style_settings);
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CCn3d_style_table_item_Base::CCn3d_style_table_item_Base(void)
    : m_Id(CCn3d_style_table_id(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetStyle();
    }
}

// destructor
CCn3d_style_table_item_Base::~CCn3d_style_table_item_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

