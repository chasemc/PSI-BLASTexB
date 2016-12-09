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

/// @file Fix_caps_action_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_FIX_CAPS_ACTION_BASE_HPP
#define OBJECTS_MACRO_FIX_CAPS_ACTION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Source_qual.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CFix_author_caps;
class CFix_pub_caps_action;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CFix_caps_action_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CFix_caps_action_Base(void);
    // destructor
    virtual ~CFix_caps_action_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,   ///< No variant selected
        e_Pub,
        e_Src_country,
        e_Mouse_strain,
        e_Src_qual,
        e_Author
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 6 ///< == e_Author+1
    };

    /// Reset the whole object
    virtual void Reset(void);

    /// Reset the selection (set it to e_not_set).
    virtual void ResetSelection(void);

    /// Which variant is currently selected.
    E_Choice Which(void) const;

    /// Verify selection, throw exception if it differs from the expected.
    void CheckSelected(E_Choice index) const;

    /// Throw 'InvalidSelection' exception.
    NCBI_NORETURN void ThrowInvalidSelection(E_Choice index) const;

    /// Retrieve selection name (for diagnostic purposes).
    static string SelectionName(E_Choice index);

    /// Select the requested variant if needed.
    void Select(E_Choice index, EResetVariant reset = eDoResetVariant);
    /// Select the requested variant if needed,
    /// allocating CObject variants from memory pool.
    void Select(E_Choice index,
                EResetVariant reset,
                CObjectMemoryPool* pool);

    // types
    typedef CFix_pub_caps_action TPub;
    typedef ESource_qual TSrc_qual;
    typedef CFix_author_caps TAuthor;

    // getters
    // setters

    // typedef CFix_pub_caps_action TPub
    bool IsPub(void) const;
    const TPub& GetPub(void) const;
    TPub& SetPub(void);
    void SetPub(TPub& value);


    bool IsSrc_country(void) const;
    void SetSrc_country(void);


    bool IsMouse_strain(void) const;
    void SetMouse_strain(void);

    // typedef ESource_qual TSrc_qual
    bool IsSrc_qual(void) const;
    TSrc_qual GetSrc_qual(void) const;
    TSrc_qual& SetSrc_qual(void);
    void SetSrc_qual(TSrc_qual value);

    // typedef CFix_author_caps TAuthor
    bool IsAuthor(void) const;
    const TAuthor& GetAuthor(void) const;
    TAuthor& SetAuthor(void);
    void SetAuthor(TAuthor& value);


private:
    // copy constructor and assignment operator
    CFix_caps_action_Base(const CFix_caps_action_Base& );
    CFix_caps_action_Base& operator=(const CFix_caps_action_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        TSrc_qual m_Src_qual;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CFix_caps_action_Base::E_Choice CFix_caps_action_Base::Which(void) const
{
    return m_choice;
}

inline
void CFix_caps_action_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CFix_caps_action_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CFix_caps_action_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CFix_caps_action_Base::IsPub(void) const
{
    return m_choice == e_Pub;
}

inline
bool CFix_caps_action_Base::IsSrc_country(void) const
{
    return m_choice == e_Src_country;
}

inline
void CFix_caps_action_Base::SetSrc_country(void)
{
    Select(e_Src_country, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CFix_caps_action_Base::IsMouse_strain(void) const
{
    return m_choice == e_Mouse_strain;
}

inline
void CFix_caps_action_Base::SetMouse_strain(void)
{
    Select(e_Mouse_strain, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CFix_caps_action_Base::IsSrc_qual(void) const
{
    return m_choice == e_Src_qual;
}

inline
CFix_caps_action_Base::TSrc_qual CFix_caps_action_Base::GetSrc_qual(void) const
{
    CheckSelected(e_Src_qual);
    return m_Src_qual;
}

inline
CFix_caps_action_Base::TSrc_qual& CFix_caps_action_Base::SetSrc_qual(void)
{
    Select(e_Src_qual, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Src_qual;
}

inline
void CFix_caps_action_Base::SetSrc_qual(CFix_caps_action_Base::TSrc_qual value)
{
    Select(e_Src_qual, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Src_qual = value;
}

inline
bool CFix_caps_action_Base::IsAuthor(void) const
{
    return m_choice == e_Author;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_FIX_CAPS_ACTION_BASE_HPP
