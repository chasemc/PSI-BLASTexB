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

/// @file NtSite_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'varrep.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_VARREP_NTSITE_BASE_HPP
#define OBJECTS_VARREP_NTSITE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <objects/varrep/VariantSeqType.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CNtSite_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CNtSite_Base(void);
    // destructor
    virtual ~CNtSite_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class C_Base : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Base(void);
        // destructor
        ~C_Base(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Val,
            e_Unknown
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 3 ///< == e_Unknown+1
        };
    
        /// Reset the whole object
        void Reset(void);
    
        /// Reset the selection (set it to e_not_set).
        void ResetSelection(void);
    
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
        typedef TSeqPos TVal;
    
        // getters
        // setters
    
        // typedef TSeqPos TVal
        bool IsVal(void) const;
        TVal GetVal(void) const;
        TVal& SetVal(void);
        void SetVal(TVal value);
    
    
        bool IsUnknown(void) const;
        void SetUnknown(void);
    
    
    private:
        // copy constructor and assignment operator
        C_Base(const C_Base& );
        C_Base& operator=(const C_Base& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            TVal m_Val;
        };
    };
    /////////////////////////////////////////////////////////////////////////////
    class C_Offset : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Offset(void);
        // destructor
        ~C_Offset(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,    ///< No variant selected
            e_Val,
            e_Plus_unknown,
            e_Minus_unknown
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 4 ///< == e_Minus_unknown+1
        };
    
        /// Reset the whole object
        void Reset(void);
    
        /// Reset the selection (set it to e_not_set).
        void ResetSelection(void);
    
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
        typedef TSignedSeqPos TVal;
    
        // getters
        // setters
    
        // typedef TSignedSeqPos TVal
        bool IsVal(void) const;
        TVal GetVal(void) const;
        TVal& SetVal(void);
        void SetVal(TVal value);
    
    
        bool IsPlus_unknown(void) const;
        void SetPlus_unknown(void);
    
    
        bool IsMinus_unknown(void) const;
        void SetMinus_unknown(void);
    
    
    private:
        // copy constructor and assignment operator
        C_Offset(const C_Offset& );
        C_Offset& operator=(const C_Offset& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            TVal m_Val;
        };
    };
    /////////////////////////////////////////////////////////////////////////////
    class C_Utr : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Utr(void);
        // destructor
        ~C_Utr(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Five_prime,
            e_Three_prime
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 3 ///< == e_Three_prime+1
        };
    
        /// Reset the whole object
        void Reset(void);
    
        /// Reset the selection (set it to e_not_set).
        void ResetSelection(void);
    
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
    
        // getters
        // setters
    
    
        bool IsFive_prime(void) const;
        void SetFive_prime(void);
    
    
        bool IsThree_prime(void) const;
        void SetThree_prime(void);
    
    
    private:
        // copy constructor and assignment operator
        C_Utr(const C_Utr& );
        C_Utr& operator=(const C_Utr& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
        };
    };
    // types
    typedef string TSeqid;
    typedef int TSeqtype;
    typedef C_Base TBase;
    typedef C_Offset TOffset;
    typedef C_Utr TUtr;
    typedef bool TStrand_minus;
    typedef bool TFuzzy;
    typedef bool TFuzzy_offset;

    // getters
    // setters

    /// optional
    /// typedef string TSeqid
    ///  Check whether the Seqid data member has been assigned a value.
    bool IsSetSeqid(void) const;
    /// Check whether it is safe or not to call GetSeqid method.
    bool CanGetSeqid(void) const;
    void ResetSeqid(void);
    const TSeqid& GetSeqid(void) const;
    void SetSeqid(const TSeqid& value);
    TSeqid& SetSeqid(void);

    /// optional
    /// typedef int TSeqtype
    ///  Check whether the Seqtype data member has been assigned a value.
    bool IsSetSeqtype(void) const;
    /// Check whether it is safe or not to call GetSeqtype method.
    bool CanGetSeqtype(void) const;
    void ResetSeqtype(void);
    TSeqtype GetSeqtype(void) const;
    void SetSeqtype(TSeqtype value);
    TSeqtype& SetSeqtype(void);

    /// mandatory
    /// typedef C_Base TBase
    ///  Check whether the Base data member has been assigned a value.
    bool IsSetBase(void) const;
    /// Check whether it is safe or not to call GetBase method.
    bool CanGetBase(void) const;
    void ResetBase(void);
    const TBase& GetBase(void) const;
    void SetBase(TBase& value);
    TBase& SetBase(void);

    /// optional
    /// typedef C_Offset TOffset
    ///  Check whether the Offset data member has been assigned a value.
    bool IsSetOffset(void) const;
    /// Check whether it is safe or not to call GetOffset method.
    bool CanGetOffset(void) const;
    void ResetOffset(void);
    const TOffset& GetOffset(void) const;
    void SetOffset(TOffset& value);
    TOffset& SetOffset(void);

    /// optional
    /// typedef C_Utr TUtr
    ///  Check whether the Utr data member has been assigned a value.
    bool IsSetUtr(void) const;
    /// Check whether it is safe or not to call GetUtr method.
    bool CanGetUtr(void) const;
    void ResetUtr(void);
    const TUtr& GetUtr(void) const;
    void SetUtr(TUtr& value);
    TUtr& SetUtr(void);

    /// TRUE implies opposite transcriptional orientation to 
    /// to the reference sequence
    /// optional with default false
    /// typedef bool TStrand_minus
    ///  Check whether the Strand_minus data member has been assigned a value.
    bool IsSetStrand_minus(void) const;
    /// Check whether it is safe or not to call GetStrand_minus method.
    bool CanGetStrand_minus(void) const;
    void ResetStrand_minus(void);
    void SetDefaultStrand_minus(void);
    TStrand_minus GetStrand_minus(void) const;
    void SetStrand_minus(TStrand_minus value);
    TStrand_minus& SetStrand_minus(void);

    /// TRUE implies HGVS subexpression of the form (base + offset),
    /// optional with default false
    /// typedef bool TFuzzy
    ///  Check whether the Fuzzy data member has been assigned a value.
    bool IsSetFuzzy(void) const;
    /// Check whether it is safe or not to call GetFuzzy method.
    bool CanGetFuzzy(void) const;
    void ResetFuzzy(void);
    void SetDefaultFuzzy(void);
    TFuzzy GetFuzzy(void) const;
    void SetFuzzy(TFuzzy value);
    TFuzzy& SetFuzzy(void);

    /// TRUE implies HGVS subexpression of the form base+(offset)
    /// optional with default false
    /// typedef bool TFuzzy_offset
    ///  Check whether the Fuzzy_offset data member has been assigned a value.
    bool IsSetFuzzy_offset(void) const;
    /// Check whether it is safe or not to call GetFuzzy_offset method.
    bool CanGetFuzzy_offset(void) const;
    void ResetFuzzy_offset(void);
    void SetDefaultFuzzy_offset(void);
    TFuzzy_offset GetFuzzy_offset(void) const;
    void SetFuzzy_offset(TFuzzy_offset value);
    TFuzzy_offset& SetFuzzy_offset(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CNtSite_Base(const CNtSite_Base&);
    CNtSite_Base& operator=(const CNtSite_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Seqid;
    int m_Seqtype;
    CRef< TBase > m_Base;
    CRef< TOffset > m_Offset;
    CRef< TUtr > m_Utr;
    bool m_Strand_minus;
    bool m_Fuzzy;
    bool m_Fuzzy_offset;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CNtSite_Base::C_Base::E_Choice CNtSite_Base::C_Base::Which(void) const
{
    return m_choice;
}

inline
void CNtSite_Base::C_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CNtSite_Base::C_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CNtSite_Base::C_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CNtSite_Base::C_Base::IsVal(void) const
{
    return m_choice == e_Val;
}

inline
CNtSite_Base::C_Base::TVal CNtSite_Base::C_Base::GetVal(void) const
{
    CheckSelected(e_Val);
    return m_Val;
}

inline
CNtSite_Base::C_Base::TVal& CNtSite_Base::C_Base::SetVal(void)
{
    Select(e_Val, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Val;
}

inline
void CNtSite_Base::C_Base::SetVal(CNtSite_Base::C_Base::TVal value)
{
    Select(e_Val, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Val = value;
}

inline
bool CNtSite_Base::C_Base::IsUnknown(void) const
{
    return m_choice == e_Unknown;
}

inline
void CNtSite_Base::C_Base::SetUnknown(void)
{
    Select(e_Unknown, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
CNtSite_Base::C_Offset::E_Choice CNtSite_Base::C_Offset::Which(void) const
{
    return m_choice;
}

inline
void CNtSite_Base::C_Offset::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CNtSite_Base::C_Offset::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CNtSite_Base::C_Offset::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CNtSite_Base::C_Offset::IsVal(void) const
{
    return m_choice == e_Val;
}

inline
CNtSite_Base::C_Offset::TVal CNtSite_Base::C_Offset::GetVal(void) const
{
    CheckSelected(e_Val);
    return m_Val;
}

inline
CNtSite_Base::C_Offset::TVal& CNtSite_Base::C_Offset::SetVal(void)
{
    Select(e_Val, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Val;
}

inline
void CNtSite_Base::C_Offset::SetVal(CNtSite_Base::C_Offset::TVal value)
{
    Select(e_Val, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Val = value;
}

inline
bool CNtSite_Base::C_Offset::IsPlus_unknown(void) const
{
    return m_choice == e_Plus_unknown;
}

inline
void CNtSite_Base::C_Offset::SetPlus_unknown(void)
{
    Select(e_Plus_unknown, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CNtSite_Base::C_Offset::IsMinus_unknown(void) const
{
    return m_choice == e_Minus_unknown;
}

inline
void CNtSite_Base::C_Offset::SetMinus_unknown(void)
{
    Select(e_Minus_unknown, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
CNtSite_Base::C_Utr::E_Choice CNtSite_Base::C_Utr::Which(void) const
{
    return m_choice;
}

inline
void CNtSite_Base::C_Utr::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CNtSite_Base::C_Utr::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CNtSite_Base::C_Utr::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CNtSite_Base::C_Utr::IsFive_prime(void) const
{
    return m_choice == e_Five_prime;
}

inline
void CNtSite_Base::C_Utr::SetFive_prime(void)
{
    Select(e_Five_prime, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CNtSite_Base::C_Utr::IsThree_prime(void) const
{
    return m_choice == e_Three_prime;
}

inline
void CNtSite_Base::C_Utr::SetThree_prime(void)
{
    Select(e_Three_prime, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CNtSite_Base::IsSetSeqid(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CNtSite_Base::CanGetSeqid(void) const
{
    return IsSetSeqid();
}

inline
const CNtSite_Base::TSeqid& CNtSite_Base::GetSeqid(void) const
{
    if (!CanGetSeqid()) {
        ThrowUnassigned(0);
    }
    return m_Seqid;
}

inline
void CNtSite_Base::SetSeqid(const CNtSite_Base::TSeqid& value)
{
    m_Seqid = value;
    m_set_State[0] |= 0x3;
}

inline
CNtSite_Base::TSeqid& CNtSite_Base::SetSeqid(void)
{
#ifdef _DEBUG
    if (!IsSetSeqid()) {
        m_Seqid = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Seqid;
}

inline
bool CNtSite_Base::IsSetSeqtype(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CNtSite_Base::CanGetSeqtype(void) const
{
    return IsSetSeqtype();
}

inline
void CNtSite_Base::ResetSeqtype(void)
{
    m_Seqtype = (int)(0);
    m_set_State[0] &= ~0xc;
}

inline
CNtSite_Base::TSeqtype CNtSite_Base::GetSeqtype(void) const
{
    if (!CanGetSeqtype()) {
        ThrowUnassigned(1);
    }
    return m_Seqtype;
}

inline
void CNtSite_Base::SetSeqtype(CNtSite_Base::TSeqtype value)
{
    m_Seqtype = value;
    m_set_State[0] |= 0xc;
}

inline
CNtSite_Base::TSeqtype& CNtSite_Base::SetSeqtype(void)
{
#ifdef _DEBUG
    if (!IsSetSeqtype()) {
        memset(&m_Seqtype,UnassignedByte(),sizeof(m_Seqtype));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Seqtype;
}

inline
bool CNtSite_Base::IsSetBase(void) const
{
    return m_Base.NotEmpty();
}

inline
bool CNtSite_Base::CanGetBase(void) const
{
    return true;
}

inline
const CNtSite_Base::TBase& CNtSite_Base::GetBase(void) const
{
    if ( !m_Base ) {
        const_cast<CNtSite_Base*>(this)->ResetBase();
    }
    return (*m_Base);
}

inline
CNtSite_Base::TBase& CNtSite_Base::SetBase(void)
{
    if ( !m_Base ) {
        ResetBase();
    }
    return (*m_Base);
}

inline
bool CNtSite_Base::IsSetOffset(void) const
{
    return m_Offset.NotEmpty();
}

inline
bool CNtSite_Base::CanGetOffset(void) const
{
    return IsSetOffset();
}

inline
const CNtSite_Base::TOffset& CNtSite_Base::GetOffset(void) const
{
    if (!CanGetOffset()) {
        ThrowUnassigned(3);
    }
    return (*m_Offset);
}

inline
bool CNtSite_Base::IsSetUtr(void) const
{
    return m_Utr.NotEmpty();
}

inline
bool CNtSite_Base::CanGetUtr(void) const
{
    return IsSetUtr();
}

inline
const CNtSite_Base::TUtr& CNtSite_Base::GetUtr(void) const
{
    if (!CanGetUtr()) {
        ThrowUnassigned(4);
    }
    return (*m_Utr);
}

inline
bool CNtSite_Base::IsSetStrand_minus(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CNtSite_Base::CanGetStrand_minus(void) const
{
    return true;
}

inline
void CNtSite_Base::ResetStrand_minus(void)
{
    m_Strand_minus = false;
    m_set_State[0] &= ~0xc00;
}

inline
void CNtSite_Base::SetDefaultStrand_minus(void)
{
    ResetStrand_minus();
}

inline
CNtSite_Base::TStrand_minus CNtSite_Base::GetStrand_minus(void) const
{
    return m_Strand_minus;
}

inline
void CNtSite_Base::SetStrand_minus(CNtSite_Base::TStrand_minus value)
{
    m_Strand_minus = value;
    m_set_State[0] |= 0xc00;
}

inline
CNtSite_Base::TStrand_minus& CNtSite_Base::SetStrand_minus(void)
{
#ifdef _DEBUG
    if (!IsSetStrand_minus()) {
        memset(&m_Strand_minus,UnassignedByte(),sizeof(m_Strand_minus));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Strand_minus;
}

inline
bool CNtSite_Base::IsSetFuzzy(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CNtSite_Base::CanGetFuzzy(void) const
{
    return true;
}

inline
void CNtSite_Base::ResetFuzzy(void)
{
    m_Fuzzy = false;
    m_set_State[0] &= ~0x3000;
}

inline
void CNtSite_Base::SetDefaultFuzzy(void)
{
    ResetFuzzy();
}

inline
CNtSite_Base::TFuzzy CNtSite_Base::GetFuzzy(void) const
{
    return m_Fuzzy;
}

inline
void CNtSite_Base::SetFuzzy(CNtSite_Base::TFuzzy value)
{
    m_Fuzzy = value;
    m_set_State[0] |= 0x3000;
}

inline
CNtSite_Base::TFuzzy& CNtSite_Base::SetFuzzy(void)
{
#ifdef _DEBUG
    if (!IsSetFuzzy()) {
        memset(&m_Fuzzy,UnassignedByte(),sizeof(m_Fuzzy));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Fuzzy;
}

inline
bool CNtSite_Base::IsSetFuzzy_offset(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CNtSite_Base::CanGetFuzzy_offset(void) const
{
    return true;
}

inline
void CNtSite_Base::ResetFuzzy_offset(void)
{
    m_Fuzzy_offset = false;
    m_set_State[0] &= ~0xc000;
}

inline
void CNtSite_Base::SetDefaultFuzzy_offset(void)
{
    ResetFuzzy_offset();
}

inline
CNtSite_Base::TFuzzy_offset CNtSite_Base::GetFuzzy_offset(void) const
{
    return m_Fuzzy_offset;
}

inline
void CNtSite_Base::SetFuzzy_offset(CNtSite_Base::TFuzzy_offset value)
{
    m_Fuzzy_offset = value;
    m_set_State[0] |= 0xc000;
}

inline
CNtSite_Base::TFuzzy_offset& CNtSite_Base::SetFuzzy_offset(void)
{
#ifdef _DEBUG
    if (!IsSetFuzzy_offset()) {
        memset(&m_Fuzzy_offset,UnassignedByte(),sizeof(m_Fuzzy_offset));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Fuzzy_offset;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_VARREP_NTSITE_BASE_HPP