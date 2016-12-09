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

/// @file TMgr_RemoveUserTrackReply_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'trackmgr.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TRACKMGR_TMGR_REMOVEUSERTRACKREPLY_BASE_HPP
#define OBJECTS_TRACKMGR_TMGR_REMOVEUSERTRACKREPLY_BASE_HPP

// extra headers
#include <objects/trackmgr/trackmgr_export.h>

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
class CTMgr_Message;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TRACKMGR_EXPORT CTMgr_RemoveUserTrackReply_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTMgr_RemoveUserTrackReply_Base(void);
    // destructor
    virtual ~CTMgr_RemoveUserTrackReply_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< CRef< CTMgr_Message > > TMessages;

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

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTMgr_RemoveUserTrackReply_Base(const CTMgr_RemoveUserTrackReply_Base&);
    CTMgr_RemoveUserTrackReply_Base& operator=(const CTMgr_RemoveUserTrackReply_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CTMgr_Message > > m_Messages;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTMgr_RemoveUserTrackReply_Base::IsSetMessages(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTMgr_RemoveUserTrackReply_Base::CanGetMessages(void) const
{
    return true;
}

inline
const CTMgr_RemoveUserTrackReply_Base::TMessages& CTMgr_RemoveUserTrackReply_Base::GetMessages(void) const
{
    return m_Messages;
}

inline
CTMgr_RemoveUserTrackReply_Base::TMessages& CTMgr_RemoveUserTrackReply_Base::SetMessages(void)
{
    m_set_State[0] |= 0x1;
    return m_Messages;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TRACKMGR_TMGR_REMOVEUSERTRACKREPLY_BASE_HPP
