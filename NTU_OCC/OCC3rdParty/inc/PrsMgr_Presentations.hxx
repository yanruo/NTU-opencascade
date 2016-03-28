// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_Presentations_HeaderFile
#define _PrsMgr_Presentations_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_PrsMgr_SequenceNodeOfPresentations.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PrsMgr_ModedPresentation;
class PrsMgr_SequenceNodeOfPresentations;



class PrsMgr_Presentations  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    PrsMgr_Presentations();
  
  Standard_EXPORT PrsMgr_Presentations(const PrsMgr_Presentations& Other);
  
  Standard_EXPORT   void Clear() ;
~PrsMgr_Presentations()
{
  Clear();
}
  
  Standard_EXPORT  const  PrsMgr_Presentations& Assign (const PrsMgr_Presentations& Other) ;
 const  PrsMgr_Presentations& operator = (const PrsMgr_Presentations& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const PrsMgr_ModedPresentation& T) ;
  
      void Append (PrsMgr_Presentations& S) ;
  
  Standard_EXPORT   void Prepend (const PrsMgr_ModedPresentation& T) ;
  
      void Prepend (PrsMgr_Presentations& S) ;
  
      void InsertBefore (const Standard_Integer Index, const PrsMgr_ModedPresentation& T) ;
  
      void InsertBefore (const Standard_Integer Index, PrsMgr_Presentations& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const PrsMgr_ModedPresentation& T) ;
  
      void InsertAfter (const Standard_Integer Index, PrsMgr_Presentations& S) ;
  
  Standard_EXPORT  const  PrsMgr_ModedPresentation& First()  const;
  
  Standard_EXPORT  const  PrsMgr_ModedPresentation& Last()  const;
  
      void Split (const Standard_Integer Index, PrsMgr_Presentations& Sub) ;
  
  Standard_EXPORT  const  PrsMgr_ModedPresentation& Value (const Standard_Integer Index)  const;
 const  PrsMgr_ModedPresentation& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const PrsMgr_ModedPresentation& I) ;
  
  Standard_EXPORT   PrsMgr_ModedPresentation& ChangeValue (const Standard_Integer Index) ;
  PrsMgr_ModedPresentation& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem PrsMgr_ModedPresentation
#define SeqItem_hxx <PrsMgr_ModedPresentation.hxx>
#define TCollection_SequenceNode PrsMgr_SequenceNodeOfPresentations
#define TCollection_SequenceNode_hxx <PrsMgr_SequenceNodeOfPresentations.hxx>
#define Handle_TCollection_SequenceNode Handle_PrsMgr_SequenceNodeOfPresentations
#define TCollection_SequenceNode_Type_() PrsMgr_SequenceNodeOfPresentations_Type_()
#define TCollection_Sequence PrsMgr_Presentations
#define TCollection_Sequence_hxx <PrsMgr_Presentations.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _PrsMgr_Presentations_HeaderFile
