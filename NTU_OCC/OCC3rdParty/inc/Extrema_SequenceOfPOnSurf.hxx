// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_SequenceOfPOnSurf_HeaderFile
#define _Extrema_SequenceOfPOnSurf_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_Extrema_SequenceNodeOfSequenceOfPOnSurf.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Extrema_POnSurf;
class Extrema_SequenceNodeOfSequenceOfPOnSurf;



class Extrema_SequenceOfPOnSurf  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Extrema_SequenceOfPOnSurf();
  
  Standard_EXPORT Extrema_SequenceOfPOnSurf(const Extrema_SequenceOfPOnSurf& Other);
  
  Standard_EXPORT   void Clear() ;
~Extrema_SequenceOfPOnSurf()
{
  Clear();
}
  
  Standard_EXPORT  const  Extrema_SequenceOfPOnSurf& Assign (const Extrema_SequenceOfPOnSurf& Other) ;
 const  Extrema_SequenceOfPOnSurf& operator = (const Extrema_SequenceOfPOnSurf& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Extrema_POnSurf& T) ;
  
      void Append (Extrema_SequenceOfPOnSurf& S) ;
  
  Standard_EXPORT   void Prepend (const Extrema_POnSurf& T) ;
  
      void Prepend (Extrema_SequenceOfPOnSurf& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Extrema_POnSurf& T) ;
  
      void InsertBefore (const Standard_Integer Index, Extrema_SequenceOfPOnSurf& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Extrema_POnSurf& T) ;
  
      void InsertAfter (const Standard_Integer Index, Extrema_SequenceOfPOnSurf& S) ;
  
  Standard_EXPORT  const  Extrema_POnSurf& First()  const;
  
  Standard_EXPORT  const  Extrema_POnSurf& Last()  const;
  
      void Split (const Standard_Integer Index, Extrema_SequenceOfPOnSurf& Sub) ;
  
  Standard_EXPORT  const  Extrema_POnSurf& Value (const Standard_Integer Index)  const;
 const  Extrema_POnSurf& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Extrema_POnSurf& I) ;
  
  Standard_EXPORT   Extrema_POnSurf& ChangeValue (const Standard_Integer Index) ;
  Extrema_POnSurf& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Extrema_POnSurf
#define SeqItem_hxx <Extrema_POnSurf.hxx>
#define TCollection_SequenceNode Extrema_SequenceNodeOfSequenceOfPOnSurf
#define TCollection_SequenceNode_hxx <Extrema_SequenceNodeOfSequenceOfPOnSurf.hxx>
#define Handle_TCollection_SequenceNode Handle_Extrema_SequenceNodeOfSequenceOfPOnSurf
#define TCollection_SequenceNode_Type_() Extrema_SequenceNodeOfSequenceOfPOnSurf_Type_()
#define TCollection_Sequence Extrema_SequenceOfPOnSurf
#define TCollection_Sequence_hxx <Extrema_SequenceOfPOnSurf.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Extrema_SequenceOfPOnSurf_HeaderFile
