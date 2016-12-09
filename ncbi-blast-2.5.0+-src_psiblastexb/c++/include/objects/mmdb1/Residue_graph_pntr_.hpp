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

/// @file Residue_graph_pntr_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb1.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB1_RESIDUE_GRAPH_PNTR_BASE_HPP
#define OBJECTS_MMDB1_RESIDUE_GRAPH_PNTR_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/mmdb1/Residue_graph_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CBiostruc_graph_pntr;
class CBiostruc_residue_graph_set_pntr;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Residue graphs from different sources may be referenced within a molecule
/// graph.  The allowed choices are the nonstandard residue graphs included in 
/// the present biostruc, residue graphs within other biostrucs, or residue 
/// graphs within tables of standard residue definitions.
class NCBI_MMDB1_EXPORT CResidue_graph_pntr_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CResidue_graph_pntr_Base(void);
    // destructor
    virtual ~CResidue_graph_pntr_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,  ///< No variant selected
        e_Local,
        e_Biostruc,
        e_Standard
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 4 ///< == e_Standard+1
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
    typedef CResidue_graph_id TLocal;
    typedef CBiostruc_graph_pntr TBiostruc;
    typedef CBiostruc_residue_graph_set_pntr TStandard;

    // getters
    // setters

    // typedef CResidue_graph_id TLocal
    bool IsLocal(void) const;
    const TLocal& GetLocal(void) const;
    TLocal& SetLocal(void);
    void SetLocal(const TLocal& value);

    // typedef CBiostruc_graph_pntr TBiostruc
    bool IsBiostruc(void) const;
    const TBiostruc& GetBiostruc(void) const;
    TBiostruc& SetBiostruc(void);
    void SetBiostruc(TBiostruc& value);

    // typedef CBiostruc_residue_graph_set_pntr TStandard
    bool IsStandard(void) const;
    const TStandard& GetStandard(void) const;
    TStandard& SetStandard(void);
    void SetStandard(TStandard& value);


private:
    // copy constructor and assignment operator
    CResidue_graph_pntr_Base(const CResidue_graph_pntr_Base& );
    CResidue_graph_pntr_Base& operator=(const CResidue_graph_pntr_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        NCBI_NS_NCBI::CUnionBuffer<TLocal> m_Local;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CResidue_graph_pntr_Base::E_Choice CResidue_graph_pntr_Base::Which(void) const
{
    return m_choice;
}

inline
void CResidue_graph_pntr_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CResidue_graph_pntr_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CResidue_graph_pntr_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CResidue_graph_pntr_Base::IsLocal(void) const
{
    return m_choice == e_Local;
}

inline
const CResidue_graph_pntr_Base::TLocal& CResidue_graph_pntr_Base::GetLocal(void) const
{
    CheckSelected(e_Local);
    return *m_Local;
}

inline
CResidue_graph_pntr_Base::TLocal& CResidue_graph_pntr_Base::SetLocal(void)
{
    Select(e_Local, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Local;
}

inline
bool CResidue_graph_pntr_Base::IsBiostruc(void) const
{
    return m_choice == e_Biostruc;
}

inline
bool CResidue_graph_pntr_Base::IsStandard(void) const
{
    return m_choice == e_Standard;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB1_RESIDUE_GRAPH_PNTR_BASE_HPP