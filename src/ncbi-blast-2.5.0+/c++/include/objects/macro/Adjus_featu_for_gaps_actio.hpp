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

/// @file Adjus_featu_for_gaps_actio.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Adjus_featu_for_gaps_actio_.hpp


#ifndef OBJECTS_MACRO_ADJUS_FEATU_FOR_GAPS_ACTIO_HPP
#define OBJECTS_MACRO_ADJUS_FEATU_FOR_GAPS_ACTIO_HPP


// generated includes
#include <objects/macro/Adjus_featu_for_gaps_actio_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class CAdjust_features_for_gaps_action : public CAdjust_features_for_gaps_action_Base
{
    typedef CAdjust_features_for_gaps_action_Base Tparent;
public:
    // constructor
    CAdjust_features_for_gaps_action(void);
    // destructor
    ~CAdjust_features_for_gaps_action(void);

private:
    // Prohibit copy constructor and assignment operator
    CAdjust_features_for_gaps_action(const CAdjust_features_for_gaps_action& value);
    CAdjust_features_for_gaps_action& operator=(const CAdjust_features_for_gaps_action& value);

};

/////////////////// CAdjust_features_for_gaps_action inline methods

// constructor
inline
CAdjust_features_for_gaps_action::CAdjust_features_for_gaps_action(void)
{
}


/////////////////// end of CAdjust_features_for_gaps_action inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_ADJUS_FEATU_FOR_GAPS_ACTIO_HPP
/* Original file checksum: lines: 86, chars: 2774, CRC32: 2f23cd5c */