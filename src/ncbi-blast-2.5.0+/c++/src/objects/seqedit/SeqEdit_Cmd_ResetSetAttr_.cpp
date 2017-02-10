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
#include <objects/seqedit/SeqEdit_Cmd_ResetSetAttr.hpp>
#include <objects/seqedit/SeqEdit_Id.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CSeqEdit_Cmd_ResetSetAttr_Base::, EWhat, false)
{
    SET_ENUM_INTERNAL_NAME("SeqEdit-Cmd-ResetSetAttr", "what");
    SET_ENUM_MODULE("NCBI-SeqEdit");
    ADD_ENUM_VALUE("not-set", eWhat_not_set);
    ADD_ENUM_VALUE("id", eWhat_id);
    ADD_ENUM_VALUE("coll", eWhat_coll);
    ADD_ENUM_VALUE("level", eWhat_level);
    ADD_ENUM_VALUE("class", eWhat_class);
    ADD_ENUM_VALUE("release", eWhat_release);
    ADD_ENUM_VALUE("date", eWhat_date);
}
END_ENUM_INFO

void CSeqEdit_Cmd_ResetSetAttr_Base::ResetId(void)
{
    if ( !m_Id ) {
        m_Id.Reset(new TId());
        return;
    }
    (*m_Id).Reset();
}

void CSeqEdit_Cmd_ResetSetAttr_Base::SetId(CSeqEdit_Cmd_ResetSetAttr_Base::TId& value)
{
    m_Id.Reset(&value);
}

void CSeqEdit_Cmd_ResetSetAttr_Base::Reset(void)
{
    ResetId();
    ResetWhat();
}

BEGIN_NAMED_BASE_CLASS_INFO("SeqEdit-Cmd-ResetSetAttr", CSeqEdit_Cmd_ResetSetAttr)
{
    SET_CLASS_MODULE("NCBI-SeqEdit");
    ADD_NAMED_REF_MEMBER("id", m_Id, CSeqEdit_Id);
    ADD_NAMED_ENUM_MEMBER("what", m_What, EWhat)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CSeqEdit_Cmd_ResetSetAttr_Base::CSeqEdit_Cmd_ResetSetAttr_Base(void)
    : m_What((EWhat)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetId();
    }
}

// destructor
CSeqEdit_Cmd_ResetSetAttr_Base::~CSeqEdit_Cmd_ResetSetAttr_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
