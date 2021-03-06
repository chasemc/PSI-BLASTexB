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

/// @file Blast4_get_sequenc_request_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLAST_BLAST4_GET_SEQUENC_REQUEST_BASE_HPP
#define OBJECTS_BLAST_BLAST4_GET_SEQUENC_REQUEST_BASE_HPP

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
class CBlast4_database;
class CSeq_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Fetch sequence data from a BLAST database
class NCBI_BLAST_EXPORT CBlast4_get_sequences_request_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBlast4_get_sequences_request_Base(void);
    // destructor
    virtual ~CBlast4_get_sequences_request_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CBlast4_database TDatabase;
    typedef list< CRef< CSeq_id > > TSeq_ids;
    typedef bool TSkip_seq_data;
    typedef bool TTarget_only;

    // getters
    // setters

    /// Name of the BLAST database from which to retrieve the sequence data
    /// mandatory
    /// typedef CBlast4_database TDatabase
    ///  Check whether the Database data member has been assigned a value.
    bool IsSetDatabase(void) const;
    /// Check whether it is safe or not to call GetDatabase method.
    bool CanGetDatabase(void) const;
    void ResetDatabase(void);
    const TDatabase& GetDatabase(void) const;
    void SetDatabase(TDatabase& value);
    TDatabase& SetDatabase(void);

    /// Sequence identifiers for the sequence to get
    /// mandatory
    /// typedef list< CRef< CSeq_id > > TSeq_ids
    ///  Check whether the Seq_ids data member has been assigned a value.
    bool IsSetSeq_ids(void) const;
    /// Check whether it is safe or not to call GetSeq_ids method.
    bool CanGetSeq_ids(void) const;
    void ResetSeq_ids(void);
    const TSeq_ids& GetSeq_ids(void) const;
    TSeq_ids& SetSeq_ids(void);

    /// Determines whether the returned Bioseqs should contain the sequence data
    /// or not
    /// optional with default false
    /// typedef bool TSkip_seq_data
    ///  Check whether the Skip_seq_data data member has been assigned a value.
    bool IsSetSkip_seq_data(void) const;
    /// Check whether it is safe or not to call GetSkip_seq_data method.
    bool CanGetSkip_seq_data(void) const;
    void ResetSkip_seq_data(void);
    void SetDefaultSkip_seq_data(void);
    TSkip_seq_data GetSkip_seq_data(void) const;
    void SetSkip_seq_data(TSkip_seq_data value);
    TSkip_seq_data& SetSkip_seq_data(void);

    /// Determines whether or not the defline of the returned Bioseqs should 
    /// contain only the requested seq id.  This optional field only applies
    /// to non-redundant BLAST database
    /// optional
    /// typedef bool TTarget_only
    ///  Check whether the Target_only data member has been assigned a value.
    bool IsSetTarget_only(void) const;
    /// Check whether it is safe or not to call GetTarget_only method.
    bool CanGetTarget_only(void) const;
    void ResetTarget_only(void);
    TTarget_only GetTarget_only(void) const;
    void SetTarget_only(TTarget_only value);
    TTarget_only& SetTarget_only(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBlast4_get_sequences_request_Base(const CBlast4_get_sequences_request_Base&);
    CBlast4_get_sequences_request_Base& operator=(const CBlast4_get_sequences_request_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TDatabase > m_Database;
    list< CRef< CSeq_id > > m_Seq_ids;
    bool m_Skip_seq_data;
    bool m_Target_only;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBlast4_get_sequences_request_Base::IsSetDatabase(void) const
{
    return m_Database.NotEmpty();
}

inline
bool CBlast4_get_sequences_request_Base::CanGetDatabase(void) const
{
    return true;
}

inline
const CBlast4_get_sequences_request_Base::TDatabase& CBlast4_get_sequences_request_Base::GetDatabase(void) const
{
    if ( !m_Database ) {
        const_cast<CBlast4_get_sequences_request_Base*>(this)->ResetDatabase();
    }
    return (*m_Database);
}

inline
CBlast4_get_sequences_request_Base::TDatabase& CBlast4_get_sequences_request_Base::SetDatabase(void)
{
    if ( !m_Database ) {
        ResetDatabase();
    }
    return (*m_Database);
}

inline
bool CBlast4_get_sequences_request_Base::IsSetSeq_ids(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CBlast4_get_sequences_request_Base::CanGetSeq_ids(void) const
{
    return true;
}

inline
const CBlast4_get_sequences_request_Base::TSeq_ids& CBlast4_get_sequences_request_Base::GetSeq_ids(void) const
{
    return m_Seq_ids;
}

inline
CBlast4_get_sequences_request_Base::TSeq_ids& CBlast4_get_sequences_request_Base::SetSeq_ids(void)
{
    m_set_State[0] |= 0x4;
    return m_Seq_ids;
}

inline
bool CBlast4_get_sequences_request_Base::IsSetSkip_seq_data(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CBlast4_get_sequences_request_Base::CanGetSkip_seq_data(void) const
{
    return true;
}

inline
void CBlast4_get_sequences_request_Base::ResetSkip_seq_data(void)
{
    m_Skip_seq_data = false;
    m_set_State[0] &= ~0x30;
}

inline
void CBlast4_get_sequences_request_Base::SetDefaultSkip_seq_data(void)
{
    ResetSkip_seq_data();
}

inline
CBlast4_get_sequences_request_Base::TSkip_seq_data CBlast4_get_sequences_request_Base::GetSkip_seq_data(void) const
{
    return m_Skip_seq_data;
}

inline
void CBlast4_get_sequences_request_Base::SetSkip_seq_data(CBlast4_get_sequences_request_Base::TSkip_seq_data value)
{
    m_Skip_seq_data = value;
    m_set_State[0] |= 0x30;
}

inline
CBlast4_get_sequences_request_Base::TSkip_seq_data& CBlast4_get_sequences_request_Base::SetSkip_seq_data(void)
{
#ifdef _DEBUG
    if (!IsSetSkip_seq_data()) {
        memset(&m_Skip_seq_data,UnassignedByte(),sizeof(m_Skip_seq_data));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Skip_seq_data;
}

inline
bool CBlast4_get_sequences_request_Base::IsSetTarget_only(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CBlast4_get_sequences_request_Base::CanGetTarget_only(void) const
{
    return IsSetTarget_only();
}

inline
void CBlast4_get_sequences_request_Base::ResetTarget_only(void)
{
    m_Target_only = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CBlast4_get_sequences_request_Base::TTarget_only CBlast4_get_sequences_request_Base::GetTarget_only(void) const
{
    if (!CanGetTarget_only()) {
        ThrowUnassigned(3);
    }
    return m_Target_only;
}

inline
void CBlast4_get_sequences_request_Base::SetTarget_only(CBlast4_get_sequences_request_Base::TTarget_only value)
{
    m_Target_only = value;
    m_set_State[0] |= 0xc0;
}

inline
CBlast4_get_sequences_request_Base::TTarget_only& CBlast4_get_sequences_request_Base::SetTarget_only(void)
{
#ifdef _DEBUG
    if (!IsSetTarget_only()) {
        memset(&m_Target_only,UnassignedByte(),sizeof(m_Target_only));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Target_only;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST4_GET_SEQUENC_REQUEST_BASE_HPP
