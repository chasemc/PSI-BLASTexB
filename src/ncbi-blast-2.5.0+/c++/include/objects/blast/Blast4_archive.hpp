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

/// @file Blast4_archive.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Blast4_archive_.hpp


#ifndef OBJECTS_BLAST_BLAST4_ARCHIVE_HPP
#define OBJECTS_BLAST_BLAST4_ARCHIVE_HPP


// generated includes
#include <objects/blast/Blast4_archive_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_BLAST_EXPORT CBlast4_archive : public CBlast4_archive_Base
{
    typedef CBlast4_archive_Base Tparent;
public:
    // constructor
    CBlast4_archive(void);
    // destructor
    ~CBlast4_archive(void);

private:
    // Prohibit copy constructor and assignment operator
    CBlast4_archive(const CBlast4_archive& value);
    CBlast4_archive& operator=(const CBlast4_archive& value);

};

/////////////////// CBlast4_archive inline methods

// constructor
inline
CBlast4_archive::CBlast4_archive(void)
{
}


/////////////////// end of CBlast4_archive inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST4_ARCHIVE_HPP
/* Original file checksum: lines: 86, chars: 2499, CRC32: c08559b1 */
