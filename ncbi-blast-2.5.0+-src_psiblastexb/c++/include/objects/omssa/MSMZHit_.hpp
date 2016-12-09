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

/// @file MSMZHit_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'omssa.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_OMSSA_MSMZHIT_BASE_HPP
#define OBJECTS_OMSSA_MSMZHIT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/omssa/MSIonType.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CMSIon;
class CMSIonAnnot;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// defines a particular ion
class NCBI_OMSSA_EXPORT CMSMZHit_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMSMZHit_Base(void);
    // destructor
    virtual ~CMSMZHit_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TIon;
    typedef int TCharge;
    typedef int TNumber;
    typedef int TMz;
    typedef int TIndex;
    typedef CMSIon TMoreion;
    typedef CMSIonAnnot TAnnotation;

    // getters
    // setters

    /// ion type, e.g. b
    /// mandatory
    /// typedef int TIon
    ///  Check whether the Ion data member has been assigned a value.
    bool IsSetIon(void) const;
    /// Check whether it is safe or not to call GetIon method.
    bool CanGetIon(void) const;
    void ResetIon(void);
    TIon GetIon(void) const;
    void SetIon(TIon value);
    TIon& SetIon(void);

    /// ion charge
    /// mandatory
    /// typedef int TCharge
    ///  Check whether the Charge data member has been assigned a value.
    bool IsSetCharge(void) const;
    /// Check whether it is safe or not to call GetCharge method.
    bool CanGetCharge(void) const;
    void ResetCharge(void);
    TCharge GetCharge(void) const;
    void SetCharge(TCharge value);
    TCharge& SetCharge(void);

    /// the sequential number of the ion
    /// mandatory
    /// typedef int TNumber
    ///  Check whether the Number data member has been assigned a value.
    bool IsSetNumber(void) const;
    /// Check whether it is safe or not to call GetNumber method.
    bool CanGetNumber(void) const;
    void ResetNumber(void);
    TNumber GetNumber(void) const;
    void SetNumber(TNumber value);
    TNumber& SetNumber(void);

    /// scaled m/z value in Da
    /// mandatory
    /// typedef int TMz
    ///  Check whether the Mz data member has been assigned a value.
    bool IsSetMz(void) const;
    /// Check whether it is safe or not to call GetMz method.
    bool CanGetMz(void) const;
    void ResetMz(void);
    TMz GetMz(void) const;
    void SetMz(TMz value);
    TMz& SetMz(void);

    /// the index of the peak in the original spectrum
    /// optional
    /// typedef int TIndex
    ///  Check whether the Index data member has been assigned a value.
    bool IsSetIndex(void) const;
    /// Check whether it is safe or not to call GetIndex method.
    bool CanGetIndex(void) const;
    void ResetIndex(void);
    TIndex GetIndex(void) const;
    void SetIndex(TIndex value);
    TIndex& SetIndex(void);

    /// more information about the ion type
    /// optional
    /// typedef CMSIon TMoreion
    ///  Check whether the Moreion data member has been assigned a value.
    bool IsSetMoreion(void) const;
    /// Check whether it is safe or not to call GetMoreion method.
    bool CanGetMoreion(void) const;
    void ResetMoreion(void);
    const TMoreion& GetMoreion(void) const;
    void SetMoreion(TMoreion& value);
    TMoreion& SetMoreion(void);

    /// annotations on the ion
    /// optional
    /// typedef CMSIonAnnot TAnnotation
    ///  Check whether the Annotation data member has been assigned a value.
    bool IsSetAnnotation(void) const;
    /// Check whether it is safe or not to call GetAnnotation method.
    bool CanGetAnnotation(void) const;
    void ResetAnnotation(void);
    const TAnnotation& GetAnnotation(void) const;
    void SetAnnotation(TAnnotation& value);
    TAnnotation& SetAnnotation(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMSMZHit_Base(const CMSMZHit_Base&);
    CMSMZHit_Base& operator=(const CMSMZHit_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Ion;
    int m_Charge;
    int m_Number;
    int m_Mz;
    int m_Index;
    CRef< TMoreion > m_Moreion;
    CRef< TAnnotation > m_Annotation;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMSMZHit_Base::IsSetIon(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMSMZHit_Base::CanGetIon(void) const
{
    return IsSetIon();
}

inline
void CMSMZHit_Base::ResetIon(void)
{
    m_Ion = (int)(0);
    m_set_State[0] &= ~0x3;
}

inline
CMSMZHit_Base::TIon CMSMZHit_Base::GetIon(void) const
{
    if (!CanGetIon()) {
        ThrowUnassigned(0);
    }
    return m_Ion;
}

inline
void CMSMZHit_Base::SetIon(CMSMZHit_Base::TIon value)
{
    m_Ion = value;
    m_set_State[0] |= 0x3;
}

inline
CMSMZHit_Base::TIon& CMSMZHit_Base::SetIon(void)
{
#ifdef _DEBUG
    if (!IsSetIon()) {
        memset(&m_Ion,UnassignedByte(),sizeof(m_Ion));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Ion;
}

inline
bool CMSMZHit_Base::IsSetCharge(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMSMZHit_Base::CanGetCharge(void) const
{
    return IsSetCharge();
}

inline
void CMSMZHit_Base::ResetCharge(void)
{
    m_Charge = 0;
    m_set_State[0] &= ~0xc;
}

inline
CMSMZHit_Base::TCharge CMSMZHit_Base::GetCharge(void) const
{
    if (!CanGetCharge()) {
        ThrowUnassigned(1);
    }
    return m_Charge;
}

inline
void CMSMZHit_Base::SetCharge(CMSMZHit_Base::TCharge value)
{
    m_Charge = value;
    m_set_State[0] |= 0xc;
}

inline
CMSMZHit_Base::TCharge& CMSMZHit_Base::SetCharge(void)
{
#ifdef _DEBUG
    if (!IsSetCharge()) {
        memset(&m_Charge,UnassignedByte(),sizeof(m_Charge));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Charge;
}

inline
bool CMSMZHit_Base::IsSetNumber(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMSMZHit_Base::CanGetNumber(void) const
{
    return IsSetNumber();
}

inline
void CMSMZHit_Base::ResetNumber(void)
{
    m_Number = 0;
    m_set_State[0] &= ~0x30;
}

inline
CMSMZHit_Base::TNumber CMSMZHit_Base::GetNumber(void) const
{
    if (!CanGetNumber()) {
        ThrowUnassigned(2);
    }
    return m_Number;
}

inline
void CMSMZHit_Base::SetNumber(CMSMZHit_Base::TNumber value)
{
    m_Number = value;
    m_set_State[0] |= 0x30;
}

inline
CMSMZHit_Base::TNumber& CMSMZHit_Base::SetNumber(void)
{
#ifdef _DEBUG
    if (!IsSetNumber()) {
        memset(&m_Number,UnassignedByte(),sizeof(m_Number));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Number;
}

inline
bool CMSMZHit_Base::IsSetMz(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CMSMZHit_Base::CanGetMz(void) const
{
    return IsSetMz();
}

inline
void CMSMZHit_Base::ResetMz(void)
{
    m_Mz = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CMSMZHit_Base::TMz CMSMZHit_Base::GetMz(void) const
{
    if (!CanGetMz()) {
        ThrowUnassigned(3);
    }
    return m_Mz;
}

inline
void CMSMZHit_Base::SetMz(CMSMZHit_Base::TMz value)
{
    m_Mz = value;
    m_set_State[0] |= 0xc0;
}

inline
CMSMZHit_Base::TMz& CMSMZHit_Base::SetMz(void)
{
#ifdef _DEBUG
    if (!IsSetMz()) {
        memset(&m_Mz,UnassignedByte(),sizeof(m_Mz));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Mz;
}

inline
bool CMSMZHit_Base::IsSetIndex(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CMSMZHit_Base::CanGetIndex(void) const
{
    return IsSetIndex();
}

inline
void CMSMZHit_Base::ResetIndex(void)
{
    m_Index = 0;
    m_set_State[0] &= ~0x300;
}

inline
CMSMZHit_Base::TIndex CMSMZHit_Base::GetIndex(void) const
{
    if (!CanGetIndex()) {
        ThrowUnassigned(4);
    }
    return m_Index;
}

inline
void CMSMZHit_Base::SetIndex(CMSMZHit_Base::TIndex value)
{
    m_Index = value;
    m_set_State[0] |= 0x300;
}

inline
CMSMZHit_Base::TIndex& CMSMZHit_Base::SetIndex(void)
{
#ifdef _DEBUG
    if (!IsSetIndex()) {
        memset(&m_Index,UnassignedByte(),sizeof(m_Index));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Index;
}

inline
bool CMSMZHit_Base::IsSetMoreion(void) const
{
    return m_Moreion.NotEmpty();
}

inline
bool CMSMZHit_Base::CanGetMoreion(void) const
{
    return IsSetMoreion();
}

inline
const CMSMZHit_Base::TMoreion& CMSMZHit_Base::GetMoreion(void) const
{
    if (!CanGetMoreion()) {
        ThrowUnassigned(5);
    }
    return (*m_Moreion);
}

inline
bool CMSMZHit_Base::IsSetAnnotation(void) const
{
    return m_Annotation.NotEmpty();
}

inline
bool CMSMZHit_Base::CanGetAnnotation(void) const
{
    return IsSetAnnotation();
}

inline
const CMSMZHit_Base::TAnnotation& CMSMZHit_Base::GetAnnotation(void) const
{
    if (!CanGetAnnotation()) {
        ThrowUnassigned(6);
    }
    return (*m_Annotation);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_OMSSA_MSMZHIT_BASE_HPP
