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

/// @file PrintForm_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'objprt.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_OBJPRT_PRINTFORM_BASE_HPP
#define OBJECTS_OBJPRT_PRINTFORM_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/objprt/TemplateName.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CPrintFormBlock;
class CPrintFormBoolean;
class CPrintFormEnum;
class CPrintFormText;
class CUserFormat;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Forms for various ASN.1 components
class NCBI_OBJPRT_EXPORT CPrintForm_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPrintForm_Base(void);
    // destructor
    virtual ~CPrintForm_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,   ///< No variant selected
        e_Block,
        e_Boolean,
        e_Enum,
        e_Text,
        e_Use_template,
        e_User,
        e_Null           ///< rarely used
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 8 ///< == e_Null+1
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
    typedef CPrintFormBlock TBlock;
    typedef CPrintFormBoolean TBoolean;
    typedef CPrintFormEnum TEnum;
    typedef CPrintFormText TText;
    typedef CTemplateName TUse_template;
    typedef CUserFormat TUser;

    // getters
    // setters

    // typedef CPrintFormBlock TBlock
    bool IsBlock(void) const;
    const TBlock& GetBlock(void) const;
    TBlock& SetBlock(void);
    void SetBlock(TBlock& value);

    // typedef CPrintFormBoolean TBoolean
    bool IsBoolean(void) const;
    const TBoolean& GetBoolean(void) const;
    TBoolean& SetBoolean(void);
    void SetBoolean(TBoolean& value);

    // typedef CPrintFormEnum TEnum
    bool IsEnum(void) const;
    const TEnum& GetEnum(void) const;
    TEnum& SetEnum(void);
    void SetEnum(TEnum& value);

    // typedef CPrintFormText TText
    bool IsText(void) const;
    const TText& GetText(void) const;
    TText& SetText(void);
    void SetText(TText& value);

    // typedef CTemplateName TUse_template
    bool IsUse_template(void) const;
    const TUse_template& GetUse_template(void) const;
    TUse_template& SetUse_template(void);
    void SetUse_template(const TUse_template& value);

    // typedef CUserFormat TUser
    bool IsUser(void) const;
    const TUser& GetUser(void) const;
    TUser& SetUser(void);
    void SetUser(TUser& value);


    bool IsNull(void) const;
    void SetNull(void);


private:
    // copy constructor and assignment operator
    CPrintForm_Base(const CPrintForm_Base& );
    CPrintForm_Base& operator=(const CPrintForm_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        NCBI_NS_NCBI::CUnionBuffer<TUse_template> m_Use_template;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CPrintForm_Base::E_Choice CPrintForm_Base::Which(void) const
{
    return m_choice;
}

inline
void CPrintForm_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CPrintForm_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CPrintForm_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CPrintForm_Base::IsBlock(void) const
{
    return m_choice == e_Block;
}

inline
bool CPrintForm_Base::IsBoolean(void) const
{
    return m_choice == e_Boolean;
}

inline
bool CPrintForm_Base::IsEnum(void) const
{
    return m_choice == e_Enum;
}

inline
bool CPrintForm_Base::IsText(void) const
{
    return m_choice == e_Text;
}

inline
bool CPrintForm_Base::IsUse_template(void) const
{
    return m_choice == e_Use_template;
}

inline
const CPrintForm_Base::TUse_template& CPrintForm_Base::GetUse_template(void) const
{
    CheckSelected(e_Use_template);
    return *m_Use_template;
}

inline
CPrintForm_Base::TUse_template& CPrintForm_Base::SetUse_template(void)
{
    Select(e_Use_template, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Use_template;
}

inline
bool CPrintForm_Base::IsUser(void) const
{
    return m_choice == e_User;
}

inline
bool CPrintForm_Base::IsNull(void) const
{
    return m_choice == e_Null;
}

inline
void CPrintForm_Base::SetNull(void)
{
    Select(e_Null, NCBI_NS_NCBI::eDoNotResetVariant);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_OBJPRT_PRINTFORM_BASE_HPP
