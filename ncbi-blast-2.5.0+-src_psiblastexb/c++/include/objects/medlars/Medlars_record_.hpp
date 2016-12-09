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

/// @file Medlars_record_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'medlars.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MEDLARS_MEDLARS_RECORD_BASE_HPP
#define OBJECTS_MEDLARS_MEDLARS_RECORD_BASE_HPP

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
class NCBI_MEDLARS_EXPORT CMedlars_record_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMedlars_record_Base(void);
    // destructor
    virtual ~CMedlars_record_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TCode;
    typedef string TAbbr;
    typedef string TData;

    // getters
    // setters

    /// Unit record field type integer form
    /// mandatory
    /// typedef int TCode
    ///  Check whether the Code data member has been assigned a value.
    bool IsSetCode(void) const;
    /// Check whether it is safe or not to call GetCode method.
    bool CanGetCode(void) const;
    void ResetCode(void);
    TCode GetCode(void) const;
    void SetCode(TCode value);
    TCode& SetCode(void);

    /// Unit record field type abbreviation form
    /// optional
    /// typedef string TAbbr
    ///  Check whether the Abbr data member has been assigned a value.
    bool IsSetAbbr(void) const;
    /// Check whether it is safe or not to call GetAbbr method.
    bool CanGetAbbr(void) const;
    void ResetAbbr(void);
    const TAbbr& GetAbbr(void) const;
    void SetAbbr(const TAbbr& value);
    TAbbr& SetAbbr(void);

    /// Unit record data
    /// mandatory
    /// typedef string TData
    ///  Check whether the Data data member has been assigned a value.
    bool IsSetData(void) const;
    /// Check whether it is safe or not to call GetData method.
    bool CanGetData(void) const;
    void ResetData(void);
    const TData& GetData(void) const;
    void SetData(const TData& value);
    TData& SetData(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMedlars_record_Base(const CMedlars_record_Base&);
    CMedlars_record_Base& operator=(const CMedlars_record_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Code;
    string m_Abbr;
    string m_Data;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMedlars_record_Base::IsSetCode(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMedlars_record_Base::CanGetCode(void) const
{
    return IsSetCode();
}

inline
void CMedlars_record_Base::ResetCode(void)
{
    m_Code = 0;
    m_set_State[0] &= ~0x3;
}

inline
CMedlars_record_Base::TCode CMedlars_record_Base::GetCode(void) const
{
    if (!CanGetCode()) {
        ThrowUnassigned(0);
    }
    return m_Code;
}

inline
void CMedlars_record_Base::SetCode(CMedlars_record_Base::TCode value)
{
    m_Code = value;
    m_set_State[0] |= 0x3;
}

inline
CMedlars_record_Base::TCode& CMedlars_record_Base::SetCode(void)
{
#ifdef _DEBUG
    if (!IsSetCode()) {
        memset(&m_Code,UnassignedByte(),sizeof(m_Code));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Code;
}

inline
bool CMedlars_record_Base::IsSetAbbr(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMedlars_record_Base::CanGetAbbr(void) const
{
    return IsSetAbbr();
}

inline
const CMedlars_record_Base::TAbbr& CMedlars_record_Base::GetAbbr(void) const
{
    if (!CanGetAbbr()) {
        ThrowUnassigned(1);
    }
    return m_Abbr;
}

inline
void CMedlars_record_Base::SetAbbr(const CMedlars_record_Base::TAbbr& value)
{
    m_Abbr = value;
    m_set_State[0] |= 0xc;
}

inline
CMedlars_record_Base::TAbbr& CMedlars_record_Base::SetAbbr(void)
{
#ifdef _DEBUG
    if (!IsSetAbbr()) {
        m_Abbr = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Abbr;
}

inline
bool CMedlars_record_Base::IsSetData(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMedlars_record_Base::CanGetData(void) const
{
    return IsSetData();
}

inline
const CMedlars_record_Base::TData& CMedlars_record_Base::GetData(void) const
{
    if (!CanGetData()) {
        ThrowUnassigned(2);
    }
    return m_Data;
}

inline
void CMedlars_record_Base::SetData(const CMedlars_record_Base::TData& value)
{
    m_Data = value;
    m_set_State[0] |= 0x30;
}

inline
CMedlars_record_Base::TData& CMedlars_record_Base::SetData(void)
{
#ifdef _DEBUG
    if (!IsSetData()) {
        m_Data = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Data;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MEDLARS_MEDLARS_RECORD_BASE_HPP