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

/// @file Word_substitution_set.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Word_substitution_set_.hpp


#ifndef OBJECTS_MACRO_WORD_SUBSTITUTION_SET_HPP
#define OBJECTS_MACRO_WORD_SUBSTITUTION_SET_HPP


// generated includes
#include <objects/macro/Word_substitution_set_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class CWord_substitution_set : public CWord_substitution_set_Base
{
    typedef CWord_substitution_set_Base Tparent;
public:
    // constructor
    CWord_substitution_set(void);
    // destructor
    ~CWord_substitution_set(void);

private:
    // Prohibit copy constructor and assignment operator
    CWord_substitution_set(const CWord_substitution_set& value);
    CWord_substitution_set& operator=(const CWord_substitution_set& value);

};

/////////////////// CWord_substitution_set inline methods

// constructor
inline
CWord_substitution_set::CWord_substitution_set(void)
{
}


/////////////////// end of CWord_substitution_set inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_WORD_SUBSTITUTION_SET_HPP
/* Original file checksum: lines: 86, chars: 2614, CRC32: d976b837 */
