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
 *   'mla.asn'.
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
#include <objects/mla/Title_type.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_INFO("Title-type", ETitle_type, false)
{
    SET_ENUM_MODULE("NCBI-MedArchive");
    ADD_ENUM_VALUE("not-set", eTitle_type_not_set);
    ADD_ENUM_VALUE("name", eTitle_type_name);
    ADD_ENUM_VALUE("tsub", eTitle_type_tsub);
    ADD_ENUM_VALUE("trans", eTitle_type_trans);
    ADD_ENUM_VALUE("jta", eTitle_type_jta);
    ADD_ENUM_VALUE("iso-jta", eTitle_type_iso_jta);
    ADD_ENUM_VALUE("ml-jta", eTitle_type_ml_jta);
    ADD_ENUM_VALUE("coden", eTitle_type_coden);
    ADD_ENUM_VALUE("issn", eTitle_type_issn);
    ADD_ENUM_VALUE("abr", eTitle_type_abr);
    ADD_ENUM_VALUE("isbn", eTitle_type_isbn);
    ADD_ENUM_VALUE("all", eTitle_type_all);
}
END_ENUM_INFO


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

