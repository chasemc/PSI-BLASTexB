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

/// @file Num_real_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seq.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQ_NUM_REAL_BASE_HPP
#define OBJECTS_SEQ_NUM_REAL_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// mapping to floating point system
class NCBI_SEQ_EXPORT CNum_real_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CNum_real_Base(void);
    // destructor
    virtual ~CNum_real_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef double TA;
    typedef double TB;
    typedef string TUnits;

    // getters
    // setters

    /// from an integer system used by Bioseq
    /// mandatory
    /// typedef double TA
    ///  Check whether the A data member has been assigned a value.
    bool IsSetA(void) const;
    /// Check whether it is safe or not to call GetA method.
    bool CanGetA(void) const;
    void ResetA(void);
    TA GetA(void) const;
    void SetA(TA value);
    TA& SetA(void);

    /// position = (a * int_position) + b
    /// mandatory
    /// typedef double TB
    ///  Check whether the B data member has been assigned a value.
    bool IsSetB(void) const;
    /// Check whether it is safe or not to call GetB method.
    bool CanGetB(void) const;
    void ResetB(void);
    TB GetB(void) const;
    void SetB(TB value);
    TB& SetB(void);

    /// optional
    /// typedef string TUnits
    ///  Check whether the Units data member has been assigned a value.
    bool IsSetUnits(void) const;
    /// Check whether it is safe or not to call GetUnits method.
    bool CanGetUnits(void) const;
    void ResetUnits(void);
    const TUnits& GetUnits(void) const;
    void SetUnits(const TUnits& value);
    TUnits& SetUnits(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CNum_real_Base(const CNum_real_Base&);
    CNum_real_Base& operator=(const CNum_real_Base&);

    // data
    Uint4 m_set_State[1];
    double m_A;
    double m_B;
    string m_Units;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CNum_real_Base::IsSetA(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CNum_real_Base::CanGetA(void) const
{
    return IsSetA();
}

inline
void CNum_real_Base::ResetA(void)
{
    m_A = 0;
    m_set_State[0] &= ~0x3;
}

inline
CNum_real_Base::TA CNum_real_Base::GetA(void) const
{
    if (!CanGetA()) {
        ThrowUnassigned(0);
    }
    return m_A;
}

inline
void CNum_real_Base::SetA(CNum_real_Base::TA value)
{
    m_A = value;
    m_set_State[0] |= 0x3;
}

inline
CNum_real_Base::TA& CNum_real_Base::SetA(void)
{
#ifdef _DEBUG
    if (!IsSetA()) {
        memset(&m_A,UnassignedByte(),sizeof(m_A));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_A;
}

inline
bool CNum_real_Base::IsSetB(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CNum_real_Base::CanGetB(void) const
{
    return IsSetB();
}

inline
void CNum_real_Base::ResetB(void)
{
    m_B = 0;
    m_set_State[0] &= ~0xc;
}

inline
CNum_real_Base::TB CNum_real_Base::GetB(void) const
{
    if (!CanGetB()) {
        ThrowUnassigned(1);
    }
    return m_B;
}

inline
void CNum_real_Base::SetB(CNum_real_Base::TB value)
{
    m_B = value;
    m_set_State[0] |= 0xc;
}

inline
CNum_real_Base::TB& CNum_real_Base::SetB(void)
{
#ifdef _DEBUG
    if (!IsSetB()) {
        memset(&m_B,UnassignedByte(),sizeof(m_B));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_B;
}

inline
bool CNum_real_Base::IsSetUnits(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CNum_real_Base::CanGetUnits(void) const
{
    return IsSetUnits();
}

inline
const CNum_real_Base::TUnits& CNum_real_Base::GetUnits(void) const
{
    if (!CanGetUnits()) {
        ThrowUnassigned(2);
    }
    return m_Units;
}

inline
void CNum_real_Base::SetUnits(const CNum_real_Base::TUnits& value)
{
    m_Units = value;
    m_set_State[0] |= 0x30;
}

inline
CNum_real_Base::TUnits& CNum_real_Base::SetUnits(void)
{
#ifdef _DEBUG
    if (!IsSetUnits()) {
        m_Units = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Units;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQ_NUM_REAL_BASE_HPP
