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
 *   'ncbimime.asn'.
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
#include <objects/ncbimime/Entrez_style.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_INFO("Entrez-style", EEntrez_style, false)
{
    SET_ENUM_MODULE("NCBI-Mime");
    ADD_ENUM_VALUE("docsum", eEntrez_style_docsum);
    ADD_ENUM_VALUE("genbank", eEntrez_style_genbank);
    ADD_ENUM_VALUE("genpept", eEntrez_style_genpept);
    ADD_ENUM_VALUE("fasta", eEntrez_style_fasta);
    ADD_ENUM_VALUE("asn1", eEntrez_style_asn1);
    ADD_ENUM_VALUE("graphic", eEntrez_style_graphic);
    ADD_ENUM_VALUE("alignment", eEntrez_style_alignment);
    ADD_ENUM_VALUE("globalview", eEntrez_style_globalview);
    ADD_ENUM_VALUE("report", eEntrez_style_report);
    ADD_ENUM_VALUE("medlars", eEntrez_style_medlars);
    ADD_ENUM_VALUE("embl", eEntrez_style_embl);
    ADD_ENUM_VALUE("pdb", eEntrez_style_pdb);
    ADD_ENUM_VALUE("kinemage", eEntrez_style_kinemage);
}
END_ENUM_INFO


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
