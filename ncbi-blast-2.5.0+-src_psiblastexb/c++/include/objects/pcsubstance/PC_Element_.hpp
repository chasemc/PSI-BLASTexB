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

/// @file PC_Element_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pcsubstance.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_PCSUBSTANCE_PC_ELEMENT_BASE_HPP
#define OBJECTS_PCSUBSTANCE_PC_ELEMENT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/// Element Information [which may contain "illegal" element values]
enum EPC_Element {
    ePC_Element_a  = 255,  ///< Illegal Atom Numbers that may be Interpreted to be something else  Unspecified Atom (Asterick)
    ePC_Element_d  = 254,  ///< Dummy Atom
    ePC_Element_r  = 253,  ///< Rgroup Label
    ePC_Element_lp = 252,  ///< Lone Pair
    ePC_Element_h  =   1,  ///< Elements
    ePC_Element_he =   2,
    ePC_Element_li =   3,
    ePC_Element_be =   4,
    ePC_Element_b  =   5,
    ePC_Element_c  =   6,
    ePC_Element_n  =   7,
    ePC_Element_o  =   8,
    ePC_Element_f  =   9,
    ePC_Element_ne =  10,
    ePC_Element_na =  11,
    ePC_Element_mg =  12,
    ePC_Element_al =  13,
    ePC_Element_si =  14,
    ePC_Element_p  =  15,
    ePC_Element_s  =  16,
    ePC_Element_cl =  17,
    ePC_Element_ar =  18,
    ePC_Element_k  =  19,
    ePC_Element_ca =  20,
    ePC_Element_sc =  21,
    ePC_Element_ti =  22,
    ePC_Element_v  =  23,
    ePC_Element_cr =  24,
    ePC_Element_mn =  25,
    ePC_Element_fe =  26,
    ePC_Element_co =  27,
    ePC_Element_ni =  28,
    ePC_Element_cu =  29,
    ePC_Element_zn =  30,
    ePC_Element_ga =  31,
    ePC_Element_ge =  32,
    ePC_Element_as =  33,
    ePC_Element_se =  34,
    ePC_Element_br =  35,
    ePC_Element_kr =  36,
    ePC_Element_rb =  37,
    ePC_Element_sr =  38,
    ePC_Element_y  =  39,
    ePC_Element_zr =  40,
    ePC_Element_nb =  41,
    ePC_Element_mo =  42,
    ePC_Element_tc =  43,
    ePC_Element_ru =  44,
    ePC_Element_rh =  45,
    ePC_Element_pd =  46,
    ePC_Element_ag =  47,
    ePC_Element_cd =  48,
    ePC_Element_in =  49,
    ePC_Element_sn =  50,
    ePC_Element_sb =  51,
    ePC_Element_te =  52,
    ePC_Element_i  =  53,
    ePC_Element_xe =  54,
    ePC_Element_cs =  55,
    ePC_Element_ba =  56,
    ePC_Element_la =  57,
    ePC_Element_ce =  58,
    ePC_Element_pr =  59,
    ePC_Element_nd =  60,
    ePC_Element_pm =  61,
    ePC_Element_sm =  62,
    ePC_Element_eu =  63,
    ePC_Element_gd =  64,
    ePC_Element_tb =  65,
    ePC_Element_dy =  66,
    ePC_Element_ho =  67,
    ePC_Element_er =  68,
    ePC_Element_tm =  69,
    ePC_Element_yb =  70,
    ePC_Element_lu =  71,
    ePC_Element_hf =  72,
    ePC_Element_ta =  73,
    ePC_Element_w  =  74,
    ePC_Element_re =  75,
    ePC_Element_os =  76,
    ePC_Element_ir =  77,
    ePC_Element_pt =  78,
    ePC_Element_au =  79,
    ePC_Element_hg =  80,
    ePC_Element_tl =  81,
    ePC_Element_pb =  82,
    ePC_Element_bi =  83,
    ePC_Element_po =  84,
    ePC_Element_at =  85,
    ePC_Element_rn =  86,
    ePC_Element_fr =  87,
    ePC_Element_ra =  88,
    ePC_Element_ac =  89,
    ePC_Element_th =  90,
    ePC_Element_pa =  91,
    ePC_Element_u  =  92,
    ePC_Element_np =  93,
    ePC_Element_pu =  94,
    ePC_Element_am =  95,
    ePC_Element_cm =  96,
    ePC_Element_bk =  97,
    ePC_Element_cf =  98,
    ePC_Element_es =  99,
    ePC_Element_fm = 100,
    ePC_Element_md = 101,
    ePC_Element_no = 102,
    ePC_Element_lr = 103,
    ePC_Element_rf = 104,
    ePC_Element_db = 105,
    ePC_Element_sg = 106,
    ePC_Element_bh = 107,
    ePC_Element_hs = 108,
    ePC_Element_mt = 109,
    ePC_Element_ds = 110,
    ePC_Element_rg = 111
};

/// Access to EPC_Element's attributes (values, names) as defined in spec
NCBI_PCSUBSTANCE_EXPORT const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EPC_Element)(void);


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCSUBSTANCE_PC_ELEMENT_BASE_HPP
