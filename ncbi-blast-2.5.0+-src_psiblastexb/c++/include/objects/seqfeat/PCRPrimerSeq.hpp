/* $Id: PCRPrimerSeq.hpp 446399 2014-09-15 18:19:05Z asztalos $
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

/// @file PCRPrimerSeq.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: PCRPrimerSeq_.hpp


#ifndef OBJECTS_SEQFEAT_PCRPRIMERSEQ_HPP
#define OBJECTS_SEQFEAT_PCRPRIMERSEQ_HPP


// generated includes
#include <objects/seqfeat/PCRPrimerSeq_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQFEAT_EXPORT CPCRPrimerSeq : public CPCRPrimerSeq_Base
{
    typedef CPCRPrimerSeq_Base Tparent;
public:
    CPCRPrimerSeq(void) {}

    /// Explicit constructor from the primitive type.
    explicit CPCRPrimerSeq(const std::string& data)
        : Tparent(data) {}

    static void Clean(string& seq);
    static bool IsValid(const string& seq, char& bad_ch);
    static bool TrimJunk(string& seq);
    static bool Fixi(string& seq);
};

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_PCRPRIMERSEQ_HPP
/* Original file checksum: lines: 70, chars: 2219, CRC32: f43d016f */
