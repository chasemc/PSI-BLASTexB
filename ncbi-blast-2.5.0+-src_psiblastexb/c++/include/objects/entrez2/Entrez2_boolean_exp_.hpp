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

/// @file Entrez2_boolean_exp_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrez2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZ2_ENTREZ2_BOOLEAN_EXP_BASE_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_BOOLEAN_EXP_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <objects/entrez2/Entrez2_db_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CEntrez2_boolean_element;
class CEntrez2_limits;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///****************************************
/// The structured form of the boolean is the same in a request or
///    return so that it easy to modify a query. This means some
///    fields are only considered in a return value, like counts
///    by term. They are ignored in a request.
/// The structured boolean supports specific boolean components,
///    an unparsed string in query syntax, and UID lists as
///    elements of a boolean. This makes it possible to submit
///    a single string, a fully structured query, or a mixture.
///    The UID list feature means one can also perform refinements
///    on UID lists from links, neighbors, or other operations.
///    UID list query now returns a history key for subsequent use.
///*****************************************
class NCBI_ENTREZ2_EXPORT CEntrez2_boolean_exp_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez2_boolean_exp_Base(void);
    // destructor
    virtual ~CEntrez2_boolean_exp_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CEntrez2_db_id TDb;
    typedef list< CRef< CEntrez2_boolean_element > > TExp;
    typedef CEntrez2_limits TLimits;

    // getters
    // setters

    /// database for this query
    /// mandatory
    /// typedef CEntrez2_db_id TDb
    ///  Check whether the Db data member has been assigned a value.
    bool IsSetDb(void) const;
    /// Check whether it is safe or not to call GetDb method.
    bool CanGetDb(void) const;
    void ResetDb(void);
    const TDb& GetDb(void) const;
    void SetDb(const TDb& value);
    TDb& SetDb(void);

    /// the Boolean
    /// mandatory
    /// typedef list< CRef< CEntrez2_boolean_element > > TExp
    ///  Check whether the Exp data member has been assigned a value.
    bool IsSetExp(void) const;
    /// Check whether it is safe or not to call GetExp method.
    bool CanGetExp(void) const;
    void ResetExp(void);
    const TExp& GetExp(void) const;
    TExp& SetExp(void);

    /// date bounds
    /// optional
    /// typedef CEntrez2_limits TLimits
    ///  Check whether the Limits data member has been assigned a value.
    bool IsSetLimits(void) const;
    /// Check whether it is safe or not to call GetLimits method.
    bool CanGetLimits(void) const;
    void ResetLimits(void);
    const TLimits& GetLimits(void) const;
    void SetLimits(TLimits& value);
    TLimits& SetLimits(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez2_boolean_exp_Base(const CEntrez2_boolean_exp_Base&);
    CEntrez2_boolean_exp_Base& operator=(const CEntrez2_boolean_exp_Base&);

    // data
    Uint4 m_set_State[1];
    CEntrez2_db_id m_Db;
    list< CRef< CEntrez2_boolean_element > > m_Exp;
    CRef< TLimits > m_Limits;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CEntrez2_boolean_exp_Base::IsSetDb(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CEntrez2_boolean_exp_Base::CanGetDb(void) const
{
    return IsSetDb();
}

inline
const CEntrez2_boolean_exp_Base::TDb& CEntrez2_boolean_exp_Base::GetDb(void) const
{
    if (!CanGetDb()) {
        ThrowUnassigned(0);
    }
    return m_Db;
}

inline
void CEntrez2_boolean_exp_Base::SetDb(const CEntrez2_boolean_exp_Base::TDb& value)
{
    m_Db = value;
    m_set_State[0] |= 0x3;
}

inline
CEntrez2_boolean_exp_Base::TDb& CEntrez2_boolean_exp_Base::SetDb(void)
{
    m_set_State[0] |= 0x1;
    return m_Db;
}

inline
bool CEntrez2_boolean_exp_Base::IsSetExp(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CEntrez2_boolean_exp_Base::CanGetExp(void) const
{
    return true;
}

inline
const CEntrez2_boolean_exp_Base::TExp& CEntrez2_boolean_exp_Base::GetExp(void) const
{
    return m_Exp;
}

inline
CEntrez2_boolean_exp_Base::TExp& CEntrez2_boolean_exp_Base::SetExp(void)
{
    m_set_State[0] |= 0x4;
    return m_Exp;
}

inline
bool CEntrez2_boolean_exp_Base::IsSetLimits(void) const
{
    return m_Limits.NotEmpty();
}

inline
bool CEntrez2_boolean_exp_Base::CanGetLimits(void) const
{
    return IsSetLimits();
}

inline
const CEntrez2_boolean_exp_Base::TLimits& CEntrez2_boolean_exp_Base::GetLimits(void) const
{
    if (!CanGetLimits()) {
        ThrowUnassigned(2);
    }
    return (*m_Limits);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZ2_ENTREZ2_BOOLEAN_EXP_BASE_HPP