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
#include <objects/macro/Adjus_featu_for_gaps_actio.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CAdjust_features_for_gaps_action_Base::Reset(void)
{
    ResetType();
    ResetAdjust_for_unknown_length_gaps();
    ResetAdjust_for_known_length_gaps();
    ResetMake_truncated_ends_partial();
    ResetTrim_ends_in_gaps();
    ResetSplit_for_internal_gaps();
    ResetEven_when_gaps_are_in_introns();
}

BEGIN_NAMED_BASE_CLASS_INFO("Adjust-features-for-gaps-action", CAdjust_features_for_gaps_action)
{
    SET_CLASS_MODULE("NCBI-Macro");
    ADD_NAMED_ENUM_MEMBER("type", m_Type, EMacro_feature_type)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("adjust-for-unknown-length-gaps", m_Adjust_for_unknown_length_gaps)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("adjust-for-known-length-gaps", m_Adjust_for_known_length_gaps)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("make-truncated-ends-partial", m_Make_truncated_ends_partial, ETruncated_ends_partial_type)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("trim-ends-in-gaps", m_Trim_ends_in_gaps)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("split-for-internal-gaps", m_Split_for_internal_gaps)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("even-when-gaps-are-in-introns", m_Even_when_gaps_are_in_introns)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CAdjust_features_for_gaps_action_Base::CAdjust_features_for_gaps_action_Base(void)
    : m_Type((ncbi::objects::EMacro_feature_type)(0)), m_Adjust_for_unknown_length_gaps(0), m_Adjust_for_known_length_gaps(0), m_Make_truncated_ends_partial((ncbi::objects::ETruncated_ends_partial_type)(0)), m_Trim_ends_in_gaps(0), m_Split_for_internal_gaps(0), m_Even_when_gaps_are_in_introns(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CAdjust_features_for_gaps_action_Base::~CAdjust_features_for_gaps_action_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
