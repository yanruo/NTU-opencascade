// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_CheckStatus_HeaderFile
#define _Interface_CheckStatus_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Classifies checks
//! OK : check is empty  Warning : Warning, no Fail   Fail : Fail
//! Others to query :
//! Any : any status   Message : Warning/Fail  NoFail : Warning/OK
enum Interface_CheckStatus
{
Interface_CheckOK,
Interface_CheckWarning,
Interface_CheckFail,
Interface_CheckAny,
Interface_CheckMessage,
Interface_CheckNoFail
};

#endif // _Interface_CheckStatus_HeaderFile
