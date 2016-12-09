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

/// @file INSDInterval_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'insdseq.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_INSDSEQ_INSDINTERVAL_BASE_HPP
#define OBJECTS_INSDSEQ_INSDINTERVAL_BASE_HPP

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
/// INSDInterval_iscomp is a boolean indicating whether
/// an INSDInterval_from / INSDInterval_to location
/// represents a location on the complement strand.
/// When INSDInterval_iscomp is TRUE, it essentially
/// confirms that a 'from' value which is greater than
/// a 'to' value is intentional, because the location
/// is on the opposite strand of the presented sequence.
/// INSDInterval_interbp is a boolean indicating whether
/// a feature (such as a restriction site) is located
/// between two adjacent basepairs. When INSDInterval_interbp
/// is TRUE, the 'from' and 'to' values will differ by
/// exactly one base for linear molecules. For circular 
/// molecules, if the inter-basepair position falls between
/// the last and the first base, then 'from' will be the
/// final base (equal to the length of the sequence), and
/// 'to' will have a value of 1.
class NCBI_INSDSEQ_EXPORT CINSDInterval_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CINSDInterval_Base(void);
    // destructor
    virtual ~CINSDInterval_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef TSeqPos TFrom;
    typedef TSeqPos TTo;
    typedef TSeqPos TPoint;
    typedef bool TIscomp;
    typedef bool TInterbp;
    typedef string TAccession;

    // getters
    // setters

    /// optional
    /// typedef TSeqPos TFrom
    ///  Check whether the From data member has been assigned a value.
    bool IsSetFrom(void) const;
    /// Check whether it is safe or not to call GetFrom method.
    bool CanGetFrom(void) const;
    void ResetFrom(void);
    TFrom GetFrom(void) const;
    void SetFrom(TFrom value);
    TFrom& SetFrom(void);

    /// optional
    /// typedef TSeqPos TTo
    ///  Check whether the To data member has been assigned a value.
    bool IsSetTo(void) const;
    /// Check whether it is safe or not to call GetTo method.
    bool CanGetTo(void) const;
    void ResetTo(void);
    TTo GetTo(void) const;
    void SetTo(TTo value);
    TTo& SetTo(void);

    /// optional
    /// typedef TSeqPos TPoint
    ///  Check whether the Point data member has been assigned a value.
    bool IsSetPoint(void) const;
    /// Check whether it is safe or not to call GetPoint method.
    bool CanGetPoint(void) const;
    void ResetPoint(void);
    TPoint GetPoint(void) const;
    void SetPoint(TPoint value);
    TPoint& SetPoint(void);

    /// optional
    /// typedef bool TIscomp
    ///  Check whether the Iscomp data member has been assigned a value.
    bool IsSetIscomp(void) const;
    /// Check whether it is safe or not to call GetIscomp method.
    bool CanGetIscomp(void) const;
    void ResetIscomp(void);
    TIscomp GetIscomp(void) const;
    void SetIscomp(TIscomp value);
    TIscomp& SetIscomp(void);

    /// optional
    /// typedef bool TInterbp
    ///  Check whether the Interbp data member has been assigned a value.
    bool IsSetInterbp(void) const;
    /// Check whether it is safe or not to call GetInterbp method.
    bool CanGetInterbp(void) const;
    void ResetInterbp(void);
    TInterbp GetInterbp(void) const;
    void SetInterbp(TInterbp value);
    TInterbp& SetInterbp(void);

    /// mandatory
    /// typedef string TAccession
    ///  Check whether the Accession data member has been assigned a value.
    bool IsSetAccession(void) const;
    /// Check whether it is safe or not to call GetAccession method.
    bool CanGetAccession(void) const;
    void ResetAccession(void);
    const TAccession& GetAccession(void) const;
    void SetAccession(const TAccession& value);
    TAccession& SetAccession(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CINSDInterval_Base(const CINSDInterval_Base&);
    CINSDInterval_Base& operator=(const CINSDInterval_Base&);

    // data
    Uint4 m_set_State[1];
    TSeqPos m_From;
    TSeqPos m_To;
    TSeqPos m_Point;
    bool m_Iscomp;
    bool m_Interbp;
    string m_Accession;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CINSDInterval_Base::IsSetFrom(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CINSDInterval_Base::CanGetFrom(void) const
{
    return IsSetFrom();
}

inline
void CINSDInterval_Base::ResetFrom(void)
{
    m_From = 0;
    m_set_State[0] &= ~0x3;
}

inline
CINSDInterval_Base::TFrom CINSDInterval_Base::GetFrom(void) const
{
    if (!CanGetFrom()) {
        ThrowUnassigned(0);
    }
    return m_From;
}

inline
void CINSDInterval_Base::SetFrom(CINSDInterval_Base::TFrom value)
{
    m_From = value;
    m_set_State[0] |= 0x3;
}

inline
CINSDInterval_Base::TFrom& CINSDInterval_Base::SetFrom(void)
{
#ifdef _DEBUG
    if (!IsSetFrom()) {
        memset(&m_From,UnassignedByte(),sizeof(m_From));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_From;
}

inline
bool CINSDInterval_Base::IsSetTo(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CINSDInterval_Base::CanGetTo(void) const
{
    return IsSetTo();
}

inline
void CINSDInterval_Base::ResetTo(void)
{
    m_To = 0;
    m_set_State[0] &= ~0xc;
}

inline
CINSDInterval_Base::TTo CINSDInterval_Base::GetTo(void) const
{
    if (!CanGetTo()) {
        ThrowUnassigned(1);
    }
    return m_To;
}

inline
void CINSDInterval_Base::SetTo(CINSDInterval_Base::TTo value)
{
    m_To = value;
    m_set_State[0] |= 0xc;
}

inline
CINSDInterval_Base::TTo& CINSDInterval_Base::SetTo(void)
{
#ifdef _DEBUG
    if (!IsSetTo()) {
        memset(&m_To,UnassignedByte(),sizeof(m_To));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_To;
}

inline
bool CINSDInterval_Base::IsSetPoint(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CINSDInterval_Base::CanGetPoint(void) const
{
    return IsSetPoint();
}

inline
void CINSDInterval_Base::ResetPoint(void)
{
    m_Point = 0;
    m_set_State[0] &= ~0x30;
}

inline
CINSDInterval_Base::TPoint CINSDInterval_Base::GetPoint(void) const
{
    if (!CanGetPoint()) {
        ThrowUnassigned(2);
    }
    return m_Point;
}

inline
void CINSDInterval_Base::SetPoint(CINSDInterval_Base::TPoint value)
{
    m_Point = value;
    m_set_State[0] |= 0x30;
}

inline
CINSDInterval_Base::TPoint& CINSDInterval_Base::SetPoint(void)
{
#ifdef _DEBUG
    if (!IsSetPoint()) {
        memset(&m_Point,UnassignedByte(),sizeof(m_Point));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Point;
}

inline
bool CINSDInterval_Base::IsSetIscomp(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CINSDInterval_Base::CanGetIscomp(void) const
{
    return IsSetIscomp();
}

inline
void CINSDInterval_Base::ResetIscomp(void)
{
    m_Iscomp = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CINSDInterval_Base::TIscomp CINSDInterval_Base::GetIscomp(void) const
{
    if (!CanGetIscomp()) {
        ThrowUnassigned(3);
    }
    return m_Iscomp;
}

inline
void CINSDInterval_Base::SetIscomp(CINSDInterval_Base::TIscomp value)
{
    m_Iscomp = value;
    m_set_State[0] |= 0xc0;
}

inline
CINSDInterval_Base::TIscomp& CINSDInterval_Base::SetIscomp(void)
{
#ifdef _DEBUG
    if (!IsSetIscomp()) {
        memset(&m_Iscomp,UnassignedByte(),sizeof(m_Iscomp));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Iscomp;
}

inline
bool CINSDInterval_Base::IsSetInterbp(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CINSDInterval_Base::CanGetInterbp(void) const
{
    return IsSetInterbp();
}

inline
void CINSDInterval_Base::ResetInterbp(void)
{
    m_Interbp = 0;
    m_set_State[0] &= ~0x300;
}

inline
CINSDInterval_Base::TInterbp CINSDInterval_Base::GetInterbp(void) const
{
    if (!CanGetInterbp()) {
        ThrowUnassigned(4);
    }
    return m_Interbp;
}

inline
void CINSDInterval_Base::SetInterbp(CINSDInterval_Base::TInterbp value)
{
    m_Interbp = value;
    m_set_State[0] |= 0x300;
}

inline
CINSDInterval_Base::TInterbp& CINSDInterval_Base::SetInterbp(void)
{
#ifdef _DEBUG
    if (!IsSetInterbp()) {
        memset(&m_Interbp,UnassignedByte(),sizeof(m_Interbp));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Interbp;
}

inline
bool CINSDInterval_Base::IsSetAccession(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CINSDInterval_Base::CanGetAccession(void) const
{
    return IsSetAccession();
}

inline
const CINSDInterval_Base::TAccession& CINSDInterval_Base::GetAccession(void) const
{
    if (!CanGetAccession()) {
        ThrowUnassigned(5);
    }
    return m_Accession;
}

inline
void CINSDInterval_Base::SetAccession(const CINSDInterval_Base::TAccession& value)
{
    m_Accession = value;
    m_set_State[0] |= 0xc00;
}

inline
CINSDInterval_Base::TAccession& CINSDInterval_Base::SetAccession(void)
{
#ifdef _DEBUG
    if (!IsSetAccession()) {
        m_Accession = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Accession;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_INSDSEQ_INSDINTERVAL_BASE_HPP
