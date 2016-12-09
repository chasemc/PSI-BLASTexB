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
 *   'docsum.asn'.
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
#include <objects/docsum/PrimarySequence.hpp>
#include <objects/docsum/MapLoc.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CPrimarySequence_Base::C_Attlist::, EAttlist_source, false)
{
    SET_ENUM_INTERNAL_NAME("PrimarySequence.attlist", "source");
    SET_ENUM_MODULE("Docsum-3-4");
    ADD_ENUM_VALUE("submitter", eAttlist_source_submitter);
    ADD_ENUM_VALUE("blastmb", eAttlist_source_blastmb);
    ADD_ENUM_VALUE("xm", eAttlist_source_xm);
    ADD_ENUM_VALUE("remap", eAttlist_source_remap);
    ADD_ENUM_VALUE("hgvs", eAttlist_source_hgvs);
}
END_ENUM_INFO

void CPrimarySequence_Base::C_Attlist::ResetAccession(void)
{
    m_Accession.erase();
    m_set_State[0] &= ~0xc0;
}

void CPrimarySequence_Base::C_Attlist::Reset(void)
{
    ResetDbSnpBuild();
    ResetGi();
    ResetSource();
    ResetAccession();
}

BEGIN_NAMED_CLASS_INFO("", CPrimarySequence_Base::C_Attlist)
{
    SET_INTERNAL_NAME("PrimarySequence", "attlist");
    SET_CLASS_MODULE("Docsum-3-4");
    ADD_NAMED_STD_MEMBER("dbSnpBuild", m_DbSnpBuild)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("gi", m_Gi)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("source", m_Source, EAttlist_source)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("accession", m_Accession)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->SetRandomOrder(true);
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CPrimarySequence_Base::C_Attlist::C_Attlist(void)
    : m_DbSnpBuild(0), m_Gi(0), m_Source((EAttlist_source)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CPrimarySequence_Base::C_Attlist::~C_Attlist(void)
{
}


void CPrimarySequence_Base::ResetAttlist(void)
{
    if ( !m_Attlist ) {
        m_Attlist.Reset(new TAttlist());
        return;
    }
    (*m_Attlist).Reset();
}

void CPrimarySequence_Base::SetAttlist(CPrimarySequence_Base::TAttlist& value)
{
    m_Attlist.Reset(&value);
}

void CPrimarySequence_Base::ResetMapLoc(void)
{
    m_MapLoc.clear();
    m_set_State[0] &= ~0xc;
}

void CPrimarySequence_Base::Reset(void)
{
    ResetAttlist();
    ResetMapLoc();
}

BEGIN_NAMED_BASE_CLASS_INFO("PrimarySequence", CPrimarySequence)
{
    SET_CLASS_MODULE("Docsum-3-4");
    ADD_NAMED_REF_MEMBER("attlist", m_Attlist, C_Attlist);
    ADD_NAMED_MEMBER("mapLoc", m_MapLoc, STL_list, (STL_CRef, (CLASS, (CMapLoc))))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CPrimarySequence_Base::CPrimarySequence_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAttlist();
    }
}

// destructor
CPrimarySequence_Base::~CPrimarySequence_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

