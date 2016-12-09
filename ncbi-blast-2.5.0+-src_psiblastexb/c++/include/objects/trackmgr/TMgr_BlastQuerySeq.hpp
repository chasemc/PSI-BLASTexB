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

/// @file TMgr_BlastQuerySeq.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'trackmgr.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: TMgr_BlastQuerySeq_.hpp


#ifndef OBJECTS_TRACKMGR_TMGR_BLASTQUERYSEQ_HPP
#define OBJECTS_TRACKMGR_TMGR_BLASTQUERYSEQ_HPP


// generated includes
#include <objects/trackmgr/TMgr_BlastQuerySeq_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_TRACKMGR_EXPORT CTMgr_BlastQuerySeq : public CTMgr_BlastQuerySeq_Base
{
    typedef CTMgr_BlastQuerySeq_Base Tparent;
public:
    // constructor
    CTMgr_BlastQuerySeq(void);
    // destructor
    ~CTMgr_BlastQuerySeq(void);

private:
    // Prohibit copy constructor and assignment operator
    CTMgr_BlastQuerySeq(const CTMgr_BlastQuerySeq& value);
    CTMgr_BlastQuerySeq& operator=(const CTMgr_BlastQuerySeq& value);

};

/////////////////// CTMgr_BlastQuerySeq inline methods

// constructor
inline
CTMgr_BlastQuerySeq::CTMgr_BlastQuerySeq(void)
{
}


/////////////////// end of CTMgr_BlastQuerySeq inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TRACKMGR_TMGR_BLASTQUERYSEQ_HPP
/* Original file checksum: lines: 86, chars: 2593, CRC32: 1efcbc2e */
