// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape_HeaderFile
#define _TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape.hxx>

#include <TopOpeBRepBuild_ShapeListOfShape.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopOpeBRepBuild_ShapeListOfShape;
class TopOpeBRepBuild_ListOfShapeListOfShape;
class TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape;



class TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape : public TCollection_MapNode
{

public:

  
    TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape(const TopOpeBRepBuild_ShapeListOfShape& I, const TCollection_MapNodePtr& n);
  
      TopOpeBRepBuild_ShapeListOfShape& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape)

protected:




private: 


  TopOpeBRepBuild_ShapeListOfShape myValue;


};

#define Item TopOpeBRepBuild_ShapeListOfShape
#define Item_hxx <TopOpeBRepBuild_ShapeListOfShape.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape
#define TCollection_ListNode_hxx <TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape
#define TCollection_ListIterator_hxx <TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfShapeListOfShape
#define TCollection_List_hxx <TopOpeBRepBuild_ListOfShapeListOfShape.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape_HeaderFile
