// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ObjMgt_ExternRef_HeaderFile
#define _ObjMgt_ExternRef_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_ObjMgt_ExternRef.hxx>

#include <Handle_PCollection_HAsciiString.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Persistent.hxx>
class PCollection_HAsciiString;


class ObjMgt_ExternRef : public Standard_Persistent
{

public:


ObjMgt_ExternRef( )
{
  
}
ObjMgt_ExternRef(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Handle(PCollection_HAsciiString) _CSFDB_GetObjMgt_ExternRefmyEntryId() const { return myEntryId; }
    void _CSFDB_SetObjMgt_ExternRefmyEntryId(const Handle(PCollection_HAsciiString)& p) { myEntryId = p; }
    Standard_Integer _CSFDB_GetObjMgt_ExternRefmyBindingIndex() const { return myBindingIndex; }
    void _CSFDB_SetObjMgt_ExternRefmyBindingIndex(const Standard_Integer p) { myBindingIndex = p; }



  DEFINE_STANDARD_RTTI(ObjMgt_ExternRef)

protected:




private: 


  Handle(PCollection_HAsciiString) myEntryId;
  Standard_Integer myBindingIndex;


};







#endif // _ObjMgt_ExternRef_HeaderFile