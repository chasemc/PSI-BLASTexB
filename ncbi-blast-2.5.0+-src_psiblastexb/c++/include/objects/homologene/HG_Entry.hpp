/* $Id: HG_Entry.hpp 103491 2007-05-04 17:18:18Z kazimird $
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
 *   'homologene.asn'.
 */

#ifndef HOMOLOGENEENTRY_HPP
#define HOMOLOGENEENTRY_HPP


// generated includes
#include <objects/homologene/HG_Entry_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

class CHG_Entry : public CHG_Entry_Base
{
    typedef CHG_Entry_Base Tparent;
public:
    // constructor
    CHG_Entry(void);
    // destructor
    ~CHG_Entry(void);

private:
    // Prohibit copy constructor and assignment operator
    CHG_Entry(const CHG_Entry& value);
    CHG_Entry& operator=(const CHG_Entry& value);

public:
    // user added stuff
    typedef TGenes TCore_genes;

    bool IsSetCore_genes(void) const { return IsSetGenes(); }
    bool CanGetCore_genes(void) const { return CanGetGenes(); }
    void ResetCore_genes(void) { ResetGenes(); }
    const TCore_genes& GetCore_genes(void) const { return GetGenes(); }
    TCore_genes& SetCore_genes(void) { return SetGenes(); }
};



/////////////////// CHG_Entry inline methods

// constructor
inline
CHG_Entry::CHG_Entry(void)
{
}


/////////////////// end of CHG_Entry inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

#endif // HOMOLOGENEENTRY_HPP
/* Original file checksum: lines: 93, chars: 2441, CRC32: 722077fa */
