// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_FileParameter_HeaderFile
#define _Interface_FileParameter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Interface_ParamType.hxx>
#include <Standard_PCharacter.hxx>
#include <Standard_Integer.hxx>
#include <Standard_CString.hxx>
class TCollection_AsciiString;


//! Auxiliary class to store a litteral parameter in a file
//! intermediate directory or in an UndefinedContent : a reference
//! type Parameter detains an Integer which is used to address a
//! record in the directory.
//! FileParameter is intended to be stored in a ParamSet : hence
//! memory management is performed by ParamSet, which calls Clear
//! to work, while the Destructor (see Destroy) does nothing.
//! Also a FileParameter can be read for consultation only, not to
//! be read from a Structure to be included into another one.
class Interface_FileParameter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Interface_FileParameter();
  
  //! Fills fields (with Entity Number set to zero)
  Standard_EXPORT   void Init (const TCollection_AsciiString& val, const Interface_ParamType typ) ;
  
  //! Same as above, but builds the Value from a CString
  Standard_EXPORT   void Init (const Standard_CString val, const Interface_ParamType typ) ;
  
  //! Same as above, but as a CString (for immediate exploitation)
  //! was C++ : return const
  Standard_EXPORT   Standard_CString CValue()  const;
  
  //! Returns the type of the parameter
  Standard_EXPORT   Interface_ParamType ParamType()  const;
  
  //! Allows to set a reference to an Entity in a numbered list
  Standard_EXPORT   void SetEntityNumber (const Standard_Integer num) ;
  
  //! Returns value set by SetEntityNumber
  Standard_EXPORT   Standard_Integer EntityNumber()  const;
  
  //! Clears stored data : frees memory taken for the String Value
  Standard_EXPORT   void Clear() ;
  
  //! Destructor. Does nothing because Memory is managed by ParamSet
  Standard_EXPORT   void Destroy() ;
~Interface_FileParameter()
{
  Destroy();
}




protected:





private:



  Interface_ParamType thetype;
  Standard_PCharacter theval;
  Standard_Integer thenum;


};







#endif // _Interface_FileParameter_HeaderFile