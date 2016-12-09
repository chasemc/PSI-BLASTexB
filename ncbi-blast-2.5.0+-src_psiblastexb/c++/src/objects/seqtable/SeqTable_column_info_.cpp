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
 *   'seqtable.asn'.
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
#include <objects/seqtable/SeqTable_column_info.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CSeqTable_column_info_Base::, EField_id, true)
{
    SET_ENUM_INTERNAL_NAME("SeqTable-column-info", "field-id");
    SET_ENUM_MODULE("NCBI-SeqTable");
    ADD_ENUM_VALUE("location", eField_id_location);
    ADD_ENUM_VALUE("location-id", eField_id_location_id);
    ADD_ENUM_VALUE("location-gi", eField_id_location_gi);
    ADD_ENUM_VALUE("location-from", eField_id_location_from);
    ADD_ENUM_VALUE("location-to", eField_id_location_to);
    ADD_ENUM_VALUE("location-strand", eField_id_location_strand);
    ADD_ENUM_VALUE("location-fuzz-from-lim", eField_id_location_fuzz_from_lim);
    ADD_ENUM_VALUE("location-fuzz-to-lim", eField_id_location_fuzz_to_lim);
    ADD_ENUM_VALUE("product", eField_id_product);
    ADD_ENUM_VALUE("product-id", eField_id_product_id);
    ADD_ENUM_VALUE("product-gi", eField_id_product_gi);
    ADD_ENUM_VALUE("product-from", eField_id_product_from);
    ADD_ENUM_VALUE("product-to", eField_id_product_to);
    ADD_ENUM_VALUE("product-strand", eField_id_product_strand);
    ADD_ENUM_VALUE("product-fuzz-from-lim", eField_id_product_fuzz_from_lim);
    ADD_ENUM_VALUE("product-fuzz-to-lim", eField_id_product_fuzz_to_lim);
    ADD_ENUM_VALUE("id-local", eField_id_id_local);
    ADD_ENUM_VALUE("xref-id-local", eField_id_xref_id_local);
    ADD_ENUM_VALUE("partial", eField_id_partial);
    ADD_ENUM_VALUE("comment", eField_id_comment);
    ADD_ENUM_VALUE("title", eField_id_title);
    ADD_ENUM_VALUE("ext", eField_id_ext);
    ADD_ENUM_VALUE("qual", eField_id_qual);
    ADD_ENUM_VALUE("dbxref", eField_id_dbxref);
    ADD_ENUM_VALUE("data-imp-key", eField_id_data_imp_key);
    ADD_ENUM_VALUE("data-region", eField_id_data_region);
    ADD_ENUM_VALUE("data-cdregion-frame", eField_id_data_cdregion_frame);
    ADD_ENUM_VALUE("ext-type", eField_id_ext_type);
    ADD_ENUM_VALUE("qual-qual", eField_id_qual_qual);
    ADD_ENUM_VALUE("qual-val", eField_id_qual_val);
    ADD_ENUM_VALUE("dbxref-db", eField_id_dbxref_db);
    ADD_ENUM_VALUE("dbxref-tag", eField_id_dbxref_tag);
}
END_ENUM_INFO

void CSeqTable_column_info_Base::ResetTitle(void)
{
    m_Title.erase();
    m_set_State[0] &= ~0x3;
}

void CSeqTable_column_info_Base::ResetField_name(void)
{
    m_Field_name.erase();
    m_set_State[0] &= ~0x30;
}

void CSeqTable_column_info_Base::Reset(void)
{
    ResetTitle();
    ResetField_id();
    ResetField_name();
}

BEGIN_NAMED_BASE_CLASS_INFO("SeqTable-column-info", CSeqTable_column_info)
{
    SET_CLASS_MODULE("NCBI-SeqTable");
    ADD_NAMED_STD_MEMBER("title", m_Title)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_ENUM_MEMBER("field-id", m_Field_id, EField_id)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("field-name", m_Field_name)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CSeqTable_column_info_Base::CSeqTable_column_info_Base(void)
    : m_Field_id((EField_id)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CSeqTable_column_info_Base::~CSeqTable_column_info_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
