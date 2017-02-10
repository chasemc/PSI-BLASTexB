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
 *   'entrezgene.asn'.
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
#include <objects/entrezgene/Maps.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CMaps_Base::C_Method::, EMethod_map_type, false)
{
    SET_ENUM_INTERNAL_NAME("Maps.method", "map-type");
    SET_ENUM_MODULE("NCBI-Entrezgene");
    ADD_ENUM_VALUE("cyto", eMethod_map_type_cyto);
    ADD_ENUM_VALUE("bp", eMethod_map_type_bp);
    ADD_ENUM_VALUE("cM", eMethod_map_type_cM);
    ADD_ENUM_VALUE("cR", eMethod_map_type_cR);
    ADD_ENUM_VALUE("min", eMethod_map_type_min);
}
END_ENUM_INFO

void CMaps_Base::C_Method::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CMaps_Base::C_Method::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Proxy:
        m_string.Destruct();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CMaps_Base::C_Method::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    case e_Map_type:
        m_Map_type = (EMethod_map_type)(0);
        break;
    case e_Proxy:
        m_string.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CMaps_Base::C_Method::sm_SelectionNames[] = {
    "not set",
    "proxy",
    "map-type"
};

NCBI_NS_STD::string CMaps_Base::C_Method::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CMaps_Base::C_Method::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CMaps_Base::C_Method::SetProxy(const CMaps_Base::C_Method::TProxy& value)
{
    Select(e_Proxy, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CMaps_Base::C_Method)
{
    SET_INTERNAL_NAME("Maps", "method");
    SET_CHOICE_MODULE("NCBI-Entrezgene");
    ADD_NAMED_BUF_CHOICE_VARIANT("proxy", m_string, STD, (string));
    ADD_NAMED_ENUM_CHOICE_VARIANT("map-type", m_Map_type, EMethod_map_type);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CMaps_Base::C_Method::C_Method(void)
    : m_choice(e_not_set)
{
}

// destructor
CMaps_Base::C_Method::~C_Method(void)
{
    Reset();
}


void CMaps_Base::ResetDisplay_str(void)
{
    m_Display_str.erase();
    m_set_State[0] &= ~0x3;
}

void CMaps_Base::ResetMethod(void)
{
    if ( !m_Method ) {
        m_Method.Reset(new TMethod());
        return;
    }
    (*m_Method).Reset();
}

void CMaps_Base::SetMethod(CMaps_Base::TMethod& value)
{
    m_Method.Reset(&value);
}

void CMaps_Base::Reset(void)
{
    ResetDisplay_str();
    ResetMethod();
}

BEGIN_NAMED_BASE_CLASS_INFO("Maps", CMaps)
{
    SET_CLASS_MODULE("NCBI-Entrezgene");
    ADD_NAMED_STD_MEMBER("display-str", m_Display_str)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("method", m_Method, C_Method);
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CMaps_Base::CMaps_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetMethod();
    }
}

// destructor
CMaps_Base::~CMaps_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
