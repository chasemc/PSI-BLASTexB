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

/// @file Pub_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pub.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_PUB_PUB_BASE_HPP
#define OBJECTS_PUB_PUB_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/biblio/PubMedId.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CCit_art;
class CCit_book;
class CCit_gen;
class CCit_jour;
class CCit_let;
class CCit_pat;
class CCit_proc;
class CCit_sub;
class CId_pat;
class CMedline_entry;
class CPub_equiv;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_PUB_EXPORT CPub_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPub_Base(void);
    // destructor
    virtual ~CPub_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,  ///< No variant selected
        e_Gen,          ///< general or generic unparsed
        e_Sub,          ///< submission
        e_Medline,
        e_Muid,         ///< medline uid
        e_Article,
        e_Journal,
        e_Book,
        e_Proc,         ///< proceedings of a meeting
        e_Patent,
        e_Pat_id,       ///< identify a patent
        e_Man,          ///< manuscript, thesis, or letter
        e_Equiv,        ///< to cite a variety of ways
        e_Pmid          ///< PubMedId
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 14 ///< == e_Pmid+1
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
    typedef CCit_gen TGen;
    typedef CCit_sub TSub;
    typedef CMedline_entry TMedline;
    typedef NCBI_NS_NCBI::TEntrezId TMuid;
    typedef CCit_art TArticle;
    typedef CCit_jour TJournal;
    typedef CCit_book TBook;
    typedef CCit_proc TProc;
    typedef CCit_pat TPatent;
    typedef CId_pat TPat_id;
    typedef CCit_let TMan;
    typedef CPub_equiv TEquiv;
    typedef CPubMedId TPmid;

    // getters
    // setters

    // typedef CCit_gen TGen
    bool IsGen(void) const;
    const TGen& GetGen(void) const;
    TGen& SetGen(void);
    void SetGen(TGen& value);

    // typedef CCit_sub TSub
    bool IsSub(void) const;
    const TSub& GetSub(void) const;
    TSub& SetSub(void);
    void SetSub(TSub& value);

    // typedef CMedline_entry TMedline
    bool IsMedline(void) const;
    const TMedline& GetMedline(void) const;
    TMedline& SetMedline(void);
    void SetMedline(TMedline& value);

    // typedef NCBI_NS_NCBI::TEntrezId TMuid
    bool IsMuid(void) const;
    TMuid GetMuid(void) const;
    TMuid& SetMuid(void);
    void SetMuid(TMuid value);

    // typedef CCit_art TArticle
    bool IsArticle(void) const;
    const TArticle& GetArticle(void) const;
    TArticle& SetArticle(void);
    void SetArticle(TArticle& value);

    // typedef CCit_jour TJournal
    bool IsJournal(void) const;
    const TJournal& GetJournal(void) const;
    TJournal& SetJournal(void);
    void SetJournal(TJournal& value);

    // typedef CCit_book TBook
    bool IsBook(void) const;
    const TBook& GetBook(void) const;
    TBook& SetBook(void);
    void SetBook(TBook& value);

    // typedef CCit_proc TProc
    bool IsProc(void) const;
    const TProc& GetProc(void) const;
    TProc& SetProc(void);
    void SetProc(TProc& value);

    // typedef CCit_pat TPatent
    bool IsPatent(void) const;
    const TPatent& GetPatent(void) const;
    TPatent& SetPatent(void);
    void SetPatent(TPatent& value);

    // typedef CId_pat TPat_id
    bool IsPat_id(void) const;
    const TPat_id& GetPat_id(void) const;
    TPat_id& SetPat_id(void);
    void SetPat_id(TPat_id& value);

    // typedef CCit_let TMan
    bool IsMan(void) const;
    const TMan& GetMan(void) const;
    TMan& SetMan(void);
    void SetMan(TMan& value);

    // typedef CPub_equiv TEquiv
    bool IsEquiv(void) const;
    const TEquiv& GetEquiv(void) const;
    TEquiv& SetEquiv(void);
    void SetEquiv(TEquiv& value);

    // typedef CPubMedId TPmid
    bool IsPmid(void) const;
    const TPmid& GetPmid(void) const;
    TPmid& SetPmid(void);
    void SetPmid(const TPmid& value);


private:
    // copy constructor and assignment operator
    CPub_Base(const CPub_Base& );
    CPub_Base& operator=(const CPub_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        ncbi::TIntId m_Muid;
        NCBI_NS_NCBI::CUnionBuffer<TPmid> m_Pmid;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CPub_Base::E_Choice CPub_Base::Which(void) const
{
    return m_choice;
}

inline
void CPub_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CPub_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CPub_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CPub_Base::IsGen(void) const
{
    return m_choice == e_Gen;
}

inline
bool CPub_Base::IsSub(void) const
{
    return m_choice == e_Sub;
}

inline
bool CPub_Base::IsMedline(void) const
{
    return m_choice == e_Medline;
}

inline
bool CPub_Base::IsMuid(void) const
{
    return m_choice == e_Muid;
}

inline
CPub_Base::TMuid CPub_Base::GetMuid(void) const
{
    CheckSelected(e_Muid);
    return reinterpret_cast<const TMuid&>(m_Muid);
}

inline
CPub_Base::TMuid& CPub_Base::SetMuid(void)
{
    Select(e_Muid, NCBI_NS_NCBI::eDoNotResetVariant);
    return reinterpret_cast<TMuid&>(m_Muid);
}

inline
void CPub_Base::SetMuid(CPub_Base::TMuid value)
{
    Select(e_Muid, NCBI_NS_NCBI::eDoNotResetVariant);
    reinterpret_cast<TMuid&>(m_Muid) = value;
}

inline
bool CPub_Base::IsArticle(void) const
{
    return m_choice == e_Article;
}

inline
bool CPub_Base::IsJournal(void) const
{
    return m_choice == e_Journal;
}

inline
bool CPub_Base::IsBook(void) const
{
    return m_choice == e_Book;
}

inline
bool CPub_Base::IsProc(void) const
{
    return m_choice == e_Proc;
}

inline
bool CPub_Base::IsPatent(void) const
{
    return m_choice == e_Patent;
}

inline
bool CPub_Base::IsPat_id(void) const
{
    return m_choice == e_Pat_id;
}

inline
bool CPub_Base::IsMan(void) const
{
    return m_choice == e_Man;
}

inline
bool CPub_Base::IsEquiv(void) const
{
    return m_choice == e_Equiv;
}

inline
bool CPub_Base::IsPmid(void) const
{
    return m_choice == e_Pmid;
}

inline
const CPub_Base::TPmid& CPub_Base::GetPmid(void) const
{
    CheckSelected(e_Pmid);
    return *m_Pmid;
}

inline
CPub_Base::TPmid& CPub_Base::SetPmid(void)
{
    Select(e_Pmid, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Pmid;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PUB_PUB_BASE_HPP