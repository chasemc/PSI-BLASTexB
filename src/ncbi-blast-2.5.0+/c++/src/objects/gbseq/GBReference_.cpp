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
 *   'gbseq.asn'.
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
#include <objects/gbseq/GBReference.hpp>
#include <objects/gbseq/GBXref.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CGBReference_Base::ResetReference(void)
{
    m_Reference.erase();
    m_set_State[0] &= ~0x3;
}

void CGBReference_Base::ResetPosition(void)
{
    m_Position.erase();
    m_set_State[0] &= ~0xc;
}

void CGBReference_Base::ResetAuthors(void)
{
    m_Authors.clear();
    m_set_State[0] &= ~0x30;
}

void CGBReference_Base::ResetConsortium(void)
{
    m_Consortium.erase();
    m_set_State[0] &= ~0xc0;
}

void CGBReference_Base::ResetTitle(void)
{
    m_Title.erase();
    m_set_State[0] &= ~0x300;
}

void CGBReference_Base::ResetJournal(void)
{
    m_Journal.erase();
    m_set_State[0] &= ~0xc00;
}

void CGBReference_Base::ResetXref(void)
{
    m_Xref.clear();
    m_set_State[0] &= ~0x3000;
}

void CGBReference_Base::ResetRemark(void)
{
    m_Remark.erase();
    m_set_State[0] &= ~0x30000;
}

void CGBReference_Base::Reset(void)
{
    ResetReference();
    ResetPosition();
    ResetAuthors();
    ResetConsortium();
    ResetTitle();
    ResetJournal();
    ResetXref();
    ResetPubmed();
    ResetRemark();
}

BEGIN_NAMED_BASE_CLASS_INFO("GBReference", CGBReference)
{
    SET_CLASS_MODULE("NCBI-GBSeq");
    ADD_NAMED_STD_MEMBER("reference", m_Reference)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("position", m_Position)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("authors", m_Authors, STL_list, (CLASS, (CGBAuthor)))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("consortium", m_Consortium)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("title", m_Title)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("journal", m_Journal)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("xref", m_Xref, STL_list, (STL_CRef, (CLASS, (CGBXref))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("pubmed", m_Pubmed)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("remark", m_Remark)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CGBReference_Base::CGBReference_Base(void)
    : m_Pubmed(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CGBReference_Base::~CGBReference_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
