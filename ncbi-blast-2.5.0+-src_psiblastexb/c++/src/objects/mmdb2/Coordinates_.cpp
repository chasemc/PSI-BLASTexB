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
 *   'mmdb2.asn'.
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
#include <objects/mmdb2/Coordinates.hpp>
#include <objects/mmdb2/Atomic_coordinates.hpp>
#include <objects/mmdb2/Density_coordinates.hpp>
#include <objects/mmdb2/Surface_coordinates.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CCoordinates_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CCoordinates_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Atomic:
    case e_Surface:
    case e_Density:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CCoordinates_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Atomic:
        (m_object = new(pool) ncbi::objects::CAtomic_coordinates())->AddReference();
        break;
    case e_Surface:
        (m_object = new(pool) ncbi::objects::CSurface_coordinates())->AddReference();
        break;
    case e_Density:
        (m_object = new(pool) ncbi::objects::CDensity_coordinates())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CCoordinates_Base::sm_SelectionNames[] = {
    "not set",
    "atomic",
    "surface",
    "density"
};

NCBI_NS_STD::string CCoordinates_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CCoordinates_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CCoordinates_Base::TAtomic& CCoordinates_Base::GetAtomic(void) const
{
    CheckSelected(e_Atomic);
    return *static_cast<const TAtomic*>(m_object);
}

CCoordinates_Base::TAtomic& CCoordinates_Base::SetAtomic(void)
{
    Select(e_Atomic, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAtomic*>(m_object);
}

void CCoordinates_Base::SetAtomic(CCoordinates_Base::TAtomic& value)
{
    TAtomic* ptr = &value;
    if ( m_choice != e_Atomic || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Atomic;
    }
}

const CCoordinates_Base::TSurface& CCoordinates_Base::GetSurface(void) const
{
    CheckSelected(e_Surface);
    return *static_cast<const TSurface*>(m_object);
}

CCoordinates_Base::TSurface& CCoordinates_Base::SetSurface(void)
{
    Select(e_Surface, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSurface*>(m_object);
}

void CCoordinates_Base::SetSurface(CCoordinates_Base::TSurface& value)
{
    TSurface* ptr = &value;
    if ( m_choice != e_Surface || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Surface;
    }
}

const CCoordinates_Base::TDensity& CCoordinates_Base::GetDensity(void) const
{
    CheckSelected(e_Density);
    return *static_cast<const TDensity*>(m_object);
}

CCoordinates_Base::TDensity& CCoordinates_Base::SetDensity(void)
{
    Select(e_Density, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TDensity*>(m_object);
}

void CCoordinates_Base::SetDensity(CCoordinates_Base::TDensity& value)
{
    TDensity* ptr = &value;
    if ( m_choice != e_Density || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Density;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Coordinates", CCoordinates)
{
    SET_CHOICE_MODULE("MMDB-Structural-model");
    ADD_NAMED_REF_CHOICE_VARIANT("atomic", m_object, CAtomic_coordinates);
    ADD_NAMED_REF_CHOICE_VARIANT("surface", m_object, CSurface_coordinates);
    ADD_NAMED_REF_CHOICE_VARIANT("density", m_object, CDensity_coordinates);
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CCoordinates_Base::CCoordinates_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CCoordinates_Base::~CCoordinates_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

