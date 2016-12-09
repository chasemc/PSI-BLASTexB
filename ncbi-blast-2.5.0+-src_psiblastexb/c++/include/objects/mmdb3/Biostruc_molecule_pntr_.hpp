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

/// @file Biostruc_molecule_pntr_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB3_BIOSTRUC_MOLECULE_PNTR_BASE_HPP
#define OBJECTS_MMDB3_BIOSTRUC_MOLECULE_PNTR_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/mmdb1/Molecule_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CBiostruc_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Atom, residue or molecule motifs describe a substructure defined by a set
/// of nodes from the chemical graph. PDB secondary structure features are
/// described as a residue motif, since they are not associated with any one of
/// the multiple models that may be provided in a PDB file.  NCBI-assigned
/// secondary structure is represented in the same way, even though it is
/// model specific, since this allows for simple mapping of the structural 
/// feature onto a sequence-only representation. This addressing mode may also 
/// be used to describe features to be associated with particular atoms, 
/// as, for example, the chemical shift observed in an NMR experiment.
class NCBI_MMDB3_EXPORT CBiostruc_molecule_pntr_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBiostruc_molecule_pntr_Base(void);
    // destructor
    virtual ~CBiostruc_molecule_pntr_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CBiostruc_id TBiostruc_id;
    typedef CMolecule_id TMolecule_id;

    // getters
    // setters

    /// mandatory
    /// typedef CBiostruc_id TBiostruc_id
    ///  Check whether the Biostruc_id data member has been assigned a value.
    bool IsSetBiostruc_id(void) const;
    /// Check whether it is safe or not to call GetBiostruc_id method.
    bool CanGetBiostruc_id(void) const;
    void ResetBiostruc_id(void);
    const TBiostruc_id& GetBiostruc_id(void) const;
    void SetBiostruc_id(TBiostruc_id& value);
    TBiostruc_id& SetBiostruc_id(void);

    /// mandatory
    /// typedef CMolecule_id TMolecule_id
    ///  Check whether the Molecule_id data member has been assigned a value.
    bool IsSetMolecule_id(void) const;
    /// Check whether it is safe or not to call GetMolecule_id method.
    bool CanGetMolecule_id(void) const;
    void ResetMolecule_id(void);
    const TMolecule_id& GetMolecule_id(void) const;
    void SetMolecule_id(const TMolecule_id& value);
    TMolecule_id& SetMolecule_id(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBiostruc_molecule_pntr_Base(const CBiostruc_molecule_pntr_Base&);
    CBiostruc_molecule_pntr_Base& operator=(const CBiostruc_molecule_pntr_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TBiostruc_id > m_Biostruc_id;
    CMolecule_id m_Molecule_id;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBiostruc_molecule_pntr_Base::IsSetBiostruc_id(void) const
{
    return m_Biostruc_id.NotEmpty();
}

inline
bool CBiostruc_molecule_pntr_Base::CanGetBiostruc_id(void) const
{
    return true;
}

inline
const CBiostruc_molecule_pntr_Base::TBiostruc_id& CBiostruc_molecule_pntr_Base::GetBiostruc_id(void) const
{
    if ( !m_Biostruc_id ) {
        const_cast<CBiostruc_molecule_pntr_Base*>(this)->ResetBiostruc_id();
    }
    return (*m_Biostruc_id);
}

inline
CBiostruc_molecule_pntr_Base::TBiostruc_id& CBiostruc_molecule_pntr_Base::SetBiostruc_id(void)
{
    if ( !m_Biostruc_id ) {
        ResetBiostruc_id();
    }
    return (*m_Biostruc_id);
}

inline
bool CBiostruc_molecule_pntr_Base::IsSetMolecule_id(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CBiostruc_molecule_pntr_Base::CanGetMolecule_id(void) const
{
    return IsSetMolecule_id();
}

inline
void CBiostruc_molecule_pntr_Base::ResetMolecule_id(void)
{
    m_Molecule_id = CMolecule_id(0);
    m_set_State[0] &= ~0xc;
}

inline
const CBiostruc_molecule_pntr_Base::TMolecule_id& CBiostruc_molecule_pntr_Base::GetMolecule_id(void) const
{
    if (!CanGetMolecule_id()) {
        ThrowUnassigned(1);
    }
    return m_Molecule_id;
}

inline
void CBiostruc_molecule_pntr_Base::SetMolecule_id(const CBiostruc_molecule_pntr_Base::TMolecule_id& value)
{
    m_Molecule_id = value;
    m_set_State[0] |= 0xc;
}

inline
CBiostruc_molecule_pntr_Base::TMolecule_id& CBiostruc_molecule_pntr_Base::SetMolecule_id(void)
{
    m_set_State[0] |= 0x4;
    return m_Molecule_id;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_BIOSTRUC_MOLECULE_PNTR_BASE_HPP
