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

/// @file Rna_qual_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_RNA_QUAL_BASE_HPP
#define OBJECTS_MACRO_RNA_QUAL_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Rna_field.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CRna_feat_type;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CRna_qual_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CRna_qual_Base(void);
    // destructor
    virtual ~CRna_qual_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CRna_feat_type TType;
    typedef ERna_field TField;

    // getters
    // setters

    /// mandatory
    /// typedef CRna_feat_type TType
    ///  Check whether the Type data member has been assigned a value.
    bool IsSetType(void) const;
    /// Check whether it is safe or not to call GetType method.
    bool CanGetType(void) const;
    void ResetType(void);
    const TType& GetType(void) const;
    void SetType(TType& value);
    TType& SetType(void);

    /// mandatory
    /// typedef ERna_field TField
    ///  Check whether the Field data member has been assigned a value.
    bool IsSetField(void) const;
    /// Check whether it is safe or not to call GetField method.
    bool CanGetField(void) const;
    void ResetField(void);
    TField GetField(void) const;
    void SetField(TField value);
    TField& SetField(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CRna_qual_Base(const CRna_qual_Base&);
    CRna_qual_Base& operator=(const CRna_qual_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TType > m_Type;
    ERna_field m_Field;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CRna_qual_Base::IsSetType(void) const
{
    return m_Type.NotEmpty();
}

inline
bool CRna_qual_Base::CanGetType(void) const
{
    return true;
}

inline
const CRna_qual_Base::TType& CRna_qual_Base::GetType(void) const
{
    if ( !m_Type ) {
        const_cast<CRna_qual_Base*>(this)->ResetType();
    }
    return (*m_Type);
}

inline
CRna_qual_Base::TType& CRna_qual_Base::SetType(void)
{
    if ( !m_Type ) {
        ResetType();
    }
    return (*m_Type);
}

inline
bool CRna_qual_Base::IsSetField(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CRna_qual_Base::CanGetField(void) const
{
    return IsSetField();
}

inline
void CRna_qual_Base::ResetField(void)
{
    m_Field = (ncbi::objects::ERna_field)(0);
    m_set_State[0] &= ~0xc;
}

inline
CRna_qual_Base::TField CRna_qual_Base::GetField(void) const
{
    if (!CanGetField()) {
        ThrowUnassigned(1);
    }
    return m_Field;
}

inline
void CRna_qual_Base::SetField(CRna_qual_Base::TField value)
{
    m_Field = value;
    m_set_State[0] |= 0xc;
}

inline
CRna_qual_Base::TField& CRna_qual_Base::SetField(void)
{
#ifdef _DEBUG
    if (!IsSetField()) {
        memset(&m_Field,UnassignedByte(),sizeof(m_Field));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Field;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_RNA_QUAL_BASE_HPP