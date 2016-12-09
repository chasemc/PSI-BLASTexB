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

/// @file Partial_both_set_action_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_PARTIAL_BOTH_SET_ACTION_BASE_HPP
#define OBJECTS_MACRO_PARTIAL_BOTH_SET_ACTION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Partial_both_set_constrain.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CPartial_both_set_action_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPartial_both_set_action_Base(void);
    // destructor
    virtual ~CPartial_both_set_action_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef EPartial_both_set_constraint TConstraint;
    typedef bool TExtend;

    // getters
    // setters

    /// mandatory
    /// typedef EPartial_both_set_constraint TConstraint
    ///  Check whether the Constraint data member has been assigned a value.
    bool IsSetConstraint(void) const;
    /// Check whether it is safe or not to call GetConstraint method.
    bool CanGetConstraint(void) const;
    void ResetConstraint(void);
    TConstraint GetConstraint(void) const;
    void SetConstraint(TConstraint value);
    TConstraint& SetConstraint(void);

    /// mandatory
    /// typedef bool TExtend
    ///  Check whether the Extend data member has been assigned a value.
    bool IsSetExtend(void) const;
    /// Check whether it is safe or not to call GetExtend method.
    bool CanGetExtend(void) const;
    void ResetExtend(void);
    TExtend GetExtend(void) const;
    void SetExtend(TExtend value);
    TExtend& SetExtend(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPartial_both_set_action_Base(const CPartial_both_set_action_Base&);
    CPartial_both_set_action_Base& operator=(const CPartial_both_set_action_Base&);

    // data
    Uint4 m_set_State[1];
    EPartial_both_set_constraint m_Constraint;
    bool m_Extend;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPartial_both_set_action_Base::IsSetConstraint(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPartial_both_set_action_Base::CanGetConstraint(void) const
{
    return IsSetConstraint();
}

inline
void CPartial_both_set_action_Base::ResetConstraint(void)
{
    m_Constraint = (ncbi::objects::EPartial_both_set_constraint)(0);
    m_set_State[0] &= ~0x3;
}

inline
CPartial_both_set_action_Base::TConstraint CPartial_both_set_action_Base::GetConstraint(void) const
{
    if (!CanGetConstraint()) {
        ThrowUnassigned(0);
    }
    return m_Constraint;
}

inline
void CPartial_both_set_action_Base::SetConstraint(CPartial_both_set_action_Base::TConstraint value)
{
    m_Constraint = value;
    m_set_State[0] |= 0x3;
}

inline
CPartial_both_set_action_Base::TConstraint& CPartial_both_set_action_Base::SetConstraint(void)
{
#ifdef _DEBUG
    if (!IsSetConstraint()) {
        memset(&m_Constraint,UnassignedByte(),sizeof(m_Constraint));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Constraint;
}

inline
bool CPartial_both_set_action_Base::IsSetExtend(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPartial_both_set_action_Base::CanGetExtend(void) const
{
    return IsSetExtend();
}

inline
void CPartial_both_set_action_Base::ResetExtend(void)
{
    m_Extend = 0;
    m_set_State[0] &= ~0xc;
}

inline
CPartial_both_set_action_Base::TExtend CPartial_both_set_action_Base::GetExtend(void) const
{
    if (!CanGetExtend()) {
        ThrowUnassigned(1);
    }
    return m_Extend;
}

inline
void CPartial_both_set_action_Base::SetExtend(CPartial_both_set_action_Base::TExtend value)
{
    m_Extend = value;
    m_set_State[0] |= 0xc;
}

inline
CPartial_both_set_action_Base::TExtend& CPartial_both_set_action_Base::SetExtend(void)
{
#ifdef _DEBUG
    if (!IsSetExtend()) {
        memset(&m_Extend,UnassignedByte(),sizeof(m_Extend));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Extend;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_PARTIAL_BOTH_SET_ACTION_BASE_HPP
