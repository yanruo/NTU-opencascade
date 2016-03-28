// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_IntVal_HeaderFile
#define _Interface_IntVal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Interface_IntVal.hxx>

#include <Standard_Integer.hxx>
#include <MMgt_TShared.hxx>


//! An Integer through a Handle (i.e. managed as TShared)
class Interface_IntVal : public MMgt_TShared
{

public:

  
  Standard_EXPORT Interface_IntVal();
  
  Standard_EXPORT   Standard_Integer Value()  const;
  
  Standard_EXPORT   Standard_Integer& CValue() ;




  DEFINE_STANDARD_RTTI(Interface_IntVal)

protected:




private: 


  Standard_Integer theval;


};







#endif // _Interface_IntVal_HeaderFile