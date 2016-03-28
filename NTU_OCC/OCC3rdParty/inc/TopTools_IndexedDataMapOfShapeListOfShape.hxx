// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#define _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeListOfShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopTools_ShapeMapHasher;
class TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeListOfShape;



class TopTools_IndexedDataMapOfShapeListOfShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_IndexedDataMapOfShapeListOfShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopTools_IndexedDataMapOfShapeListOfShape& Assign (const TopTools_IndexedDataMapOfShapeListOfShape& Other) ;
  TopTools_IndexedDataMapOfShapeListOfShape& operator = (const TopTools_IndexedDataMapOfShapeListOfShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_IndexedDataMapOfShapeListOfShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& K, const TopTools_ListOfShape& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopoDS_Shape& K, const TopTools_ListOfShape& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& FindFromIndex (const Standard_Integer I)  const;
 const  TopTools_ListOfShape& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   TopTools_ListOfShape& ChangeFromIndex (const Standard_Integer I) ;
  TopTools_ListOfShape& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& FindFromKey (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   TopTools_ListOfShape& ChangeFromKey (const TopoDS_Shape& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopTools_IndexedDataMapOfShapeListOfShape(const TopTools_IndexedDataMapOfShapeListOfShape& Other);




};







#endif // _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile