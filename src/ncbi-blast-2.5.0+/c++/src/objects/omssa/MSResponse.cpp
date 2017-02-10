/* $Id: MSResponse.cpp 397613 2013-04-29 16:10:52Z grichenk $
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
 * Author:  .......
 *
 * File Description:
 *   .......
 *
 * Remark:
 *   This code was originally generated by application DATATOOL
 *   using the following specifications:
 *   'omssa.asn'.
 */

// standard includes
#include <ncbi_pch.hpp>

// generated includes
#include <objects/omssa/MSResponse.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

// destructor
CMSResponse::~CMSResponse(void)
{
}

///////////////////////////////////////////////////////////////////
// interfaces implementation for Print .csv
///////////////////////////////////////////////////////////////////
string CMSResponse::CSVString(const string& in)
{
  
    string retval;
    retval = NStr::Replace(in, "\"", "\"\"");
    if(retval.find_first_of(",\"") < retval.size()) retval = "\"" + retval + "\"";
    return retval;
}

void CMSResponse::PrintCSV(ostream& os, CRef <CMSModSpecSet> ModSet)   
{
	if(!CanGetHitsets() ) return;

        os.precision(15);

	os << "Spectrum number, Filename/id, Peptide, E-value, Mass, gi, Accession, Start, Stop, Defline, Mods, Charge, Theo Mass, P-value, NIST score" << endl;
    // read out hits
    
    CMSResponse::THitsets::const_iterator iHits;
    iHits = GetHitsets().begin();
	double fMZ_scale = CanGetScale() ? GetScale() :  100.0;
    for(; iHits != GetHitsets().end(); iHits++)  
	{
		CRef< CMSHitSet > HitSet =  *iHits;
        if( HitSet-> CanGetError() && HitSet->GetError() == eMSHitError_notenuffpeaks) 
		{
            continue;
        }

        CRef< CMSHits > Hit;
        CMSHitSet::THits::const_iterator iHit; 
        CMSHits::TPephits::const_iterator iPephit;
        for(iHit = HitSet->GetHits().begin(); iHit != HitSet->GetHits().end(); iHit++) 
		{
            string id;
            if (HitSet->GetIds().begin() != HitSet->GetIds().end())
				id = *(HitSet->GetIds().begin());
            double NISTScore (0.0L);
            if ((*iHit)->CanGetScores()) {
                ITERATE(CMSHits::TScores, iNISTScore, (*iHit)->GetScores()) {
                    if((*iNISTScore)->GetName() == "NIST Score")
                        NISTScore = (*iNISTScore)->GetValue();
                }
            }

            for(iPephit = (*iHit)->GetPephits().begin(); iPephit != (*iHit)->GetPephits().end(); iPephit++) 
			{
                string PepString;
                (*iHit)->MakePepString(PepString);
                string ModString;
                (*iHit)->MakeModString(ModString, ModSet);  
                string Accession("");
                if((*iPephit)->CanGetAccession())
                    Accession = CSVString((*iPephit)->GetAccession());
                TGi Gi = ZERO_GI;
                if((*iPephit)->CanGetGi())
                    Gi = (*iPephit)->GetGi();
                os <<  HitSet->GetNumber() << "," << CSVString(id) << "," << 
                    CSVString(PepString) << "," << 
                     (*iHit)->GetEvalue() << "," << (*iHit)->GetMass()/fMZ_scale << "," << 
                    Gi << "," << Accession << "," <<
                    (*iPephit)->GetStart() + 1 << "," << (*iPephit)->GetStop() + 1 << "," <<
                    CSVString((*iPephit)->GetDefline()) << "," << CSVString(ModString) <<
                    "," << (*iHit)->GetCharge() << 
                    "," <<  (*iHit)->GetTheomass()/fMZ_scale <<
                    "," <<  (*iHit)->GetPvalue() << 
                    "," <<  NISTScore << endl;
            }
        }
    }
}
// ------------------------ END Print .csv ---------------------------------


void 
CMSResponse::GetOidsBelowThreshold(TOidSet& OidSet,
                                        const double Threshold) const
{
    ITERATE(THitsets, iHitSet, GetHitsets()) {
        ITERATE(CMSHitSet::THits, iHit, (*iHitSet)->GetHits()) {
            ITERATE(CMSHits::TPephits, iPepHit, (*iHit)->GetPephits()) {
                if((*iHit)->GetEvalue() <= Threshold) {
                    OidSet.insert((*iPepHit)->GetOid());
                }
            }
        }
    }
}   


CRef <CMSHitSet> 
CMSResponse::FindHitSet(const int Number) const
{
    ITERATE(THitsets, iHitSet, GetHitsets()) {
        if((*iHitSet)->GetNumber() == Number) return *iHitSet;
    }
    return null;
}


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

/* Original file checksum: lines: 65, chars: 1890, CRC32: 485ecdcb */