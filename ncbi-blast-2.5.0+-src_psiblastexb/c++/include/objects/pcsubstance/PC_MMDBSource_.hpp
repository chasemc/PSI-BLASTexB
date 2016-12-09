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

/// @file PC_MMDBSource_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pcsubstance.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_PCSUBSTANCE_PC_MMDBSOURCE_BASE_HPP
#define OBJECTS_PCSUBSTANCE_PC_MMDBSOURCE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// MMDB Source Record detailing specific location or part of an MMDB Record
class NCBI_PCSUBSTANCE_EXPORT CPC_MMDBSource_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPC_MMDBSource_Base(void);
    // destructor
    virtual ~CPC_MMDBSource_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TMmdb_id;
    typedef int TMolecule_id;
    typedef list< string > TMolecule_name;
    typedef int TResidue_id;
    typedef string TResidue_name;
    typedef int TAtom_id;
    typedef string TAtom_name;

    // getters
    // setters

    /// MMDB Record ID
    ///   Note: Must be greater than "0" or, if invalid, "0"
    /// mandatory
    /// typedef int TMmdb_id
    ///  Check whether the Mmdb_id data member has been assigned a value.
    bool IsSetMmdb_id(void) const;
    /// Check whether it is safe or not to call GetMmdb_id method.
    bool CanGetMmdb_id(void) const;
    void ResetMmdb_id(void);
    TMmdb_id GetMmdb_id(void) const;
    void SetMmdb_id(TMmdb_id value);
    TMmdb_id& SetMmdb_id(void);

    /// MMDB Molecule ID
    ///   Note: Must be greater than "0" or, if invalid, "0"
    /// mandatory
    /// typedef int TMolecule_id
    ///  Check whether the Molecule_id data member has been assigned a value.
    bool IsSetMolecule_id(void) const;
    /// Check whether it is safe or not to call GetMolecule_id method.
    bool CanGetMolecule_id(void) const;
    void ResetMolecule_id(void);
    TMolecule_id GetMolecule_id(void) const;
    void SetMolecule_id(TMolecule_id value);
    TMolecule_id& SetMolecule_id(void);

    /// MMDB Molecule Name
    /// mandatory
    /// typedef list< string > TMolecule_name
    ///  Check whether the Molecule_name data member has been assigned a value.
    bool IsSetMolecule_name(void) const;
    /// Check whether it is safe or not to call GetMolecule_name method.
    bool CanGetMolecule_name(void) const;
    void ResetMolecule_name(void);
    const TMolecule_name& GetMolecule_name(void) const;
    TMolecule_name& SetMolecule_name(void);

    /// Residue ID
    ///   Note: Must be greater than "0" or, if invalid, "0"
    /// optional
    /// typedef int TResidue_id
    ///  Check whether the Residue_id data member has been assigned a value.
    bool IsSetResidue_id(void) const;
    /// Check whether it is safe or not to call GetResidue_id method.
    bool CanGetResidue_id(void) const;
    void ResetResidue_id(void);
    TResidue_id GetResidue_id(void) const;
    void SetResidue_id(TResidue_id value);
    TResidue_id& SetResidue_id(void);

    /// Residue Name
    /// optional
    /// typedef string TResidue_name
    ///  Check whether the Residue_name data member has been assigned a value.
    bool IsSetResidue_name(void) const;
    /// Check whether it is safe or not to call GetResidue_name method.
    bool CanGetResidue_name(void) const;
    void ResetResidue_name(void);
    const TResidue_name& GetResidue_name(void) const;
    void SetResidue_name(const TResidue_name& value);
    TResidue_name& SetResidue_name(void);

    /// Atom ID
    ///   Note: Must be greater than "0" or, if invalid, "0"
    /// optional
    /// typedef int TAtom_id
    ///  Check whether the Atom_id data member has been assigned a value.
    bool IsSetAtom_id(void) const;
    /// Check whether it is safe or not to call GetAtom_id method.
    bool CanGetAtom_id(void) const;
    void ResetAtom_id(void);
    TAtom_id GetAtom_id(void) const;
    void SetAtom_id(TAtom_id value);
    TAtom_id& SetAtom_id(void);

    /// Atom Name
    /// optional
    /// typedef string TAtom_name
    ///  Check whether the Atom_name data member has been assigned a value.
    bool IsSetAtom_name(void) const;
    /// Check whether it is safe or not to call GetAtom_name method.
    bool CanGetAtom_name(void) const;
    void ResetAtom_name(void);
    const TAtom_name& GetAtom_name(void) const;
    void SetAtom_name(const TAtom_name& value);
    TAtom_name& SetAtom_name(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPC_MMDBSource_Base(const CPC_MMDBSource_Base&);
    CPC_MMDBSource_Base& operator=(const CPC_MMDBSource_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Mmdb_id;
    int m_Molecule_id;
    list< string > m_Molecule_name;
    int m_Residue_id;
    string m_Residue_name;
    int m_Atom_id;
    string m_Atom_name;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPC_MMDBSource_Base::IsSetMmdb_id(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPC_MMDBSource_Base::CanGetMmdb_id(void) const
{
    return IsSetMmdb_id();
}

inline
void CPC_MMDBSource_Base::ResetMmdb_id(void)
{
    m_Mmdb_id = 0;
    m_set_State[0] &= ~0x3;
}

inline
CPC_MMDBSource_Base::TMmdb_id CPC_MMDBSource_Base::GetMmdb_id(void) const
{
    if (!CanGetMmdb_id()) {
        ThrowUnassigned(0);
    }
    return m_Mmdb_id;
}

inline
void CPC_MMDBSource_Base::SetMmdb_id(CPC_MMDBSource_Base::TMmdb_id value)
{
    m_Mmdb_id = value;
    m_set_State[0] |= 0x3;
}

inline
CPC_MMDBSource_Base::TMmdb_id& CPC_MMDBSource_Base::SetMmdb_id(void)
{
#ifdef _DEBUG
    if (!IsSetMmdb_id()) {
        memset(&m_Mmdb_id,UnassignedByte(),sizeof(m_Mmdb_id));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Mmdb_id;
}

inline
bool CPC_MMDBSource_Base::IsSetMolecule_id(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPC_MMDBSource_Base::CanGetMolecule_id(void) const
{
    return IsSetMolecule_id();
}

inline
void CPC_MMDBSource_Base::ResetMolecule_id(void)
{
    m_Molecule_id = 0;
    m_set_State[0] &= ~0xc;
}

inline
CPC_MMDBSource_Base::TMolecule_id CPC_MMDBSource_Base::GetMolecule_id(void) const
{
    if (!CanGetMolecule_id()) {
        ThrowUnassigned(1);
    }
    return m_Molecule_id;
}

inline
void CPC_MMDBSource_Base::SetMolecule_id(CPC_MMDBSource_Base::TMolecule_id value)
{
    m_Molecule_id = value;
    m_set_State[0] |= 0xc;
}

inline
CPC_MMDBSource_Base::TMolecule_id& CPC_MMDBSource_Base::SetMolecule_id(void)
{
#ifdef _DEBUG
    if (!IsSetMolecule_id()) {
        memset(&m_Molecule_id,UnassignedByte(),sizeof(m_Molecule_id));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Molecule_id;
}

inline
bool CPC_MMDBSource_Base::IsSetMolecule_name(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CPC_MMDBSource_Base::CanGetMolecule_name(void) const
{
    return true;
}

inline
const CPC_MMDBSource_Base::TMolecule_name& CPC_MMDBSource_Base::GetMolecule_name(void) const
{
    return m_Molecule_name;
}

inline
CPC_MMDBSource_Base::TMolecule_name& CPC_MMDBSource_Base::SetMolecule_name(void)
{
    m_set_State[0] |= 0x10;
    return m_Molecule_name;
}

inline
bool CPC_MMDBSource_Base::IsSetResidue_id(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CPC_MMDBSource_Base::CanGetResidue_id(void) const
{
    return IsSetResidue_id();
}

inline
void CPC_MMDBSource_Base::ResetResidue_id(void)
{
    m_Residue_id = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CPC_MMDBSource_Base::TResidue_id CPC_MMDBSource_Base::GetResidue_id(void) const
{
    if (!CanGetResidue_id()) {
        ThrowUnassigned(3);
    }
    return m_Residue_id;
}

inline
void CPC_MMDBSource_Base::SetResidue_id(CPC_MMDBSource_Base::TResidue_id value)
{
    m_Residue_id = value;
    m_set_State[0] |= 0xc0;
}

inline
CPC_MMDBSource_Base::TResidue_id& CPC_MMDBSource_Base::SetResidue_id(void)
{
#ifdef _DEBUG
    if (!IsSetResidue_id()) {
        memset(&m_Residue_id,UnassignedByte(),sizeof(m_Residue_id));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Residue_id;
}

inline
bool CPC_MMDBSource_Base::IsSetResidue_name(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CPC_MMDBSource_Base::CanGetResidue_name(void) const
{
    return IsSetResidue_name();
}

inline
const CPC_MMDBSource_Base::TResidue_name& CPC_MMDBSource_Base::GetResidue_name(void) const
{
    if (!CanGetResidue_name()) {
        ThrowUnassigned(4);
    }
    return m_Residue_name;
}

inline
void CPC_MMDBSource_Base::SetResidue_name(const CPC_MMDBSource_Base::TResidue_name& value)
{
    m_Residue_name = value;
    m_set_State[0] |= 0x300;
}

inline
CPC_MMDBSource_Base::TResidue_name& CPC_MMDBSource_Base::SetResidue_name(void)
{
#ifdef _DEBUG
    if (!IsSetResidue_name()) {
        m_Residue_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Residue_name;
}

inline
bool CPC_MMDBSource_Base::IsSetAtom_id(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CPC_MMDBSource_Base::CanGetAtom_id(void) const
{
    return IsSetAtom_id();
}

inline
void CPC_MMDBSource_Base::ResetAtom_id(void)
{
    m_Atom_id = 0;
    m_set_State[0] &= ~0xc00;
}

inline
CPC_MMDBSource_Base::TAtom_id CPC_MMDBSource_Base::GetAtom_id(void) const
{
    if (!CanGetAtom_id()) {
        ThrowUnassigned(5);
    }
    return m_Atom_id;
}

inline
void CPC_MMDBSource_Base::SetAtom_id(CPC_MMDBSource_Base::TAtom_id value)
{
    m_Atom_id = value;
    m_set_State[0] |= 0xc00;
}

inline
CPC_MMDBSource_Base::TAtom_id& CPC_MMDBSource_Base::SetAtom_id(void)
{
#ifdef _DEBUG
    if (!IsSetAtom_id()) {
        memset(&m_Atom_id,UnassignedByte(),sizeof(m_Atom_id));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Atom_id;
}

inline
bool CPC_MMDBSource_Base::IsSetAtom_name(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CPC_MMDBSource_Base::CanGetAtom_name(void) const
{
    return IsSetAtom_name();
}

inline
const CPC_MMDBSource_Base::TAtom_name& CPC_MMDBSource_Base::GetAtom_name(void) const
{
    if (!CanGetAtom_name()) {
        ThrowUnassigned(6);
    }
    return m_Atom_name;
}

inline
void CPC_MMDBSource_Base::SetAtom_name(const CPC_MMDBSource_Base::TAtom_name& value)
{
    m_Atom_name = value;
    m_set_State[0] |= 0x3000;
}

inline
CPC_MMDBSource_Base::TAtom_name& CPC_MMDBSource_Base::SetAtom_name(void)
{
#ifdef _DEBUG
    if (!IsSetAtom_name()) {
        m_Atom_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Atom_name;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCSUBSTANCE_PC_MMDBSOURCE_BASE_HPP
