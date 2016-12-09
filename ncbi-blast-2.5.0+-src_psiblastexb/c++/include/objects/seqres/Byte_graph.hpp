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

/// @file Byte_graph.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqres.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Byte_graph_.hpp


#ifndef OBJECTS_SEQRES_BYTE_GRAPH_HPP
#define OBJECTS_SEQRES_BYTE_GRAPH_HPP


// generated includes
#include <objects/seqres/Byte_graph_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQRES_EXPORT CByte_graph : public CByte_graph_Base
{
    typedef CByte_graph_Base Tparent;
public:
    // constructor
    CByte_graph(void);
    // destructor
    ~CByte_graph(void);

private:
    // Prohibit copy constructor and assignment operator
    CByte_graph(const CByte_graph& value);
    CByte_graph& operator=(const CByte_graph& value);

};

/////////////////// CByte_graph inline methods

// constructor
inline
CByte_graph::CByte_graph(void)
{
}


/////////////////// end of CByte_graph inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQRES_BYTE_GRAPH_HPP
/* Original file checksum: lines: 86, chars: 2429, CRC32: 1aad89d0 */
