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

/// @file Chem_graph_alignment_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB3_CHEM_GRAPH_ALIGNMENT_BASE_HPP
#define OBJECTS_MMDB3_CHEM_GRAPH_ALIGNMENT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CAlign_stats;
class CBiostruc_id;
class CChem_graph_pntrs;
class CTransform;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// A biostruc alignment establishes an equivalence of nodes in the chemical
/// graphs of two or more biostrucs. This may be mapped to a sequence
/// alignment in the case of biopolymers.
/// The 'dimension' component indicates the number of participants
/// in the alignment.  For pairwise alignments, such as VAST 
/// structure-structure alignments, the dimension will be always 2, with
/// biostruc-ids, alignment, and domain each containing two entries for an  
/// aligned pair.  The 'alignment' component contains a pair of Chem-graph-pntrs
/// specifying a like number of corresponding residues in each structure.
/// The 'domain' component specifies a region of each structure considered 
/// in the alignment.  Only one transform (for the second structure) and
/// one aligndata (for the pair) are provided for each VAST alignment.
///
/// For multiple alignments, a set of components are treated as
/// parallel arrays of length 'dimension'.
/// The 'transform' component moves each structure to align it with
/// the structure specified as the first element in the "parallel" array,
/// so necessarily the first transform is a NULL transform.
/// Align-stats are placeholders for scores.
class NCBI_MMDB3_EXPORT CChem_graph_alignment_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CChem_graph_alignment_Base(void);
    // destructor
    virtual ~CChem_graph_alignment_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TDimension;
    typedef list< CRef< CBiostruc_id > > TBiostruc_ids;
    typedef list< CRef< CChem_graph_pntrs > > TAlignment;
    typedef list< CRef< CChem_graph_pntrs > > TDomain;
    typedef list< CRef< CTransform > > TTransform;
    typedef list< CRef< CAlign_stats > > TAligndata;

    // getters
    // setters

    /// optional with default 2
    /// typedef int TDimension
    ///  Check whether the Dimension data member has been assigned a value.
    bool IsSetDimension(void) const;
    /// Check whether it is safe or not to call GetDimension method.
    bool CanGetDimension(void) const;
    void ResetDimension(void);
    void SetDefaultDimension(void);
    TDimension GetDimension(void) const;
    void SetDimension(TDimension value);
    TDimension& SetDimension(void);

    /// mandatory
    /// typedef list< CRef< CBiostruc_id > > TBiostruc_ids
    ///  Check whether the Biostruc_ids data member has been assigned a value.
    bool IsSetBiostruc_ids(void) const;
    /// Check whether it is safe or not to call GetBiostruc_ids method.
    bool CanGetBiostruc_ids(void) const;
    void ResetBiostruc_ids(void);
    const TBiostruc_ids& GetBiostruc_ids(void) const;
    TBiostruc_ids& SetBiostruc_ids(void);

    /// mandatory
    /// typedef list< CRef< CChem_graph_pntrs > > TAlignment
    ///  Check whether the Alignment data member has been assigned a value.
    bool IsSetAlignment(void) const;
    /// Check whether it is safe or not to call GetAlignment method.
    bool CanGetAlignment(void) const;
    void ResetAlignment(void);
    const TAlignment& GetAlignment(void) const;
    TAlignment& SetAlignment(void);

    /// optional
    /// typedef list< CRef< CChem_graph_pntrs > > TDomain
    ///  Check whether the Domain data member has been assigned a value.
    bool IsSetDomain(void) const;
    /// Check whether it is safe or not to call GetDomain method.
    bool CanGetDomain(void) const;
    void ResetDomain(void);
    const TDomain& GetDomain(void) const;
    TDomain& SetDomain(void);

    /// optional
    /// typedef list< CRef< CTransform > > TTransform
    ///  Check whether the Transform data member has been assigned a value.
    bool IsSetTransform(void) const;
    /// Check whether it is safe or not to call GetTransform method.
    bool CanGetTransform(void) const;
    void ResetTransform(void);
    const TTransform& GetTransform(void) const;
    TTransform& SetTransform(void);

    /// optional
    /// typedef list< CRef< CAlign_stats > > TAligndata
    ///  Check whether the Aligndata data member has been assigned a value.
    bool IsSetAligndata(void) const;
    /// Check whether it is safe or not to call GetAligndata method.
    bool CanGetAligndata(void) const;
    void ResetAligndata(void);
    const TAligndata& GetAligndata(void) const;
    TAligndata& SetAligndata(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CChem_graph_alignment_Base(const CChem_graph_alignment_Base&);
    CChem_graph_alignment_Base& operator=(const CChem_graph_alignment_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Dimension;
    list< CRef< CBiostruc_id > > m_Biostruc_ids;
    list< CRef< CChem_graph_pntrs > > m_Alignment;
    list< CRef< CChem_graph_pntrs > > m_Domain;
    list< CRef< CTransform > > m_Transform;
    list< CRef< CAlign_stats > > m_Aligndata;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CChem_graph_alignment_Base::IsSetDimension(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CChem_graph_alignment_Base::CanGetDimension(void) const
{
    return true;
}

inline
void CChem_graph_alignment_Base::ResetDimension(void)
{
    m_Dimension = 2;
    m_set_State[0] &= ~0x3;
}

inline
void CChem_graph_alignment_Base::SetDefaultDimension(void)
{
    ResetDimension();
}

inline
CChem_graph_alignment_Base::TDimension CChem_graph_alignment_Base::GetDimension(void) const
{
    return m_Dimension;
}

inline
void CChem_graph_alignment_Base::SetDimension(CChem_graph_alignment_Base::TDimension value)
{
    m_Dimension = value;
    m_set_State[0] |= 0x3;
}

inline
CChem_graph_alignment_Base::TDimension& CChem_graph_alignment_Base::SetDimension(void)
{
#ifdef _DEBUG
    if (!IsSetDimension()) {
        memset(&m_Dimension,UnassignedByte(),sizeof(m_Dimension));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Dimension;
}

inline
bool CChem_graph_alignment_Base::IsSetBiostruc_ids(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CChem_graph_alignment_Base::CanGetBiostruc_ids(void) const
{
    return true;
}

inline
const CChem_graph_alignment_Base::TBiostruc_ids& CChem_graph_alignment_Base::GetBiostruc_ids(void) const
{
    return m_Biostruc_ids;
}

inline
CChem_graph_alignment_Base::TBiostruc_ids& CChem_graph_alignment_Base::SetBiostruc_ids(void)
{
    m_set_State[0] |= 0x4;
    return m_Biostruc_ids;
}

inline
bool CChem_graph_alignment_Base::IsSetAlignment(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CChem_graph_alignment_Base::CanGetAlignment(void) const
{
    return true;
}

inline
const CChem_graph_alignment_Base::TAlignment& CChem_graph_alignment_Base::GetAlignment(void) const
{
    return m_Alignment;
}

inline
CChem_graph_alignment_Base::TAlignment& CChem_graph_alignment_Base::SetAlignment(void)
{
    m_set_State[0] |= 0x10;
    return m_Alignment;
}

inline
bool CChem_graph_alignment_Base::IsSetDomain(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CChem_graph_alignment_Base::CanGetDomain(void) const
{
    return true;
}

inline
const CChem_graph_alignment_Base::TDomain& CChem_graph_alignment_Base::GetDomain(void) const
{
    return m_Domain;
}

inline
CChem_graph_alignment_Base::TDomain& CChem_graph_alignment_Base::SetDomain(void)
{
    m_set_State[0] |= 0x40;
    return m_Domain;
}

inline
bool CChem_graph_alignment_Base::IsSetTransform(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CChem_graph_alignment_Base::CanGetTransform(void) const
{
    return true;
}

inline
const CChem_graph_alignment_Base::TTransform& CChem_graph_alignment_Base::GetTransform(void) const
{
    return m_Transform;
}

inline
CChem_graph_alignment_Base::TTransform& CChem_graph_alignment_Base::SetTransform(void)
{
    m_set_State[0] |= 0x100;
    return m_Transform;
}

inline
bool CChem_graph_alignment_Base::IsSetAligndata(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CChem_graph_alignment_Base::CanGetAligndata(void) const
{
    return true;
}

inline
const CChem_graph_alignment_Base::TAligndata& CChem_graph_alignment_Base::GetAligndata(void) const
{
    return m_Aligndata;
}

inline
CChem_graph_alignment_Base::TAligndata& CChem_graph_alignment_Base::SetAligndata(void)
{
    m_set_State[0] |= 0x400;
    return m_Aligndata;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_CHEM_GRAPH_ALIGNMENT_BASE_HPP