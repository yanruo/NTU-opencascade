// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfIntegerBoolean_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfIntegerBoolean_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerBoolean.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerBoolean;
class MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean;



class MeshVS_DataMapNodeOfDataMapOfIntegerBoolean : public TCollection_MapNode
{

public:

  
    MeshVS_DataMapNodeOfDataMapOfIntegerBoolean(const Standard_Integer& K, const Standard_Boolean& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Standard_Boolean& Value()  const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfIntegerBoolean)

protected:




private: 


  Standard_Integer myKey;
  Standard_Boolean myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Standard_Boolean
#define TheItem_hxx <Standard_Boolean.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfIntegerBoolean
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfIntegerBoolean.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfIntegerBoolean
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfIntegerBoolean_Type_()
#define TCollection_DataMap MeshVS_DataMapOfIntegerBoolean
#define TCollection_DataMap_hxx <MeshVS_DataMapOfIntegerBoolean.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _MeshVS_DataMapNodeOfDataMapOfIntegerBoolean_HeaderFile