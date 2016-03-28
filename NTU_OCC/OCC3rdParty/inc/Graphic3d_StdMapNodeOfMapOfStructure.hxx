// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_StdMapNodeOfMapOfStructure_HeaderFile
#define _Graphic3d_StdMapNodeOfMapOfStructure_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_StdMapNodeOfMapOfStructure.hxx>

#include <Handle_Graphic3d_Structure.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Graphic3d_Structure;
class TColStd_MapTransientHasher;
class Graphic3d_MapOfStructure;
class Graphic3d_MapIteratorOfMapOfStructure;



class Graphic3d_StdMapNodeOfMapOfStructure : public TCollection_MapNode
{

public:

  
    Graphic3d_StdMapNodeOfMapOfStructure(const Handle(Graphic3d_Structure)& K, const TCollection_MapNodePtr& n);
  
      Handle(Graphic3d_Structure)& Key()  const;




  DEFINE_STANDARD_RTTI(Graphic3d_StdMapNodeOfMapOfStructure)

protected:




private: 


  Handle(Graphic3d_Structure) myKey;


};

#define TheKey Handle(Graphic3d_Structure)
#define TheKey_hxx <Graphic3d_Structure.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_StdMapNode Graphic3d_StdMapNodeOfMapOfStructure
#define TCollection_StdMapNode_hxx <Graphic3d_StdMapNodeOfMapOfStructure.hxx>
#define TCollection_MapIterator Graphic3d_MapIteratorOfMapOfStructure
#define TCollection_MapIterator_hxx <Graphic3d_MapIteratorOfMapOfStructure.hxx>
#define Handle_TCollection_StdMapNode Handle_Graphic3d_StdMapNodeOfMapOfStructure
#define TCollection_StdMapNode_Type_() Graphic3d_StdMapNodeOfMapOfStructure_Type_()
#define TCollection_Map Graphic3d_MapOfStructure
#define TCollection_Map_hxx <Graphic3d_MapOfStructure.hxx>

#include <TCollection_StdMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_StdMapNode
#undef TCollection_StdMapNode_hxx
#undef TCollection_MapIterator
#undef TCollection_MapIterator_hxx
#undef Handle_TCollection_StdMapNode
#undef TCollection_StdMapNode_Type_
#undef TCollection_Map
#undef TCollection_Map_hxx




#endif // _Graphic3d_StdMapNodeOfMapOfStructure_HeaderFile