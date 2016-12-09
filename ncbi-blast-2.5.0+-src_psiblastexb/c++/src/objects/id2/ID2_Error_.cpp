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
 *   'id2.asn'.
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
#include <objects/id2/ID2_Error.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CID2_Error_Base::, ESeverity, false)
{
    SET_ENUM_INTERNAL_NAME("ID2-Error", "severity");
    SET_ENUM_MODULE("NCBI-ID2Access");
    ADD_ENUM_VALUE("warning", eSeverity_warning);
    ADD_ENUM_VALUE("failed-command", eSeverity_failed_command);
    ADD_ENUM_VALUE("failed-connection", eSeverity_failed_connection);
    ADD_ENUM_VALUE("failed-server", eSeverity_failed_server);
    ADD_ENUM_VALUE("no-data", eSeverity_no_data);
    ADD_ENUM_VALUE("restricted-data", eSeverity_restricted_data);
    ADD_ENUM_VALUE("unsupported-command", eSeverity_unsupported_command);
    ADD_ENUM_VALUE("invalid-arguments", eSeverity_invalid_arguments);
}
END_ENUM_INFO

void CID2_Error_Base::ResetMessage(void)
{
    m_Message.erase();
    m_set_State[0] &= ~0x30;
}

void CID2_Error_Base::Reset(void)
{
    ResetSeverity();
    ResetRetry_delay();
    ResetMessage();
}

BEGIN_NAMED_BASE_CLASS_INFO("ID2-Error", CID2_Error)
{
    SET_CLASS_MODULE("NCBI-ID2Access");
    ADD_NAMED_ENUM_MEMBER("severity", m_Severity, ESeverity)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("retry-delay", m_Retry_delay)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("message", m_Message)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CID2_Error_Base::CID2_Error_Base(void)
    : m_Severity((ESeverity)(0)), m_Retry_delay(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CID2_Error_Base::~CID2_Error_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

