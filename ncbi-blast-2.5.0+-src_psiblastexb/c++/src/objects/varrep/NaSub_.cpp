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
 *   'varrep.asn'.
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
#include <objects/varrep/NaSub.hpp>
#include <objects/varrep/NtLocation.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CNaSub_Base::ResetLoc(void)
{
    if ( !m_Loc ) {
        m_Loc.Reset(new TLoc());
        return;
    }
    (*m_Loc).Reset();
}

void CNaSub_Base::SetLoc(CNaSub_Base::TLoc& value)
{
    m_Loc.Reset(&value);
}

void CNaSub_Base::ResetInitial(void)
{
    m_Initial.erase();
    m_set_State[0] &= ~0xc;
}

void CNaSub_Base::ResetFinal(void)
{
    m_Final.erase();
    m_set_State[0] &= ~0x30;
}

void CNaSub_Base::Reset(void)
{
    ResetLoc();
    ResetInitial();
    ResetFinal();
}

BEGIN_NAMED_BASE_CLASS_INFO("NaSub", CNaSub)
{
    SET_CLASS_MODULE("NCBI-VariationIRep");
    ADD_NAMED_REF_MEMBER("loc", m_Loc, CNtLocation);
    ADD_NAMED_STD_MEMBER("initial", m_Initial)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("final", m_Final)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CNaSub_Base::CNaSub_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetLoc();
    }
}

// destructor
CNaSub_Base::~CNaSub_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

