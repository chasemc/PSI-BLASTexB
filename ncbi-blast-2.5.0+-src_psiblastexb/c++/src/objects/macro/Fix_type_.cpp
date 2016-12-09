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
#include <objects/macro/Fix_type.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_INFO("Fix-type", EFix_type, false)
{
    SET_ENUM_MODULE("NCBI-Macro");
    ADD_ENUM_VALUE("none", eFix_type_none);
    ADD_ENUM_VALUE("typo", eFix_type_typo);
    ADD_ENUM_VALUE("putative-typo", eFix_type_putative_typo);
    ADD_ENUM_VALUE("quickfix", eFix_type_quickfix);
    ADD_ENUM_VALUE("no-organelle-for-prokaryote", eFix_type_no_organelle_for_prokaryote);
    ADD_ENUM_VALUE("might-be-nonfunctional", eFix_type_might_be_nonfunctional);
    ADD_ENUM_VALUE("database", eFix_type_database);
    ADD_ENUM_VALUE("remove-organism-name", eFix_type_remove_organism_name);
    ADD_ENUM_VALUE("inappropriate-symbol", eFix_type_inappropriate_symbol);
    ADD_ENUM_VALUE("evolutionary-relationship", eFix_type_evolutionary_relationship);
    ADD_ENUM_VALUE("use-protein", eFix_type_use_protein);
    ADD_ENUM_VALUE("hypothetical", eFix_type_hypothetical);
    ADD_ENUM_VALUE("british", eFix_type_british);
    ADD_ENUM_VALUE("description", eFix_type_description);
    ADD_ENUM_VALUE("gene", eFix_type_gene);
}
END_ENUM_INFO


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
