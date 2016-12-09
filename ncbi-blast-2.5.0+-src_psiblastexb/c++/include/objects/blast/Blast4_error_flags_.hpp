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

/// @file Blast4_error_flags_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLAST_BLAST4_ERROR_FLAGS_BASE_HPP
#define OBJECTS_BLAST_BLAST4_ERROR_FLAGS_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/// This enumeration defines values that are intended to be used with the
/// Blast4-error::code in a logical AND operation to easily determine whether a
/// given Blast4-error object contains either a warning or an error
enum EBlast4_error_flags {
    eBlast4_error_flags_warning = 1024,
    eBlast4_error_flags_error   = 2048
};

/// Access to EBlast4_error_flags's attributes (values, names) as defined in spec
NCBI_BLAST_EXPORT const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EBlast4_error_flags)(void);


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST4_ERROR_FLAGS_BASE_HPP
