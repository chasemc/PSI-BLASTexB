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

/// @file PrintFormBoolean_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'objprt.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_OBJPRT_PRINTFORMBOOLEAN_BASE_HPP
#define OBJECTS_OBJPRT_PRINTFORMBOOLEAN_BASE_HPP

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
class NCBI_OBJPRT_EXPORT CPrintFormBoolean_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPrintFormBoolean_Base(void);
    // destructor
    virtual ~CPrintFormBoolean_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TTrue;
    typedef string TFalse;

    // getters
    // setters

    /// optional
    /// typedef string TTrue
    ///  Check whether the True data member has been assigned a value.
    bool IsSetTrue(void) const;
    /// Check whether it is safe or not to call GetTrue method.
    bool CanGetTrue(void) const;
    void ResetTrue(void);
    const TTrue& GetTrue(void) const;
    void SetTrue(const TTrue& value);
    TTrue& SetTrue(void);

    /// optional
    /// typedef string TFalse
    ///  Check whether the False data member has been assigned a value.
    bool IsSetFalse(void) const;
    /// Check whether it is safe or not to call GetFalse method.
    bool CanGetFalse(void) const;
    void ResetFalse(void);
    const TFalse& GetFalse(void) const;
    void SetFalse(const TFalse& value);
    TFalse& SetFalse(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPrintFormBoolean_Base(const CPrintFormBoolean_Base&);
    CPrintFormBoolean_Base& operator=(const CPrintFormBoolean_Base&);

    // data
    Uint4 m_set_State[1];
    string m_True;
    string m_False;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPrintFormBoolean_Base::IsSetTrue(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPrintFormBoolean_Base::CanGetTrue(void) const
{
    return IsSetTrue();
}

inline
const CPrintFormBoolean_Base::TTrue& CPrintFormBoolean_Base::GetTrue(void) const
{
    if (!CanGetTrue()) {
        ThrowUnassigned(0);
    }
    return m_True;
}

inline
void CPrintFormBoolean_Base::SetTrue(const CPrintFormBoolean_Base::TTrue& value)
{
    m_True = value;
    m_set_State[0] |= 0x3;
}

inline
CPrintFormBoolean_Base::TTrue& CPrintFormBoolean_Base::SetTrue(void)
{
#ifdef _DEBUG
    if (!IsSetTrue()) {
        m_True = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_True;
}

inline
bool CPrintFormBoolean_Base::IsSetFalse(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPrintFormBoolean_Base::CanGetFalse(void) const
{
    return IsSetFalse();
}

inline
const CPrintFormBoolean_Base::TFalse& CPrintFormBoolean_Base::GetFalse(void) const
{
    if (!CanGetFalse()) {
        ThrowUnassigned(1);
    }
    return m_False;
}

inline
void CPrintFormBoolean_Base::SetFalse(const CPrintFormBoolean_Base::TFalse& value)
{
    m_False = value;
    m_set_State[0] |= 0xc;
}

inline
CPrintFormBoolean_Base::TFalse& CPrintFormBoolean_Base::SetFalse(void)
{
#ifdef _DEBUG
    if (!IsSetFalse()) {
        m_False = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_False;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_OBJPRT_PRINTFORMBOOLEAN_BASE_HPP
