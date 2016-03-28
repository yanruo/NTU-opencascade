// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_TrimEdgeTool_HeaderFile
#define _BRepFill_TrimEdgeTool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <gp_Pnt2d.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Standard_Real.hxx>
#include <Bisector_Bisec.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Handle_Geom2d_Geometry.hxx>
class Geom2d_Curve;
class Bisector_Bisec;
class Geom2d_Geometry;
class TopoDS_Edge;
class TColgp_SequenceOfPnt;
class gp_Pnt2d;


//! Geometric Tool using to construct Offset Wires.
class BRepFill_TrimEdgeTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_TrimEdgeTool();
  
  Standard_EXPORT BRepFill_TrimEdgeTool(const Bisector_Bisec& Bisec, const Handle(Geom2d_Geometry)& S1, const Handle(Geom2d_Geometry)& S2, const Standard_Real Offset);
  
  Standard_EXPORT   void IntersectWith (const TopoDS_Edge& Edge1, const TopoDS_Edge& Edge2, TColgp_SequenceOfPnt& Params) ;
  
  Standard_EXPORT   void AddOrConfuse (const Standard_Boolean Start, const TopoDS_Edge& Edge1, const TopoDS_Edge& Edge2, TColgp_SequenceOfPnt& Params)  const;
  
  Standard_EXPORT   Standard_Boolean IsInside (const gp_Pnt2d& P)  const;




protected:





private:



  Standard_Boolean isPoint1;
  Standard_Boolean isPoint2;
  gp_Pnt2d myP1;
  gp_Pnt2d myP2;
  Handle(Geom2d_Curve) myC1;
  Handle(Geom2d_Curve) myC2;
  Standard_Real myOffset;
  Bisector_Bisec myBisec;
  Geom2dAdaptor_Curve myBis;


};







#endif // _BRepFill_TrimEdgeTool_HeaderFile
