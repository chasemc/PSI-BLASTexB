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
#include <objects/macro/Sequence_constraint_rnamol.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_INFO("Sequence-constraint-rnamol", ESequence_constraint_rnamol, false)
{
    SET_ENUM_MODULE("NCBI-Macro");
    ADD_ENUM_VALUE("any", eSequence_constraint_rnamol_any);
    ADD_ENUM_VALUE("genomic", eSequence_constraint_rnamol_genomic);
    ADD_ENUM_VALUE("precursor-RNA", eSequence_constraint_rnamol_precursor_RNA);
    ADD_ENUM_VALUE("mRNA", eSequence_constraint_rnamol_mRNA);
    ADD_ENUM_VALUE("rRNA", eSequence_constraint_rnamol_rRNA);
    ADD_ENUM_VALUE("tRNA", eSequence_constraint_rnamol_tRNA);
    ADD_ENUM_VALUE("genomic-mRNA", eSequence_constraint_rnamol_genomic_mRNA);
    ADD_ENUM_VALUE("cRNA", eSequence_constraint_rnamol_cRNA);
    ADD_ENUM_VALUE("transcribed-RNA", eSequence_constraint_rnamol_transcribed_RNA);
    ADD_ENUM_VALUE("ncRNA", eSequence_constraint_rnamol_ncRNA);
    ADD_ENUM_VALUE("transfer-messenger-RNA", eSequence_constraint_rnamol_transfer_messenger_RNA);
}
END_ENUM_INFO


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
