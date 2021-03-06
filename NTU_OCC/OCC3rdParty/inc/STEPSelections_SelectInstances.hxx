// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_SelectInstances_HeaderFile
#define _STEPSelections_SelectInstances_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_STEPSelections_SelectInstances.hxx>

#include <IFSelect_SelectExplore.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
class Interface_EntityIterator;
class Interface_Graph;
class Standard_Transient;
class TCollection_AsciiString;



class STEPSelections_SelectInstances : public IFSelect_SelectExplore
{

public:

  
  Standard_EXPORT STEPSelections_SelectInstances();
  
  Standard_EXPORT   Interface_EntityIterator RootResult (const Interface_Graph& G)  const;
  
  Standard_EXPORT   Standard_Boolean Explore (const Standard_Integer level, const Handle(Standard_Transient)& ent, const Interface_Graph& G, Interface_EntityIterator& explored)  const;
  
  //! Returns a text defining the criterium : "Instances"
  Standard_EXPORT   TCollection_AsciiString ExploreLabel()  const;




  DEFINE_STANDARD_RTTI(STEPSelections_SelectInstances)

protected:

  
  Standard_EXPORT virtual   Standard_Boolean HasUniqueResult()  const;



private: 




};







#endif // _STEPSelections_SelectInstances_HeaderFile
