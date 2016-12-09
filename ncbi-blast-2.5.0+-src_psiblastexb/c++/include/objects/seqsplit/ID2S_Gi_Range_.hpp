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

/// @file ID2S_Gi_Range_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqsplit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQSPLIT_ID2S_GI_RANGE_BASE_HPP
#define OBJECTS_SEQSPLIT_ID2S_GI_RANGE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_ID2_EXPORT CID2S_Gi_Range_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2S_Gi_Range_Base(void);
    // destructor
    virtual ~CID2S_Gi_Range_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef NCBI_NS_NCBI::TGi TStart;
    typedef int TCount;

    // getters
    // setters

    /// start gi in this gi range
    /// mandatory
    /// typedef NCBI_NS_NCBI::TGi TStart
    ///  Check whether the Start data member has been assigned a value.
    bool IsSetStart(void) const;
    /// Check whether it is safe or not to call GetStart method.
    bool CanGetStart(void) const;
    void ResetStart(void);
    TStart GetStart(void) const;
    void SetStart(TStart value);
    TStart& SetStart(void);

    /// number of sequential gis
    /// optional with default 1
    /// typedef int TCount
    ///  Check whether the Count data member has been assigned a value.
    bool IsSetCount(void) const;
    /// Check whether it is safe or not to call GetCount method.
    bool CanGetCount(void) const;
    void ResetCount(void);
    void SetDefaultCount(void);
    TCount GetCount(void) const;
    void SetCount(TCount value);
    TCount& SetCount(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2S_Gi_Range_Base(const CID2S_Gi_Range_Base&);
    CID2S_Gi_Range_Base& operator=(const CID2S_Gi_Range_Base&);

    // data
    Uint4 m_set_State[1];
    ncbi::TIntId m_Start;
    int m_Count;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2S_Gi_Range_Base::IsSetStart(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CID2S_Gi_Range_Base::CanGetStart(void) const
{
    return IsSetStart();
}

inline
void CID2S_Gi_Range_Base::ResetStart(void)
{
    m_Start = 0;
    m_set_State[0] &= ~0x3;
}

inline
CID2S_Gi_Range_Base::TStart CID2S_Gi_Range_Base::GetStart(void) const
{
    if (!CanGetStart()) {
        ThrowUnassigned(0);
    }
    return reinterpret_cast<const TStart&>(m_Start);
}

inline
void CID2S_Gi_Range_Base::SetStart(CID2S_Gi_Range_Base::TStart value)
{
    reinterpret_cast<TStart&>(m_Start) = value;
    m_set_State[0] |= 0x3;
}

inline
CID2S_Gi_Range_Base::TStart& CID2S_Gi_Range_Base::SetStart(void)
{
#ifdef _DEBUG
    if (!IsSetStart()) {
        memset(&m_Start,UnassignedByte(),sizeof(m_Start));
    }
#endif
    m_set_State[0] |= 0x1;
    return reinterpret_cast<TStart&>(m_Start);
}

inline
bool CID2S_Gi_Range_Base::IsSetCount(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CID2S_Gi_Range_Base::CanGetCount(void) const
{
    return true;
}

inline
void CID2S_Gi_Range_Base::ResetCount(void)
{
    m_Count = 1;
    m_set_State[0] &= ~0xc;
}

inline
void CID2S_Gi_Range_Base::SetDefaultCount(void)
{
    ResetCount();
}

inline
CID2S_Gi_Range_Base::TCount CID2S_Gi_Range_Base::GetCount(void) const
{
    return m_Count;
}

inline
void CID2S_Gi_Range_Base::SetCount(CID2S_Gi_Range_Base::TCount value)
{
    m_Count = value;
    m_set_State[0] |= 0xc;
}

inline
CID2S_Gi_Range_Base::TCount& CID2S_Gi_Range_Base::SetCount(void)
{
#ifdef _DEBUG
    if (!IsSetCount()) {
        memset(&m_Count,UnassignedByte(),sizeof(m_Count));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Count;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQSPLIT_ID2S_GI_RANGE_BASE_HPP
