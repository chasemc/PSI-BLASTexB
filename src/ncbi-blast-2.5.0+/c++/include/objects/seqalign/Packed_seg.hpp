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

/// @file Packed_seg.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqalign.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Packed_seg_.hpp


#ifndef OBJECTS_SEQALIGN_PACKED_SEG_HPP
#define OBJECTS_SEQALIGN_PACKED_SEG_HPP


// generated includes
#include <objects/seqalign/Packed_seg_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQALIGN_EXPORT CPacked_seg : public CPacked_seg_Base
{
    typedef CPacked_seg_Base Tparent;
public:
    // constructor
    CPacked_seg(void);
    // destructor
    ~CPacked_seg(void);

private:
    // Prohibit copy constructor and assignment operator
    CPacked_seg(const CPacked_seg& value);
    CPacked_seg& operator=(const CPacked_seg& value);

};

/////////////////// CPacked_seg inline methods

// constructor
inline
CPacked_seg::CPacked_seg(void)
{
}


/////////////////// end of CPacked_seg inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQALIGN_PACKED_SEG_HPP
/* Original file checksum: lines: 86, chars: 2441, CRC32: 49c738d9 */