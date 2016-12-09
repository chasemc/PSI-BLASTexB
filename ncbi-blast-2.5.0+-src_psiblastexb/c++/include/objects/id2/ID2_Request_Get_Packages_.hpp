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

/// @file ID2_Request_Get_Packages_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'id2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ID2_ID2_REQUEST_GET_PACKAGES_BASE_HPP
#define OBJECTS_ID2_ID2_REQUEST_GET_PACKAGES_BASE_HPP

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
/// Request for set of params packages know by server.
/// Packages can be used to abbreviate parameters of request.
class NCBI_ID2_EXPORT CID2_Request_Get_Packages_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2_Request_Get_Packages_Base(void);
    // destructor
    virtual ~CID2_Request_Get_Packages_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< string > TNames;

    // getters
    // setters

    /// return known packages from this list
    /// if unset - return all known packages
    /// optional
    /// typedef list< string > TNames
    ///  Check whether the Names data member has been assigned a value.
    bool IsSetNames(void) const;
    /// Check whether it is safe or not to call GetNames method.
    bool CanGetNames(void) const;
    void ResetNames(void);
    const TNames& GetNames(void) const;
    TNames& SetNames(void);

    /// return packages' names only
    /// optional
    ///  Check whether the No_contents data member has been assigned a value.
    bool IsSetNo_contents(void) const;
    /// Check whether it is safe or not to call GetNo_contents method.
    bool CanGetNo_contents(void) const;
    void ResetNo_contents(void);
    void SetNo_contents(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2_Request_Get_Packages_Base(const CID2_Request_Get_Packages_Base&);
    CID2_Request_Get_Packages_Base& operator=(const CID2_Request_Get_Packages_Base&);

    // data
    Uint4 m_set_State[1];
    list< string > m_Names;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2_Request_Get_Packages_Base::IsSetNames(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CID2_Request_Get_Packages_Base::CanGetNames(void) const
{
    return true;
}

inline
const CID2_Request_Get_Packages_Base::TNames& CID2_Request_Get_Packages_Base::GetNames(void) const
{
    return m_Names;
}

inline
CID2_Request_Get_Packages_Base::TNames& CID2_Request_Get_Packages_Base::SetNames(void)
{
    m_set_State[0] |= 0x1;
    return m_Names;
}

inline
bool CID2_Request_Get_Packages_Base::IsSetNo_contents(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CID2_Request_Get_Packages_Base::CanGetNo_contents(void) const
{
    return false;
}

inline
void CID2_Request_Get_Packages_Base::ResetNo_contents(void)
{
    m_set_State[0] &= ~0xc;
}

inline
void CID2_Request_Get_Packages_Base::SetNo_contents(void)
{
    m_set_State[0] |= 0xc;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ID2_ID2_REQUEST_GET_PACKAGES_BASE_HPP
