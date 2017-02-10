/* $Id: OrgName.hpp 452696 2014-11-24 15:23:55Z bollin $
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
 * Author:  .......
 *
 * File Description:
 *   .......
 *
 * Remark:
 *   This code was originally generated by application DATATOOL
 *   using specifications from the data definition file
 *   'seqfeat.asn'.
 */

#ifndef OBJECTS_SEQFEAT_ORGNAME_HPP
#define OBJECTS_SEQFEAT_ORGNAME_HPP


// generated includes
#include <objects/seqfeat/OrgName_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

class NCBI_SEQFEAT_EXPORT COrgName : public COrgName_Base
{
    typedef COrgName_Base Tparent;
public:
    // constructor
    COrgName(void);
    // destructor
    ~COrgName(void);

    bool GetFlatName(string& name_out, string* lineage = 0) const;

    // Flag indicating that node's scientific name is "well specified" according to the
    // respective taxonomic nomenclature (e.g. Genus species subspecies). 
    // Based on "specified" property from Taxonomy database.
    // Flag is kept along with other flags in orgname.attrib field 
    // (see comments to x_SetAttribFlag() function)
    bool IsFormalName() const;
    void SetFormalNameFlag( bool bFormalName );

    // Uncultured flag.
    // Flag is kept along with other flags in orgname.attrib field
    // (see comments to x_SetAttribFlag() function)
    bool IsUncultured() const;
    void SetUncultured( bool bUncultured );

    CRef<COrgName> MakeCommon(const COrgName& other) const;

private:
    // Prohibit copy constructor and assignment operator
    COrgName(const COrgName& value);
    COrgName& operator=(const COrgName& value);
    // The proposed format for orgname flags: flagname1;[flagname2;]...
    // where flagnameX consists of ascii alphanum characters only. Each value of flagnameX is unique.
    // Presence of flag name in the strings means 'true' value for the flag.
    void x_SetAttribFlag( const string& name );
    void x_ResetAttribFlag( const string& name );
    bool x_GetAttribFlag( const string& name ) const;
};



/////////////////// COrgName inline methods

// constructor
inline
COrgName::COrgName(void)
{
}


/////////////////// end of COrgName inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

#endif // OBJECTS_SEQFEAT_ORGNAME_HPP
/* Original file checksum: lines: 93, chars: 2386, CRC32: ec8a8922 */