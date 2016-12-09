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

/// @file SeqEdit_Cmd_AttachSet_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqedit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQEDIT_SEQEDIT_CMD_ATTACHSET_BASE_HPP
#define OBJECTS_SEQEDIT_SEQEDIT_CMD_ATTACHSET_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CBioseq_set;
class CSeqEdit_Id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Attach a bioseq-set to seq entry
class NCBI_SEQEDIT_EXPORT CSeqEdit_Cmd_AttachSet_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSeqEdit_Cmd_AttachSet_Base(void);
    // destructor
    virtual ~CSeqEdit_Cmd_AttachSet_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CSeqEdit_Id TId;
    typedef CBioseq_set TSet;

    // getters
    // setters

    /// Seq entry id
    /// mandatory
    /// typedef CSeqEdit_Id TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    void SetId(TId& value);
    TId& SetId(void);

    /// bioseq-set
    /// mandatory
    /// typedef CBioseq_set TSet
    ///  Check whether the Set data member has been assigned a value.
    bool IsSetSet(void) const;
    /// Check whether it is safe or not to call GetSet method.
    bool CanGetSet(void) const;
    void ResetSet(void);
    const TSet& GetSet(void) const;
    void SetSet(TSet& value);
    TSet& SetSet(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSeqEdit_Cmd_AttachSet_Base(const CSeqEdit_Cmd_AttachSet_Base&);
    CSeqEdit_Cmd_AttachSet_Base& operator=(const CSeqEdit_Cmd_AttachSet_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TId > m_Id;
    CRef< TSet > m_Set;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSeqEdit_Cmd_AttachSet_Base::IsSetId(void) const
{
    return m_Id.NotEmpty();
}

inline
bool CSeqEdit_Cmd_AttachSet_Base::CanGetId(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_AttachSet_Base::TId& CSeqEdit_Cmd_AttachSet_Base::GetId(void) const
{
    if ( !m_Id ) {
        const_cast<CSeqEdit_Cmd_AttachSet_Base*>(this)->ResetId();
    }
    return (*m_Id);
}

inline
CSeqEdit_Cmd_AttachSet_Base::TId& CSeqEdit_Cmd_AttachSet_Base::SetId(void)
{
    if ( !m_Id ) {
        ResetId();
    }
    return (*m_Id);
}

inline
bool CSeqEdit_Cmd_AttachSet_Base::IsSetSet(void) const
{
    return m_Set.NotEmpty();
}

inline
bool CSeqEdit_Cmd_AttachSet_Base::CanGetSet(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_AttachSet_Base::TSet& CSeqEdit_Cmd_AttachSet_Base::GetSet(void) const
{
    if ( !m_Set ) {
        const_cast<CSeqEdit_Cmd_AttachSet_Base*>(this)->ResetSet();
    }
    return (*m_Set);
}

inline
CSeqEdit_Cmd_AttachSet_Base::TSet& CSeqEdit_Cmd_AttachSet_Base::SetSet(void)
{
    if ( !m_Set ) {
        ResetSet();
    }
    return (*m_Set);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQEDIT_SEQEDIT_CMD_ATTACHSET_BASE_HPP
