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
 *   'pcsubstance.asn'.
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
#include <objects/pcsubstance/PC_StereoSquarePlanar.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CPC_StereoSquarePlanar_Base::, EParity, true)
{
    SET_ENUM_INTERNAL_NAME("PC-StereoSquarePlanar", "parity");
    SET_ENUM_MODULE("NCBI-PCSubstance");
    ADD_ENUM_VALUE("u-shape", eParity_u_shape);
    ADD_ENUM_VALUE("z-shape", eParity_z_shape);
    ADD_ENUM_VALUE("x-shape", eParity_x_shape);
    ADD_ENUM_VALUE("any", eParity_any);
    ADD_ENUM_VALUE("unknown", eParity_unknown);
}
END_ENUM_INFO

void CPC_StereoSquarePlanar_Base::Reset(void)
{
    ResetCenter();
    ResetLbelow();
    ResetRbelow();
    ResetLabove();
    ResetRabove();
    ResetParity();
}

BEGIN_NAMED_BASE_CLASS_INFO("PC-StereoSquarePlanar", CPC_StereoSquarePlanar)
{
    SET_CLASS_MODULE("NCBI-PCSubstance");
    ADD_NAMED_STD_MEMBER("center", m_Center)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("lbelow", m_Lbelow)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("rbelow", m_Rbelow)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("labove", m_Labove)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("rabove", m_Rabove)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("parity", m_Parity, EParity)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CPC_StereoSquarePlanar_Base::CPC_StereoSquarePlanar_Base(void)
    : m_Center(0), m_Lbelow(0), m_Rbelow(0), m_Labove(0), m_Rabove(0), m_Parity((EParity)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CPC_StereoSquarePlanar_Base::~CPC_StereoSquarePlanar_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

