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
#include <objects/seqfeat/TaxElement.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CTaxElement_Base::, EFixed_level, true)
{
    SET_ENUM_INTERNAL_NAME("TaxElement", "fixed-level");
    SET_ENUM_MODULE("NCBI-Organism");
    ADD_ENUM_VALUE("other", eFixed_level_other);
    ADD_ENUM_VALUE("family", eFixed_level_family);
    ADD_ENUM_VALUE("order", eFixed_level_order);
    ADD_ENUM_VALUE("class", eFixed_level_class);
}
END_ENUM_INFO

void CTaxElement_Base::ResetLevel(void)
{
    m_Level.erase();
    m_set_State[0] &= ~0xc;
}

void CTaxElement_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0x30;
}

void CTaxElement_Base::Reset(void)
{
    ResetFixed_level();
    ResetLevel();
    ResetName();
}

BEGIN_NAMED_BASE_CLASS_INFO("TaxElement", CTaxElement)
{
    SET_CLASS_MODULE("NCBI-Organism");
    ADD_NAMED_ENUM_MEMBER("fixed-level", m_Fixed_level, EFixed_level)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("level", m_Level)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CTaxElement_Base::CTaxElement_Base(void)
    : m_Fixed_level((EFixed_level)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CTaxElement_Base::~CTaxElement_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

