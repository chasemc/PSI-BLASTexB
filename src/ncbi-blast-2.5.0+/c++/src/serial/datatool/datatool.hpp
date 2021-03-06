#ifndef DATATOOL__HPP
#define DATATOOL__HPP

/*  $Id: datatool.hpp 507796 2016-07-21 17:25:37Z gouriano $
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
* Author: Eugene Vasilchenko
*
* File Description:
*   !!! PUT YOUR DESCRIPTION HERE !!!
*/

#include <corelib/ncbistd.hpp>
#include <corelib/ncbiapp.hpp>
#include "generate.hpp"
#include "fileutil.hpp"
#include <list>

BEGIN_NCBI_SCOPE

#define DATATOOL_VERSION_MAJOR  2
#define DATATOOL_VERSION_MINOR 16
#define DATATOOL_VERSION_PATCH  0
const size_t DATATOOL_VERSION = DATATOOL_VERSION_MAJOR*10000 + DATATOOL_VERSION_MINOR*100 + DATATOOL_VERSION_PATCH; 

class CArgs;
class CFileSet;

class CDataTool : public CNcbiApplication
{
public:
    CDataTool(void);
    void Init(void);
    int Run(void);
    
    string GetConfigValue(const string& section, const string& name) const;
    bool HasConfig(void) const;

private:
    bool ProcessModules(void);
    bool ProcessData(void);
    bool GenerateCode(bool undo=false);

    SourceFile::EType LoadDefinitions(
        CFileSet& fileSet, const list <string>& modulesPath,
        const CArgValue::TStringArray& names,
        bool split_names,
        SourceFile::EType srctype = SourceFile::eUnknown);

    CCodeGenerator generator;
};

END_NCBI_SCOPE

#endif  /* DATATOOL__HPP */
