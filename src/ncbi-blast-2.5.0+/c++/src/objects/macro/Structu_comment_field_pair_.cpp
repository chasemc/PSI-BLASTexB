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
 *   'macro.asn'.
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
#include <objects/macro/Structu_comment_field_pair.hpp>
#include <objects/macro/Structured_comment_field.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CStructured_comment_field_pair_Base::ResetFrom(void)
{
    if ( !m_From ) {
        m_From.Reset(new TFrom());
        return;
    }
    (*m_From).Reset();
}

void CStructured_comment_field_pair_Base::SetFrom(CStructured_comment_field_pair_Base::TFrom& value)
{
    m_From.Reset(&value);
}

void CStructured_comment_field_pair_Base::ResetTo(void)
{
    if ( !m_To ) {
        m_To.Reset(new TTo());
        return;
    }
    (*m_To).Reset();
}

void CStructured_comment_field_pair_Base::SetTo(CStructured_comment_field_pair_Base::TTo& value)
{
    m_To.Reset(&value);
}

void CStructured_comment_field_pair_Base::Reset(void)
{
    ResetFrom();
    ResetTo();
}

BEGIN_NAMED_BASE_CLASS_INFO("Structured-comment-field-pair", CStructured_comment_field_pair)
{
    SET_CLASS_MODULE("NCBI-Macro");
    ADD_NAMED_REF_MEMBER("from", m_From, CStructured_comment_field);
    ADD_NAMED_REF_MEMBER("to", m_To, CStructured_comment_field);
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CStructured_comment_field_pair_Base::CStructured_comment_field_pair_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetFrom();
        ResetTo();
    }
}

// destructor
CStructured_comment_field_pair_Base::~CStructured_comment_field_pair_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
