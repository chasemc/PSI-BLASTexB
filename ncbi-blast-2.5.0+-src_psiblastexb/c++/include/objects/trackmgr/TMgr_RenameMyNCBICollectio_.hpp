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

/// @file TMgr_RenameMyNCBICollectio_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'trackmgr.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TRACKMGR_TMGR_RENAMEMYNCBICOLLECTIO_BASE_HPP
#define OBJECTS_TRACKMGR_TMGR_RENAMEMYNCBICOLLECTIO_BASE_HPP

// extra headers
#include <objects/trackmgr/trackmgr_export.h>

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>
#include <objects/trackmgr/TMgr_Status.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CTMgr_Message;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TRACKMGR_EXPORT CTMgr_RenameMyNCBICollectionRequest_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTMgr_RenameMyNCBICollectionRequest_Base(void);
    // destructor
    virtual ~CTMgr_RenameMyNCBICollectionRequest_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TCollection_id;
    typedef string TName;

    // getters
    // setters

    /// mandatory
    /// typedef string TCollection_id
    ///  Check whether the Collection_id data member has been assigned a value.
    bool IsSetCollection_id(void) const;
    /// Check whether it is safe or not to call GetCollection_id method.
    bool CanGetCollection_id(void) const;
    void ResetCollection_id(void);
    const TCollection_id& GetCollection_id(void) const;
    void SetCollection_id(const TCollection_id& value);
    TCollection_id& SetCollection_id(void);

    /// mandatory
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTMgr_RenameMyNCBICollectionRequest_Base(const CTMgr_RenameMyNCBICollectionRequest_Base&);
    CTMgr_RenameMyNCBICollectionRequest_Base& operator=(const CTMgr_RenameMyNCBICollectionRequest_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Collection_id;
    string m_Name;
};
/////////////////////////////////////////////////////////////////////////////
class NCBI_TRACKMGR_EXPORT CTMgr_RenameMyNCBICollectionReply_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTMgr_RenameMyNCBICollectionReply_Base(void);
    // destructor
    virtual ~CTMgr_RenameMyNCBICollectionReply_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< CRef< CTMgr_Message > > TMessages;
    typedef int TStatus;

    // getters
    // setters

    /// optional
    /// typedef list< CRef< CTMgr_Message > > TMessages
    ///  Check whether the Messages data member has been assigned a value.
    bool IsSetMessages(void) const;
    /// Check whether it is safe or not to call GetMessages method.
    bool CanGetMessages(void) const;
    void ResetMessages(void);
    const TMessages& GetMessages(void) const;
    TMessages& SetMessages(void);

    /// mandatory
    /// typedef int TStatus
    ///  Check whether the Status data member has been assigned a value.
    bool IsSetStatus(void) const;
    /// Check whether it is safe or not to call GetStatus method.
    bool CanGetStatus(void) const;
    void ResetStatus(void);
    TStatus GetStatus(void) const;
    void SetStatus(TStatus value);
    TStatus& SetStatus(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTMgr_RenameMyNCBICollectionReply_Base(const CTMgr_RenameMyNCBICollectionReply_Base&);
    CTMgr_RenameMyNCBICollectionReply_Base& operator=(const CTMgr_RenameMyNCBICollectionReply_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CTMgr_Message > > m_Messages;
    int m_Status;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTMgr_RenameMyNCBICollectionRequest_Base::IsSetCollection_id(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTMgr_RenameMyNCBICollectionRequest_Base::CanGetCollection_id(void) const
{
    return IsSetCollection_id();
}

inline
const CTMgr_RenameMyNCBICollectionRequest_Base::TCollection_id& CTMgr_RenameMyNCBICollectionRequest_Base::GetCollection_id(void) const
{
    if (!CanGetCollection_id()) {
        ThrowUnassigned(0);
    }
    return m_Collection_id;
}

inline
void CTMgr_RenameMyNCBICollectionRequest_Base::SetCollection_id(const CTMgr_RenameMyNCBICollectionRequest_Base::TCollection_id& value)
{
    m_Collection_id = value;
    m_set_State[0] |= 0x3;
}

inline
CTMgr_RenameMyNCBICollectionRequest_Base::TCollection_id& CTMgr_RenameMyNCBICollectionRequest_Base::SetCollection_id(void)
{
#ifdef _DEBUG
    if (!IsSetCollection_id()) {
        m_Collection_id = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Collection_id;
}

inline
bool CTMgr_RenameMyNCBICollectionRequest_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTMgr_RenameMyNCBICollectionRequest_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CTMgr_RenameMyNCBICollectionRequest_Base::TName& CTMgr_RenameMyNCBICollectionRequest_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(1);
    }
    return m_Name;
}

inline
void CTMgr_RenameMyNCBICollectionRequest_Base::SetName(const CTMgr_RenameMyNCBICollectionRequest_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0xc;
}

inline
CTMgr_RenameMyNCBICollectionRequest_Base::TName& CTMgr_RenameMyNCBICollectionRequest_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Name;
}

inline
bool CTMgr_RenameMyNCBICollectionReply_Base::IsSetMessages(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTMgr_RenameMyNCBICollectionReply_Base::CanGetMessages(void) const
{
    return true;
}

inline
const CTMgr_RenameMyNCBICollectionReply_Base::TMessages& CTMgr_RenameMyNCBICollectionReply_Base::GetMessages(void) const
{
    return m_Messages;
}

inline
CTMgr_RenameMyNCBICollectionReply_Base::TMessages& CTMgr_RenameMyNCBICollectionReply_Base::SetMessages(void)
{
    m_set_State[0] |= 0x1;
    return m_Messages;
}

inline
bool CTMgr_RenameMyNCBICollectionReply_Base::IsSetStatus(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTMgr_RenameMyNCBICollectionReply_Base::CanGetStatus(void) const
{
    return IsSetStatus();
}

inline
void CTMgr_RenameMyNCBICollectionReply_Base::ResetStatus(void)
{
    m_Status = (int)(0);
    m_set_State[0] &= ~0xc;
}

inline
CTMgr_RenameMyNCBICollectionReply_Base::TStatus CTMgr_RenameMyNCBICollectionReply_Base::GetStatus(void) const
{
    if (!CanGetStatus()) {
        ThrowUnassigned(1);
    }
    return m_Status;
}

inline
void CTMgr_RenameMyNCBICollectionReply_Base::SetStatus(CTMgr_RenameMyNCBICollectionReply_Base::TStatus value)
{
    m_Status = value;
    m_set_State[0] |= 0xc;
}

inline
CTMgr_RenameMyNCBICollectionReply_Base::TStatus& CTMgr_RenameMyNCBICollectionReply_Base::SetStatus(void)
{
#ifdef _DEBUG
    if (!IsSetStatus()) {
        memset(&m_Status,UnassignedByte(),sizeof(m_Status));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Status;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TRACKMGR_TMGR_RENAMEMYNCBICOLLECTIO_BASE_HPP
