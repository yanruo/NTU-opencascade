// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_SequenceOfPnt_HeaderFile
#define _IntCurveSurface_SequenceOfPnt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_IntCurveSurface_SequenceNodeOfSequenceOfPnt.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntCurveSurface_IntersectionPoint;
class IntCurveSurface_SequenceNodeOfSequenceOfPnt;



class IntCurveSurface_SequenceOfPnt  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    IntCurveSurface_SequenceOfPnt();
  
  Standard_EXPORT IntCurveSurface_SequenceOfPnt(const IntCurveSurface_SequenceOfPnt& Other);
  
  Standard_EXPORT   void Clear() ;
~IntCurveSurface_SequenceOfPnt()
{
  Clear();
}
  
  Standard_EXPORT  const  IntCurveSurface_SequenceOfPnt& Assign (const IntCurveSurface_SequenceOfPnt& Other) ;
 const  IntCurveSurface_SequenceOfPnt& operator = (const IntCurveSurface_SequenceOfPnt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const IntCurveSurface_IntersectionPoint& T) ;
  
      void Append (IntCurveSurface_SequenceOfPnt& S) ;
  
  Standard_EXPORT   void Prepend (const IntCurveSurface_IntersectionPoint& T) ;
  
      void Prepend (IntCurveSurface_SequenceOfPnt& S) ;
  
      void InsertBefore (const Standard_Integer Index, const IntCurveSurface_IntersectionPoint& T) ;
  
      void InsertBefore (const Standard_Integer Index, IntCurveSurface_SequenceOfPnt& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const IntCurveSurface_IntersectionPoint& T) ;
  
      void InsertAfter (const Standard_Integer Index, IntCurveSurface_SequenceOfPnt& S) ;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionPoint& First()  const;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionPoint& Last()  const;
  
      void Split (const Standard_Integer Index, IntCurveSurface_SequenceOfPnt& Sub) ;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionPoint& Value (const Standard_Integer Index)  const;
 const  IntCurveSurface_IntersectionPoint& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const IntCurveSurface_IntersectionPoint& I) ;
  
  Standard_EXPORT   IntCurveSurface_IntersectionPoint& ChangeValue (const Standard_Integer Index) ;
  IntCurveSurface_IntersectionPoint& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem IntCurveSurface_IntersectionPoint
#define SeqItem_hxx <IntCurveSurface_IntersectionPoint.hxx>
#define TCollection_SequenceNode IntCurveSurface_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_hxx <IntCurveSurface_SequenceNodeOfSequenceOfPnt.hxx>
#define Handle_TCollection_SequenceNode Handle_IntCurveSurface_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_Type_() IntCurveSurface_SequenceNodeOfSequenceOfPnt_Type_()
#define TCollection_Sequence IntCurveSurface_SequenceOfPnt
#define TCollection_Sequence_hxx <IntCurveSurface_SequenceOfPnt.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntCurveSurface_SequenceOfPnt_HeaderFile