// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_MapOfInteractive_HeaderFile
#define _AIS_MapOfInteractive_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_AIS_InteractiveObject.hxx>
#include <Handle_AIS_StdMapNodeOfMapOfInteractive.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class AIS_InteractiveObject;
class TColStd_MapTransientHasher;
class AIS_StdMapNodeOfMapOfInteractive;
class AIS_MapIteratorOfMapOfInteractive;



class AIS_MapOfInteractive  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_MapOfInteractive(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT AIS_MapOfInteractive(const AIS_MapOfInteractive& Other);
  
  Standard_EXPORT   AIS_MapOfInteractive& Assign (const AIS_MapOfInteractive& Other) ;
  AIS_MapOfInteractive& operator = (const AIS_MapOfInteractive& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~AIS_MapOfInteractive()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const Handle(AIS_InteractiveObject)& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(AIS_InteractiveObject)& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const Handle(AIS_InteractiveObject)& aKey) ;




protected:





private:





};







#endif // _AIS_MapOfInteractive_HeaderFile
