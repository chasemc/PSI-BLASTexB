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
 *   'seqedit.asn'.
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
#include <objects/seqedit/SeqEdit_Cmd_AddAnnot.hpp>
#include <objects/seq/Annot_descr.hpp>
#include <objects/seqalign/Seq_align.hpp>
#include <objects/seqedit/SeqEdit_Id.hpp>
#include <objects/seqfeat/Seq_feat.hpp>
#include <objects/seqres/Seq_graph.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Feat:
    case e_Align:
    case e_Graph:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Feat:
        (m_object = new(pool) ncbi::objects::CSeq_feat())->AddReference();
        break;
    case e_Align:
        (m_object = new(pool) ncbi::objects::CSeq_align())->AddReference();
        break;
    case e_Graph:
        (m_object = new(pool) ncbi::objects::CSeq_graph())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::sm_SelectionNames[] = {
    "not set",
    "feat",
    "align",
    "graph"
};

NCBI_NS_STD::string CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TFeat& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::GetFeat(void) const
{
    CheckSelected(e_Feat);
    return *static_cast<const TFeat*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TFeat& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::SetFeat(void)
{
    Select(e_Feat, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TFeat*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::SetFeat(CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TFeat& value)
{
    TFeat* ptr = &value;
    if ( m_choice != e_Feat || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Feat;
    }
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TAlign& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::GetAlign(void) const
{
    CheckSelected(e_Align);
    return *static_cast<const TAlign*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TAlign& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::SetAlign(void)
{
    Select(e_Align, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAlign*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::SetAlign(CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TAlign& value)
{
    TAlign* ptr = &value;
    if ( m_choice != e_Align || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Align;
    }
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TGraph& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::GetGraph(void) const
{
    CheckSelected(e_Graph);
    return *static_cast<const TGraph*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TGraph& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::SetGraph(void)
{
    Select(e_Graph, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TGraph*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::SetGraph(CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::TGraph& value)
{
    TGraph* ptr = &value;
    if ( m_choice != e_Graph || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Graph;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj)
{
    SET_INTERNAL_NAME("SeqEdit-Cmd-AddAnnot.search-param", "obj");
    SET_CHOICE_MODULE("NCBI-SeqEdit");
    ADD_NAMED_REF_CHOICE_VARIANT("feat", m_object, CSeq_feat);
    ADD_NAMED_REF_CHOICE_VARIANT("align", m_object, CSeq_align);
    ADD_NAMED_REF_CHOICE_VARIANT("graph", m_object, CSeq_graph);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::C_Obj(void)
    : m_choice(e_not_set)
{
}

// destructor
CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Obj::~C_Obj(void)
{
    Reset();
}


void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Descr:
    case e_Obj:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Descr:
        (m_object = new(pool) ncbi::objects::CAnnot_descr())->AddReference();
        break;
    case e_Obj:
        (m_object = new(pool) C_Obj())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::sm_SelectionNames[] = {
    "not set",
    "descr",
    "obj"
};

NCBI_NS_STD::string CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::TDescr& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::GetDescr(void) const
{
    CheckSelected(e_Descr);
    return *static_cast<const TDescr*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::TDescr& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::SetDescr(void)
{
    Select(e_Descr, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TDescr*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::SetDescr(CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::TDescr& value)
{
    TDescr* ptr = &value;
    if ( m_choice != e_Descr || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Descr;
    }
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::TObj& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::GetObj(void) const
{
    CheckSelected(e_Obj);
    return *static_cast<const TObj*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::TObj& CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::SetObj(void)
{
    Select(e_Obj, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TObj*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::SetObj(CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::TObj& value)
{
    TObj* ptr = &value;
    if ( m_choice != e_Obj || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Obj;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CSeqEdit_Cmd_AddAnnot_Base::C_Search_param)
{
    SET_INTERNAL_NAME("SeqEdit-Cmd-AddAnnot", "search-param");
    SET_CHOICE_MODULE("NCBI-SeqEdit");
    ADD_NAMED_REF_CHOICE_VARIANT("descr", m_object, CAnnot_descr);
    ADD_NAMED_REF_CHOICE_VARIANT("obj", m_object, C_Obj);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::C_Search_param(void)
    : m_choice(e_not_set)
{
}

// destructor
CSeqEdit_Cmd_AddAnnot_Base::C_Search_param::~C_Search_param(void)
{
    Reset();
}


void CSeqEdit_Cmd_AddAnnot_Base::C_Data::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Data::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Feat:
    case e_Align:
    case e_Graph:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Data::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Feat:
        (m_object = new(pool) ncbi::objects::CSeq_feat())->AddReference();
        break;
    case e_Align:
        (m_object = new(pool) ncbi::objects::CSeq_align())->AddReference();
        break;
    case e_Graph:
        (m_object = new(pool) ncbi::objects::CSeq_graph())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CSeqEdit_Cmd_AddAnnot_Base::C_Data::sm_SelectionNames[] = {
    "not set",
    "feat",
    "align",
    "graph"
};

NCBI_NS_STD::string CSeqEdit_Cmd_AddAnnot_Base::C_Data::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Data::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Data::TFeat& CSeqEdit_Cmd_AddAnnot_Base::C_Data::GetFeat(void) const
{
    CheckSelected(e_Feat);
    return *static_cast<const TFeat*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Data::TFeat& CSeqEdit_Cmd_AddAnnot_Base::C_Data::SetFeat(void)
{
    Select(e_Feat, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TFeat*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Data::SetFeat(CSeqEdit_Cmd_AddAnnot_Base::C_Data::TFeat& value)
{
    TFeat* ptr = &value;
    if ( m_choice != e_Feat || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Feat;
    }
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Data::TAlign& CSeqEdit_Cmd_AddAnnot_Base::C_Data::GetAlign(void) const
{
    CheckSelected(e_Align);
    return *static_cast<const TAlign*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Data::TAlign& CSeqEdit_Cmd_AddAnnot_Base::C_Data::SetAlign(void)
{
    Select(e_Align, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAlign*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Data::SetAlign(CSeqEdit_Cmd_AddAnnot_Base::C_Data::TAlign& value)
{
    TAlign* ptr = &value;
    if ( m_choice != e_Align || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Align;
    }
}

const CSeqEdit_Cmd_AddAnnot_Base::C_Data::TGraph& CSeqEdit_Cmd_AddAnnot_Base::C_Data::GetGraph(void) const
{
    CheckSelected(e_Graph);
    return *static_cast<const TGraph*>(m_object);
}

CSeqEdit_Cmd_AddAnnot_Base::C_Data::TGraph& CSeqEdit_Cmd_AddAnnot_Base::C_Data::SetGraph(void)
{
    Select(e_Graph, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TGraph*>(m_object);
}

void CSeqEdit_Cmd_AddAnnot_Base::C_Data::SetGraph(CSeqEdit_Cmd_AddAnnot_Base::C_Data::TGraph& value)
{
    TGraph* ptr = &value;
    if ( m_choice != e_Graph || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Graph;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CSeqEdit_Cmd_AddAnnot_Base::C_Data)
{
    SET_INTERNAL_NAME("SeqEdit-Cmd-AddAnnot", "data");
    SET_CHOICE_MODULE("NCBI-SeqEdit");
    ADD_NAMED_REF_CHOICE_VARIANT("feat", m_object, CSeq_feat);
    ADD_NAMED_REF_CHOICE_VARIANT("align", m_object, CSeq_align);
    ADD_NAMED_REF_CHOICE_VARIANT("graph", m_object, CSeq_graph);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CSeqEdit_Cmd_AddAnnot_Base::C_Data::C_Data(void)
    : m_choice(e_not_set)
{
}

// destructor
CSeqEdit_Cmd_AddAnnot_Base::C_Data::~C_Data(void)
{
    Reset();
}


void CSeqEdit_Cmd_AddAnnot_Base::ResetId(void)
{
    if ( !m_Id ) {
        m_Id.Reset(new TId());
        return;
    }
    (*m_Id).Reset();
}

void CSeqEdit_Cmd_AddAnnot_Base::SetId(CSeqEdit_Cmd_AddAnnot_Base::TId& value)
{
    m_Id.Reset(&value);
}

void CSeqEdit_Cmd_AddAnnot_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0xc;
}

void CSeqEdit_Cmd_AddAnnot_Base::ResetSearch_param(void)
{
    m_Search_param.Reset();
}

void CSeqEdit_Cmd_AddAnnot_Base::SetSearch_param(CSeqEdit_Cmd_AddAnnot_Base::TSearch_param& value)
{
    m_Search_param.Reset(&value);
}

CSeqEdit_Cmd_AddAnnot_Base::TSearch_param& CSeqEdit_Cmd_AddAnnot_Base::SetSearch_param(void)
{
    if ( !m_Search_param )
        m_Search_param.Reset(new C_Search_param());
    return (*m_Search_param);
}

void CSeqEdit_Cmd_AddAnnot_Base::ResetData(void)
{
    if ( !m_Data ) {
        m_Data.Reset(new TData());
        return;
    }
    (*m_Data).Reset();
}

void CSeqEdit_Cmd_AddAnnot_Base::SetData(CSeqEdit_Cmd_AddAnnot_Base::TData& value)
{
    m_Data.Reset(&value);
}

void CSeqEdit_Cmd_AddAnnot_Base::Reset(void)
{
    ResetId();
    ResetName();
    ResetNamed();
    ResetSearch_param();
    ResetData();
}

BEGIN_NAMED_BASE_CLASS_INFO("SeqEdit-Cmd-AddAnnot", CSeqEdit_Cmd_AddAnnot)
{
    SET_CLASS_MODULE("NCBI-SeqEdit");
    ADD_NAMED_REF_MEMBER("id", m_Id, CSeqEdit_Id);
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("named", m_Named)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("search-param", m_Search_param, C_Search_param)->SetOptional();
    ADD_NAMED_REF_MEMBER("data", m_Data, C_Data);
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CSeqEdit_Cmd_AddAnnot_Base::CSeqEdit_Cmd_AddAnnot_Base(void)
    : m_Named(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetId();
        ResetData();
    }
}

// destructor
CSeqEdit_Cmd_AddAnnot_Base::~CSeqEdit_Cmd_AddAnnot_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

