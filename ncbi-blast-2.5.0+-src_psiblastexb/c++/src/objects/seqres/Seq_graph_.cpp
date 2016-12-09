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
 *   'seqres.asn'.
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
#include <objects/seqres/Seq_graph.hpp>
#include <objects/seqloc/Seq_loc.hpp>
#include <objects/seqres/Byte_graph.hpp>
#include <objects/seqres/Int_graph.hpp>
#include <objects/seqres/Real_graph.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CSeq_graph_Base::C_Graph::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CSeq_graph_Base::C_Graph::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Real:
    case e_Int:
    case e_Byte:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CSeq_graph_Base::C_Graph::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Real:
        (m_object = new(pool) ncbi::objects::CReal_graph())->AddReference();
        break;
    case e_Int:
        (m_object = new(pool) ncbi::objects::CInt_graph())->AddReference();
        break;
    case e_Byte:
        (m_object = new(pool) ncbi::objects::CByte_graph())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CSeq_graph_Base::C_Graph::sm_SelectionNames[] = {
    "not set",
    "real",
    "int",
    "byte"
};

NCBI_NS_STD::string CSeq_graph_Base::C_Graph::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CSeq_graph_Base::C_Graph::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CSeq_graph_Base::C_Graph::TReal& CSeq_graph_Base::C_Graph::GetReal(void) const
{
    CheckSelected(e_Real);
    return *static_cast<const TReal*>(m_object);
}

CSeq_graph_Base::C_Graph::TReal& CSeq_graph_Base::C_Graph::SetReal(void)
{
    Select(e_Real, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TReal*>(m_object);
}

void CSeq_graph_Base::C_Graph::SetReal(CSeq_graph_Base::C_Graph::TReal& value)
{
    TReal* ptr = &value;
    if ( m_choice != e_Real || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Real;
    }
}

const CSeq_graph_Base::C_Graph::TInt& CSeq_graph_Base::C_Graph::GetInt(void) const
{
    CheckSelected(e_Int);
    return *static_cast<const TInt*>(m_object);
}

CSeq_graph_Base::C_Graph::TInt& CSeq_graph_Base::C_Graph::SetInt(void)
{
    Select(e_Int, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TInt*>(m_object);
}

void CSeq_graph_Base::C_Graph::SetInt(CSeq_graph_Base::C_Graph::TInt& value)
{
    TInt* ptr = &value;
    if ( m_choice != e_Int || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Int;
    }
}

const CSeq_graph_Base::C_Graph::TByte& CSeq_graph_Base::C_Graph::GetByte(void) const
{
    CheckSelected(e_Byte);
    return *static_cast<const TByte*>(m_object);
}

CSeq_graph_Base::C_Graph::TByte& CSeq_graph_Base::C_Graph::SetByte(void)
{
    Select(e_Byte, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TByte*>(m_object);
}

void CSeq_graph_Base::C_Graph::SetByte(CSeq_graph_Base::C_Graph::TByte& value)
{
    TByte* ptr = &value;
    if ( m_choice != e_Byte || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Byte;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CSeq_graph_Base::C_Graph)
{
    SET_INTERNAL_NAME("Seq-graph", "graph");
    SET_CHOICE_MODULE("NCBI-Seqres");
    ADD_NAMED_REF_CHOICE_VARIANT("real", m_object, CReal_graph);
    ADD_NAMED_REF_CHOICE_VARIANT("int", m_object, CInt_graph);
    ADD_NAMED_REF_CHOICE_VARIANT("byte", m_object, CByte_graph);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CSeq_graph_Base::C_Graph::C_Graph(void)
    : m_choice(e_not_set)
{
}

// destructor
CSeq_graph_Base::C_Graph::~C_Graph(void)
{
    Reset();
}


void CSeq_graph_Base::ResetTitle(void)
{
    m_Title.erase();
    m_set_State[0] &= ~0x3;
}

void CSeq_graph_Base::ResetComment(void)
{
    m_Comment.erase();
    m_set_State[0] &= ~0xc;
}

void CSeq_graph_Base::ResetLoc(void)
{
    if ( !m_Loc ) {
        m_Loc.Reset(new TLoc());
        return;
    }
    (*m_Loc).Reset();
}

void CSeq_graph_Base::SetLoc(CSeq_graph_Base::TLoc& value)
{
    m_Loc.Reset(&value);
}

void CSeq_graph_Base::ResetTitle_x(void)
{
    m_Title_x.erase();
    m_set_State[0] &= ~0xc0;
}

void CSeq_graph_Base::ResetTitle_y(void)
{
    m_Title_y.erase();
    m_set_State[0] &= ~0x300;
}

void CSeq_graph_Base::ResetGraph(void)
{
    if ( !m_Graph ) {
        m_Graph.Reset(new TGraph());
        return;
    }
    (*m_Graph).Reset();
}

void CSeq_graph_Base::SetGraph(CSeq_graph_Base::TGraph& value)
{
    m_Graph.Reset(&value);
}

void CSeq_graph_Base::Reset(void)
{
    ResetTitle();
    ResetComment();
    ResetLoc();
    ResetTitle_x();
    ResetTitle_y();
    ResetComp();
    ResetA();
    ResetB();
    ResetNumval();
    ResetGraph();
}

BEGIN_NAMED_BASE_CLASS_INFO("Seq-graph", CSeq_graph)
{
    SET_CLASS_MODULE("NCBI-Seqres");
    ADD_NAMED_STD_MEMBER("title", m_Title)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("comment", m_Comment)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("loc", m_Loc, CSeq_loc);
    ADD_NAMED_STD_MEMBER("title-x", m_Title_x)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("title-y", m_Title_y)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("comp", m_Comp)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("a", m_A)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("b", m_B)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("numval", m_Numval)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("graph", m_Graph, C_Graph);
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CSeq_graph_Base::CSeq_graph_Base(void)
    : m_Comp(0), m_A(0), m_B(0), m_Numval(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetLoc();
        ResetGraph();
    }
}

// destructor
CSeq_graph_Base::~CSeq_graph_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

