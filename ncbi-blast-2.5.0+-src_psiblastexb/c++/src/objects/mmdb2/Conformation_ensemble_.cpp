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
 *   'mmdb2.asn'.
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
#include <objects/mmdb2/Conformation_ensemble.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CConformation_ensemble_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0x3;
}

void CConformation_ensemble_Base::ResetAlt_conf_ids(void)
{
    m_Alt_conf_ids.clear();
    m_set_State[0] &= ~0xc;
}

void CConformation_ensemble_Base::Reset(void)
{
    ResetName();
    ResetAlt_conf_ids();
}

BEGIN_NAMED_BASE_CLASS_INFO("Conformation-ensemble", CConformation_ensemble)
{
    SET_CLASS_MODULE("MMDB-Structural-model");
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("alt-conf-ids", m_Alt_conf_ids, STL_list, (CLASS, (CAlternate_conformation_id)))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CConformation_ensemble_Base::CConformation_ensemble_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CConformation_ensemble_Base::~CConformation_ensemble_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

