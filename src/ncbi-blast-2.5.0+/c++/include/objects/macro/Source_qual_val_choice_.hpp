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

/// @file Source_qual_val_choice_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_SOURCE_QUAL_VAL_CHOICE_BASE_HPP
#define OBJECTS_MACRO_SOURCE_QUAL_VAL_CHOICE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Source_location.hpp>
#include <objects/macro/Source_origin.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CSource_qual_text_val;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CSource_qual_val_choice_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSource_qual_val_choice_Base(void);
    // destructor
    virtual ~CSource_qual_val_choice_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,  ///< No variant selected
        e_Textqual,
        e_Location,
        e_Origin,
        e_Gcode,
        e_Mgcode
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 6 ///< == e_Mgcode+1
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
    typedef CSource_qual_text_val TTextqual;
    typedef ESource_location TLocation;
    typedef ESource_origin TOrigin;
    typedef int TGcode;
    typedef int TMgcode;

    // getters
    // setters

    // typedef CSource_qual_text_val TTextqual
    bool IsTextqual(void) const;
    const TTextqual& GetTextqual(void) const;
    TTextqual& SetTextqual(void);
    void SetTextqual(TTextqual& value);

    // typedef ESource_location TLocation
    bool IsLocation(void) const;
    TLocation GetLocation(void) const;
    TLocation& SetLocation(void);
    void SetLocation(TLocation value);

    // typedef ESource_origin TOrigin
    bool IsOrigin(void) const;
    TOrigin GetOrigin(void) const;
    TOrigin& SetOrigin(void);
    void SetOrigin(TOrigin value);

    // typedef int TGcode
    bool IsGcode(void) const;
    TGcode GetGcode(void) const;
    TGcode& SetGcode(void);
    void SetGcode(TGcode value);

    // typedef int TMgcode
    bool IsMgcode(void) const;
    TMgcode GetMgcode(void) const;
    TMgcode& SetMgcode(void);
    void SetMgcode(TMgcode value);


private:
    // copy constructor and assignment operator
    CSource_qual_val_choice_Base(const CSource_qual_val_choice_Base& );
    CSource_qual_val_choice_Base& operator=(const CSource_qual_val_choice_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        TLocation m_Location;
        TOrigin m_Origin;
        TGcode m_Gcode;
        TMgcode m_Mgcode;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CSource_qual_val_choice_Base::E_Choice CSource_qual_val_choice_Base::Which(void) const
{
    return m_choice;
}

inline
void CSource_qual_val_choice_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CSource_qual_val_choice_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CSource_qual_val_choice_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CSource_qual_val_choice_Base::IsTextqual(void) const
{
    return m_choice == e_Textqual;
}

inline
bool CSource_qual_val_choice_Base::IsLocation(void) const
{
    return m_choice == e_Location;
}

inline
CSource_qual_val_choice_Base::TLocation CSource_qual_val_choice_Base::GetLocation(void) const
{
    CheckSelected(e_Location);
    return m_Location;
}

inline
CSource_qual_val_choice_Base::TLocation& CSource_qual_val_choice_Base::SetLocation(void)
{
    Select(e_Location, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Location;
}

inline
void CSource_qual_val_choice_Base::SetLocation(CSource_qual_val_choice_Base::TLocation value)
{
    Select(e_Location, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Location = value;
}

inline
bool CSource_qual_val_choice_Base::IsOrigin(void) const
{
    return m_choice == e_Origin;
}

inline
CSource_qual_val_choice_Base::TOrigin CSource_qual_val_choice_Base::GetOrigin(void) const
{
    CheckSelected(e_Origin);
    return m_Origin;
}

inline
CSource_qual_val_choice_Base::TOrigin& CSource_qual_val_choice_Base::SetOrigin(void)
{
    Select(e_Origin, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Origin;
}

inline
void CSource_qual_val_choice_Base::SetOrigin(CSource_qual_val_choice_Base::TOrigin value)
{
    Select(e_Origin, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Origin = value;
}

inline
bool CSource_qual_val_choice_Base::IsGcode(void) const
{
    return m_choice == e_Gcode;
}

inline
CSource_qual_val_choice_Base::TGcode CSource_qual_val_choice_Base::GetGcode(void) const
{
    CheckSelected(e_Gcode);
    return m_Gcode;
}

inline
CSource_qual_val_choice_Base::TGcode& CSource_qual_val_choice_Base::SetGcode(void)
{
    Select(e_Gcode, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Gcode;
}

inline
void CSource_qual_val_choice_Base::SetGcode(CSource_qual_val_choice_Base::TGcode value)
{
    Select(e_Gcode, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Gcode = value;
}

inline
bool CSource_qual_val_choice_Base::IsMgcode(void) const
{
    return m_choice == e_Mgcode;
}

inline
CSource_qual_val_choice_Base::TMgcode CSource_qual_val_choice_Base::GetMgcode(void) const
{
    CheckSelected(e_Mgcode);
    return m_Mgcode;
}

inline
CSource_qual_val_choice_Base::TMgcode& CSource_qual_val_choice_Base::SetMgcode(void)
{
    Select(e_Mgcode, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Mgcode;
}

inline
void CSource_qual_val_choice_Base::SetMgcode(CSource_qual_val_choice_Base::TMgcode value)
{
    Select(e_Mgcode, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Mgcode = value;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_SOURCE_QUAL_VAL_CHOICE_BASE_HPP