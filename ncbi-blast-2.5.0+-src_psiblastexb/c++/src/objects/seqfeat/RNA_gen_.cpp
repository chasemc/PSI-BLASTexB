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
#include <objects/seqfeat/RNA_gen.hpp>
#include <objects/seqfeat/RNA_qual_set.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CRNA_gen_Base::ResetClass(void)
{
    m_Class.erase();
    m_set_State[0] &= ~0x3;
}

void CRNA_gen_Base::ResetProduct(void)
{
    m_Product.erase();
    m_set_State[0] &= ~0xc;
}

void CRNA_gen_Base::ResetQuals(void)
{
    m_Quals.Reset();
}

void CRNA_gen_Base::SetQuals(CRNA_gen_Base::TQuals& value)
{
    m_Quals.Reset(&value);
}

CRNA_gen_Base::TQuals& CRNA_gen_Base::SetQuals(void)
{
    if ( !m_Quals )
        m_Quals.Reset(new ncbi::objects::CRNA_qual_set());
    return (*m_Quals);
}

void CRNA_gen_Base::Reset(void)
{
    ResetClass();
    ResetProduct();
    ResetQuals();
}

BEGIN_NAMED_BASE_CLASS_INFO("RNA-gen", CRNA_gen)
{
    SET_CLASS_MODULE("NCBI-RNA");
    ADD_NAMED_STD_MEMBER("class", m_Class)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("product", m_Product)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("quals", m_Quals, CRNA_qual_set)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CRNA_gen_Base::CRNA_gen_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CRNA_gen_Base::~CRNA_gen_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

