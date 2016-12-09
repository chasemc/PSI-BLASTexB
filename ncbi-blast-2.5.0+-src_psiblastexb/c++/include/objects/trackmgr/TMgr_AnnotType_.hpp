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
 */

/// @file TMgr_AnnotType_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'trackmgr.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TRACKMGR_TMGR_ANNOTTYPE_BASE_HPP
#define OBJECTS_TRACKMGR_TMGR_ANNOTTYPE_BASE_HPP

// extra headers
#include <objects/trackmgr/trackmgr_export.h>

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

enum ETMgr_AnnotType {
    eTMgr_AnnotType_total          =   0,
    eTMgr_AnnotType_feat           =   1,
    eTMgr_AnnotType_feat_gene      = 100,
    eTMgr_AnnotType_feat_cdregion  = 101,
    eTMgr_AnnotType_feat_prot      = 102,
    eTMgr_AnnotType_feat_rna       = 103,
    eTMgr_AnnotType_feat_imp       = 104,
    eTMgr_AnnotType_feat_region    = 105,
    eTMgr_AnnotType_feat_clone     = 106,
    eTMgr_AnnotType_feat_variation = 107,
    eTMgr_AnnotType_feat_user      = 108,
    eTMgr_AnnotType_seq_table      =   2,
    eTMgr_AnnotType_graph          =   3,
    eTMgr_AnnotType_align          =   4,
    eTMgr_AnnotType_ids            =   5,
    eTMgr_AnnotType_locs           =   6
};

/// Access to ETMgr_AnnotType's attributes (values, names) as defined in spec
NCBI_TRACKMGR_EXPORT const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ETMgr_AnnotType)(void);


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TRACKMGR_TMGR_ANNOTTYPE_BASE_HPP
