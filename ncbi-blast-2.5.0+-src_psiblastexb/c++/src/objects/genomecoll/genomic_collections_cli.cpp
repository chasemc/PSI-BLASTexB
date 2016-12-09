/* $Id: genomic_collections_cli.cpp 512198 2016-08-29 14:17:45Z ivanov $
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
 * Author:  Vinay Kumar
 *
 * File Description:
 *   .......
 *
 * Remark:
 *   This code was originally generated by application DATATOOL
 *   using the following specifications:
 *   'gencoll_client.asn'.
 */

// standard includes
#include <ncbi_pch.hpp>

// generated includes
#include <objects/genomecoll/genomic_collections_cli.hpp>
#include <objects/genomecoll/GCClient_AssemblyInfo.hpp>
#include <objects/genomecoll/GCClient_AssemblySequenceI.hpp>
#include <objects/genomecoll/GCClient_AssembliesForSequ.hpp>
#include <objects/genomecoll/GCClient_Error.hpp>
#include <objects/genomecoll/GC_Assembly.hpp>
#include <objects/genomecoll/GCClient_ValidateChrTypeLo.hpp>
#include <objects/genomecoll/GCClient_EquivalentAssembl.hpp>
#include <objects/genomecoll/GCClient_GetEquivalentAsse.hpp>
#include <objects/genomecoll/GCClient_GetAssemblyBlobRe.hpp>
#include <objects/genomecoll/cached_assembly.hpp>
#include <sstream>

// generated classes

BEGIN_NCBI_SCOPE
BEGIN_objects_SCOPE

static const STimeout kTimeout = {600, 0};

CGenomicCollectionsService::CGenomicCollectionsService()
{
    SetTimeout(&kTimeout);
    SetRetryLimit(20);
}

template<typename TReq>
void LogRequest(const TReq& req)
{
#ifdef _DEBUG
    ostringstream ostrstrm;
    ostrstrm << "Making request -" << MSerial_AsnText << req;
    LOG_POST(Info << ostrstrm.str());
#endif
}

static void ValidateAsmAccession(const string& acc)
{
    if(acc.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_.") != string::npos)
        NCBI_THROW(CException, eUnknown, "Invalid accession format: " + acc);
}

CRef<CGC_Assembly> CGenomicCollectionsService::GetAssembly(const string& acc_,
                                            int level, 
                                            int asmAttrFlags, 
                                            int chrAttrFlags, 
                                            int scafAttrFlags, 
                                            int compAttrFlags)
{
    string acc = NStr::TruncateSpaces(acc_);
    ValidateAsmAccession(acc);

    CGCClient_GetAssemblyRequest req;
    CGCClientResponse reply;

    req.SetAccession(acc);
    req.SetLevel(level);
    req.SetAssm_flags(asmAttrFlags);
    req.SetChrom_flags(chrAttrFlags);
    req.SetScaf_flags(scafAttrFlags);
    req.SetComponent_flags(compAttrFlags);

    LogRequest(req);

    try {
        return AskGet_assembly(req, &reply);
    } catch (CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_THROW(CException, eUnknown, reply.GetSrvr_error().GetDescription());
        }
        throw;
    }
}


CRef<CGC_Assembly> CGenomicCollectionsService::GetAssembly(int releaseId, 
                                            int level, 
                                            int asmAttrFlags, 
                                            int chrAttrFlags, 
                                            int scafAttrFlags, 
                                            int compAttrFlags)
{
    CGCClient_GetAssemblyRequest req;
    CGCClientResponse reply;

    req.SetRelease_id(releaseId);
    req.SetLevel(level);
    req.SetAssm_flags(asmAttrFlags);
    req.SetChrom_flags(chrAttrFlags);
    req.SetScaf_flags(scafAttrFlags);
    req.SetComponent_flags(compAttrFlags);

    LogRequest(req);

    try {
        return AskGet_assembly(req, &reply);
    } catch (CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_THROW(CException, eUnknown, reply.GetSrvr_error().GetDescription());
        }
        throw;
    }
}

static string ToStringMode(CGCClient_GetAssemblyRequest::EAssemblyMode mode)
{
    switch (mode) {
        case CGCClient_GetAssemblyRequest::eAssemblyMode_assembly_only: return "AssemblyOnly";
        case CGCClient_GetAssemblyRequest::eAssemblyMode_eukaryotic_annotation: return "EukAnnotation";
        case CGCClient_GetAssemblyRequest::eAssemblyMode_prokaryotic_annotation: return "ProkAnnotation";
        case CGCClient_GetAssemblyRequest::eAssemblyMode_entrez_indexing: return "EntrezIndexing";
        case CGCClient_GetAssemblyRequest::eAssemblyMode_assembly_backend: return "AssemblyBackend";
        case CGCClient_GetAssemblyRequest::eAssemblyMode_sequence_names: return "SequenceNames";
        case CGCClient_GetAssemblyRequest::eAssemblyMode_ftp_export: return "AllSequencesWithAlignments";
        default: NCBI_THROW(CException, eUnknown, "GetAssembly: Illegal mode passed.");
    }
}

CRef<CGC_Assembly> CGenomicCollectionsService::GetAssembly(const string& acc_, CGCClient_GetAssemblyRequest::EAssemblyMode mode)
{
    string acc = NStr::TruncateSpaces(acc_);
    ValidateAsmAccession(acc);

    return GetAssembly(acc, ToStringMode(mode));
}

CRef<CGC_Assembly> CGenomicCollectionsService::GetAssembly(int releaseId, CGCClient_GetAssemblyRequest::EAssemblyMode mode)
{
    return GetAssembly(releaseId, ToStringMode(mode));
}

CRef<CGC_Assembly> CGenomicCollectionsService::GetAssembly(const string& acc_, const string& mode)
{
    string acc = NStr::TruncateSpaces(acc_);
    ValidateAsmAccession(acc);

    CGCClient_GetAssemblyBlobRequest req;
    CGCClientResponse reply;

    req.SetAccession(acc);
    req.SetMode(mode);

    LogRequest(req);

    try {
        return CCachedAssembly(AskGet_assembly_blob(req, &reply)).Assembly();
    } catch (CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_THROW(CException, eUnknown, reply.GetSrvr_error().GetDescription());
        }
        throw;
    }
}

CRef<CGC_Assembly> CGenomicCollectionsService::GetAssembly(int releaseId, const string& mode)
{
    CGCClient_GetAssemblyBlobRequest req;
    CGCClientResponse reply;

    req.SetRelease_id(releaseId);
    req.SetMode(mode);

    LogRequest(req);

    try {
        return CCachedAssembly(AskGet_assembly_blob(req, &reply)).Assembly();
    } catch (CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_THROW(CException, eUnknown, reply.GetSrvr_error().GetDescription());
        }
        throw;
    }
}

string CGenomicCollectionsService::ValidateChrType(const string& chrType, const string& chrLoc)
{
    CGCClient_ValidateChrTypeLocRequest req;
    CGCClientResponse reply;
    
    req.SetType(chrType);
    req.SetLocation(chrLoc);

    LogRequest(req);

    try {
        return AskGet_chrtype_valid(req, &reply);
    } catch (CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_THROW(CException, eUnknown, reply.GetSrvr_error().GetDescription());
        }
        throw;
    }
}


CRef<CGCClient_AssemblyInfo> CGenomicCollectionsService::FindBestAssembly(const string& seq_id, int filter_type, int sort_type)
{
    CGCClient_FindBestAssemblyRequest  req;
    CGCClientResponse reply;

    req.SetSeq_id_acc().push_back(seq_id);
    req.SetFilter(filter_type);
    req.SetSort(sort_type);
    req.SetAssembly_return_limit(1);

    LogRequest(req);

    try {
        CRef<CGCClient_AssembliesForSequences> assm = AskGet_best_assembly(req, &reply);

        return assm->CanGetAssemblies() && !assm->GetAssemblies().empty() ?
               CRef<CGCClient_AssemblyInfo>(&assm->SetAssemblies().front()->SetAssembly()) :
               CRef<CGCClient_AssemblyInfo>();
    } catch (const CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_REPORT_EXCEPTION(reply.GetSrvr_error().GetDescription(), ex);
        }
        throw;
    }
}


CRef<CGCClient_AssemblySequenceInfo> CGenomicCollectionsService::FindBestAssembly(const list<string>& seq_id, int filter_type, int sort_type)
{
    CGCClient_FindBestAssemblyRequest  req;
    CGCClientResponse reply;

    req.SetSeq_id_acc().assign(seq_id.begin(), seq_id.end());
    req.SetFilter(filter_type);
    req.SetSort(sort_type);
    req.SetAssembly_return_limit(1);

    LogRequest(req);

    try {
        CRef<CGCClient_AssembliesForSequences> assm = AskGet_best_assembly(req, &reply);

        return assm->CanGetAssemblies() && !assm->GetAssemblies().empty() ?
               CRef<CGCClient_AssemblySequenceInfo>(assm->SetAssemblies().front()) :
               CRef<CGCClient_AssemblySequenceInfo>();
    } catch (const CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_REPORT_EXCEPTION(reply.GetSrvr_error().GetDescription().c_str(), ex);
        }
        throw;
    }
}


CRef<CGCClient_AssembliesForSequences> CGenomicCollectionsService::FindAllAssemblies(const list<string>& seq_id, int filter_type, int sort_type)
{
    CGCClient_FindBestAssemblyRequest  req;
    CGCClientResponse reply;

    req.SetSeq_id_acc().assign(seq_id.begin(), seq_id.end());
    req.SetFilter(filter_type);
    req.SetSort(sort_type);

    LogRequest(req);

    try {
        CRef<CGCClient_AssembliesForSequences> assm = AskGet_best_assembly(req, &reply);

        return assm;
    } catch (const CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_REPORT_EXCEPTION(reply.GetSrvr_error().GetDescription(), ex);
        }
        throw;
    }
}


CRef<CGCClient_AssemblyInfo> CGenomicCollectionsService::FindOneAssemblyBySequences(const string& sequence_acc, int filter, CGCClient_GetAssemblyBySequenceRequest::ESort sort)
{
    CRef<CGCClient_AssemblySequenceInfo> asmseq_info(FindOneAssemblyBySequences(list<string>(1, sequence_acc), filter, sort));

    return asmseq_info ? CRef<CGCClient_AssemblyInfo>(&asmseq_info->SetAssembly()) : CRef<CGCClient_AssemblyInfo>();
}

CRef<CGCClient_AssemblySequenceInfo> CGenomicCollectionsService::FindOneAssemblyBySequences(const list<string>& sequence_acc, int filter, CGCClient_GetAssemblyBySequenceRequest::ESort sort)
{
    CRef<CGCClient_AssembliesForSequences> assm(FindAssembliesBySequences(sequence_acc, filter, sort, true));

    return assm->CanGetAssemblies() && !assm->GetAssemblies().empty() ?
           CRef<CGCClient_AssemblySequenceInfo>(assm->SetAssemblies().front()) :
           CRef<CGCClient_AssemblySequenceInfo>();
}

CRef<CGCClient_AssembliesForSequences> CGenomicCollectionsService::FindAssembliesBySequences(const string& sequence_acc, int filter, CGCClient_GetAssemblyBySequenceRequest::ESort sort)
{
    return FindAssembliesBySequences(list<string>(1, sequence_acc), filter, sort);
}

CRef<CGCClient_AssembliesForSequences> CGenomicCollectionsService::FindAssembliesBySequences(const list<string>& sequence_acc, int filter, CGCClient_GetAssemblyBySequenceRequest::ESort sort)
{
    return FindAssembliesBySequences(sequence_acc, filter, sort, false);
}
CRef<CGCClient_AssembliesForSequences> CGenomicCollectionsService::FindAssembliesBySequences(const list<string>& sequence_acc, int filter, CGCClient_GetAssemblyBySequenceRequest::ESort sort, bool top_only)

{
    CGCClient_GetAssemblyBySequenceRequest req;
    CGCClientResponse reply;

    for(auto acc : sequence_acc)
        if(acc.length() > 30) {
            NCBI_THROW(CException, eUnknown, "Accession is longer than 30 characters: " + acc);
        }

    req.SetSequence_acc().assign(sequence_acc.begin(), sequence_acc.end());
    req.SetFilter(filter);
    req.SetSort(sort);
    req.SetTop_assembly_only(top_only ? 1 : 0);

    LogRequest(req);

    try {
        CRef<CGCClient_AssembliesForSequences> assm = AskGet_assembly_by_sequence(req, &reply);

        return assm;
    } catch (const CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_REPORT_EXCEPTION(reply.GetSrvr_error().GetDescription(), ex);
        }
        throw;
    }
    return CRef<CGCClient_AssembliesForSequences>();
}


CRef<CGCClient_EquivalentAssemblies> CGenomicCollectionsService::GetEquivalentAssemblies(const string& acc, int equivalency)
{
    CGCClient_GetEquivalentAssembliesRequest req;
    CGCClientResponse reply;

    req.SetAccession(acc);
    req.SetEquivalency(equivalency);

    LogRequest(req);

    try {
        CRef<CGCClient_EquivalentAssemblies> assm = AskGet_equivalent_assemblies(req, &reply);

        return assm;
    } catch (const CException& ex) {
        if(reply.IsSrvr_error()) {
            NCBI_REPORT_EXCEPTION(reply.GetSrvr_error().GetDescription(), ex);
        }
        throw;
    }
}

END_objects_SCOPE
END_NCBI_SCOPE
