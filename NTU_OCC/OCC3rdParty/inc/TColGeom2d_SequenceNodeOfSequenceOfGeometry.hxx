// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom2d_SequenceNodeOfSequenceOfGeometry_HeaderFile
#define _TColGeom2d_SequenceNodeOfSequenceOfGeometry_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColGeom2d_SequenceNodeOfSequenceOfGeometry.hxx>

#include <Handle_Geom2d_Geometry.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class Geom2d_Geometry;
class TColGeom2d_SequenceOfGeometry;



class TColGeom2d_SequenceNodeOfSequenceOfGeometry : public TCollection_SeqNode
{

public:

  
    TColGeom2d_SequenceNodeOfSequenceOfGeometry(const Handle(Geom2d_Geometry)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Geom2d_Geometry)& Value()  const;




  DEFINE_STANDARD_RTTI(TColGeom2d_SequenceNodeOfSequenceOfGeometry)

protected:




private: 


  Handle(Geom2d_Geometry) myValue;


};

#define SeqItem Handle(Geom2d_Geometry)
#define SeqItem_hxx <Geom2d_Geometry.hxx>
#define TCollection_SequenceNode TColGeom2d_SequenceNodeOfSequenceOfGeometry
#define TCollection_SequenceNode_hxx <TColGeom2d_SequenceNodeOfSequenceOfGeometry.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom2d_SequenceNodeOfSequenceOfGeometry
#define TCollection_SequenceNode_Type_() TColGeom2d_SequenceNodeOfSequenceOfGeometry_Type_()
#define TCollection_Sequence TColGeom2d_SequenceOfGeometry
#define TCollection_Sequence_hxx <TColGeom2d_SequenceOfGeometry.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColGeom2d_SequenceNodeOfSequenceOfGeometry_HeaderFile