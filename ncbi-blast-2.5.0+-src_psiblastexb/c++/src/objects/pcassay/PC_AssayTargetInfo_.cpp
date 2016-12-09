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
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'pcassay.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <objects/pcassay/PC_AssayTargetInfo.hpp>
#include <objects/seqfeat/BioSource.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CPC_AssayTargetInfo_Base::, EMolecule_type, true)
{
    SET_ENUM_INTERNAL_NAME("PC-AssayTargetInfo", "molecule-type");
    SET_ENUM_MODULE("NCBI-PCAssay");
    ADD_ENUM_VALUE("protein", eMolecule_type_protein);
    ADD_ENUM_VALUE("dna", eMolecule_type_dna);
    ADD_ENUM_VALUE("rna", eMolecule_type_rna);
    ADD_ENUM_VALUE("gene", eMolecule_type_gene);
    ADD_ENUM_VALUE("biosystem", eMolecule_type_biosystem);
    ADD_ENUM_VALUE("other", eMolecule_type_other);
}
END_ENUM_INFO

void CPC_AssayTargetInfo_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0x3;
}

void CPC_AssayTargetInfo_Base::ResetOrganism(void)
{
    m_Organism.Reset();
}

void CPC_AssayTargetInfo_Base::SetOrganism(CPC_AssayTargetInfo_Base::TOrganism& value)
{
    m_Organism.Reset(&value);
}

CPC_AssayTargetInfo_Base::TOrganism& CPC_AssayTargetInfo_Base::SetOrganism(void)
{
    if ( !m_Organism )
        m_Organism.Reset(new ncbi::objects::CBioSource());
    return (*m_Organism);
}

void CPC_AssayTargetInfo_Base::ResetDescr(void)
{
    m_Descr.erase();
    m_set_State[0] &= ~0x300;
}

void CPC_AssayTargetInfo_Base::ResetComment(void)
{
    m_Comment.clear();
    m_set_State[0] &= ~0xc00;
}

void CPC_AssayTargetInfo_Base::Reset(void)
{
    ResetName();
    ResetMol_id();
    ResetMolecule_type();
    ResetOrganism();
    ResetDescr();
    ResetComment();
}

BEGIN_NAMED_BASE_CLASS_INFO("PC-AssayTargetInfo", CPC_AssayTargetInfo)
{
    SET_CLASS_MODULE("NCBI-PCAssay");
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("mol-id", m_Mol_id)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("molecule-type", m_Molecule_type, EMolecule_type)->SetDefault(new TMolecule_type(eMolecule_type_protein))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("organism", m_Organism, CBioSource)->SetOptional();
    ADD_NAMED_STD_MEMBER("descr", m_Descr)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("comment", m_Comment, STL_list, (STD, (string)))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CPC_AssayTargetInfo_Base::CPC_AssayTargetInfo_Base(void)
    : m_Mol_id(0), m_Molecule_type(eMolecule_type_protein)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CPC_AssayTargetInfo_Base::~CPC_AssayTargetInfo_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

