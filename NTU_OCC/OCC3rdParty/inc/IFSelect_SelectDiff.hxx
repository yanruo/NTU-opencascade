// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectDiff_HeaderFile
#define _IFSelect_SelectDiff_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IFSelect_SelectDiff.hxx>

#include <IFSelect_SelectControl.hxx>
#include <Standard_Boolean.hxx>
class Interface_EntityIterator;
class Interface_Graph;
class TCollection_AsciiString;


//! A SelectDiff keeps the entities from a Selection, the Main
//! Input, which are not listed by the Second Input
class IFSelect_SelectDiff : public IFSelect_SelectControl
{

public:

  
  //! Creates an empty SelectDiff
  Standard_EXPORT IFSelect_SelectDiff();
  
  //! Returns the list of selected entities : they are the Entities
  //! gotten from the Main Input but not from the Diff Input
  Standard_EXPORT   Interface_EntityIterator RootResult (const Interface_Graph& G)  const;
  
  //! Returns a text defining the criterium : "Difference"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectDiff)

protected:

  
  //! Returns always True, because RootResult gives a Unique list
  Standard_EXPORT virtual   Standard_Boolean HasUniqueResult()  const;



private: 




};







#endif // _IFSelect_SelectDiff_HeaderFile
