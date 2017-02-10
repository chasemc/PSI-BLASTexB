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

/// @file ID2S_Split_Info_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqsplit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQSPLIT_ID2S_SPLIT_INFO_BASE_HPP
#define OBJECTS_SEQSPLIT_ID2S_SPLIT_INFO_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CID2S_Bioseqs_Info;
class CID2S_Chunk_Info;
class CSeq_entry;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
/// Blob split info types
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
/// Chunks split description
class NCBI_ID2_EXPORT CID2S_Split_Info_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2S_Split_Info_Base(void);
    // destructor
    virtual ~CID2S_Split_Info_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< CRef< CID2S_Bioseqs_Info > > TBioseqs_info;
    typedef list< CRef< CID2S_Chunk_Info > > TChunks;
    typedef CSeq_entry TSkeleton;

    // getters
    // setters

    /// optional
    /// typedef list< CRef< CID2S_Bioseqs_Info > > TBioseqs_info
    ///  Check whether the Bioseqs_info data member has been assigned a value.
    bool IsSetBioseqs_info(void) const;
    /// Check whether it is safe or not to call GetBioseqs_info method.
    bool CanGetBioseqs_info(void) const;
    void ResetBioseqs_info(void);
    const TBioseqs_info& GetBioseqs_info(void) const;
    TBioseqs_info& SetBioseqs_info(void);

    /// mandatory
    /// typedef list< CRef< CID2S_Chunk_Info > > TChunks
    ///  Check whether the Chunks data member has been assigned a value.
    bool IsSetChunks(void) const;
    /// Check whether it is safe or not to call GetChunks method.
    bool CanGetChunks(void) const;
    void ResetChunks(void);
    const TChunks& GetChunks(void) const;
    TChunks& SetChunks(void);

    /// optional
    /// typedef CSeq_entry TSkeleton
    ///  Check whether the Skeleton data member has been assigned a value.
    bool IsSetSkeleton(void) const;
    /// Check whether it is safe or not to call GetSkeleton method.
    bool CanGetSkeleton(void) const;
    void ResetSkeleton(void);
    const TSkeleton& GetSkeleton(void) const;
    void SetSkeleton(TSkeleton& value);
    TSkeleton& SetSkeleton(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2S_Split_Info_Base(const CID2S_Split_Info_Base&);
    CID2S_Split_Info_Base& operator=(const CID2S_Split_Info_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CID2S_Bioseqs_Info > > m_Bioseqs_info;
    list< CRef< CID2S_Chunk_Info > > m_Chunks;
    CRef< TSkeleton > m_Skeleton;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2S_Split_Info_Base::IsSetBioseqs_info(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CID2S_Split_Info_Base::CanGetBioseqs_info(void) const
{
    return true;
}

inline
const CID2S_Split_Info_Base::TBioseqs_info& CID2S_Split_Info_Base::GetBioseqs_info(void) const
{
    return m_Bioseqs_info;
}

inline
CID2S_Split_Info_Base::TBioseqs_info& CID2S_Split_Info_Base::SetBioseqs_info(void)
{
    m_set_State[0] |= 0x1;
    return m_Bioseqs_info;
}

inline
bool CID2S_Split_Info_Base::IsSetChunks(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CID2S_Split_Info_Base::CanGetChunks(void) const
{
    return true;
}

inline
const CID2S_Split_Info_Base::TChunks& CID2S_Split_Info_Base::GetChunks(void) const
{
    return m_Chunks;
}

inline
CID2S_Split_Info_Base::TChunks& CID2S_Split_Info_Base::SetChunks(void)
{
    m_set_State[0] |= 0x4;
    return m_Chunks;
}

inline
bool CID2S_Split_Info_Base::IsSetSkeleton(void) const
{
    return m_Skeleton.NotEmpty();
}

inline
bool CID2S_Split_Info_Base::CanGetSkeleton(void) const
{
    return IsSetSkeleton();
}

inline
const CID2S_Split_Info_Base::TSkeleton& CID2S_Split_Info_Base::GetSkeleton(void) const
{
    if (!CanGetSkeleton()) {
        ThrowUnassigned(2);
    }
    return (*m_Skeleton);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQSPLIT_ID2S_SPLIT_INFO_BASE_HPP