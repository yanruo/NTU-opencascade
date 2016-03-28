// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_Tool_HeaderFile
#define _StepToTopoDS_Tool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepToTopoDS_DataMapOfTRI.hxx>
#include <StepToTopoDS_PointVertexMap.hxx>
#include <StepToTopoDS_PointEdgeMap.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Transfer_TransientProcess.hxx>
#include <Standard_Integer.hxx>
#include <Handle_StepShape_TopologicalRepresentationItem.hxx>
#include <Handle_StepGeom_CartesianPoint.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom2d_Curve.hxx>
class Transfer_TransientProcess;
class StepToTopoDS_DataMapOfTRI;
class StepShape_TopologicalRepresentationItem;
class TopoDS_Shape;
class StepToTopoDS_PointPair;
class TopoDS_Edge;
class StepGeom_CartesianPoint;
class TopoDS_Vertex;
class Geom_Surface;
class Geom_Curve;
class Geom2d_Curve;


//! This Tool Class provides Information to build
//! a Cas.Cad BRep from a ProSTEP Shape model.
class StepToTopoDS_Tool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_Tool();
  
  Standard_EXPORT StepToTopoDS_Tool(const StepToTopoDS_DataMapOfTRI& Map, const Handle(Transfer_TransientProcess)& TP);
  
  Standard_EXPORT   void Init (const StepToTopoDS_DataMapOfTRI& Map, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(StepShape_TopologicalRepresentationItem)& TRI) ;
  
  Standard_EXPORT   void Bind (const Handle(StepShape_TopologicalRepresentationItem)& TRI, const TopoDS_Shape& S) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Find (const Handle(StepShape_TopologicalRepresentationItem)& TRI) ;
  
  Standard_EXPORT   void ClearEdgeMap() ;
  
  Standard_EXPORT   Standard_Boolean IsEdgeBound (const StepToTopoDS_PointPair& PP) ;
  
  Standard_EXPORT   void BindEdge (const StepToTopoDS_PointPair& PP, const TopoDS_Edge& E) ;
  
  Standard_EXPORT  const  TopoDS_Edge& FindEdge (const StepToTopoDS_PointPair& PP) ;
  
  Standard_EXPORT   void ClearVertexMap() ;
  
  Standard_EXPORT   Standard_Boolean IsVertexBound (const Handle(StepGeom_CartesianPoint)& PG) ;
  
  Standard_EXPORT   void BindVertex (const Handle(StepGeom_CartesianPoint)& P, const TopoDS_Vertex& V) ;
  
  Standard_EXPORT  const  TopoDS_Vertex& FindVertex (const Handle(StepGeom_CartesianPoint)& P) ;
  
  Standard_EXPORT   void ComputePCurve (const Standard_Boolean B) ;
  
  Standard_EXPORT   Standard_Boolean ComputePCurve()  const;
  
  Standard_EXPORT   Handle(Transfer_TransientProcess) TransientProcess()  const;
  
  Standard_EXPORT   void AddContinuity (const Handle(Geom_Surface)& GeomSurf) ;
  
  Standard_EXPORT   void AddContinuity (const Handle(Geom_Curve)& GeomCurve) ;
  
  Standard_EXPORT   void AddContinuity (const Handle(Geom2d_Curve)& GeomCur2d) ;
  
  Standard_EXPORT   Standard_Integer C0Surf()  const;
  
  Standard_EXPORT   Standard_Integer C1Surf()  const;
  
  Standard_EXPORT   Standard_Integer C2Surf()  const;
  
  Standard_EXPORT   Standard_Integer C0Cur2()  const;
  
  Standard_EXPORT   Standard_Integer C1Cur2()  const;
  
  Standard_EXPORT   Standard_Integer C2Cur2()  const;
  
  Standard_EXPORT   Standard_Integer C0Cur3()  const;
  
  Standard_EXPORT   Standard_Integer C1Cur3()  const;
  
  Standard_EXPORT   Standard_Integer C2Cur3()  const;




protected:





private:



  StepToTopoDS_DataMapOfTRI myDataMap;
  StepToTopoDS_PointVertexMap myVertexMap;
  StepToTopoDS_PointEdgeMap myEdgeMap;
  Standard_Boolean myComputePC;
  Handle(Transfer_TransientProcess) myTransProc;
  Standard_Integer myNbC0Surf;
  Standard_Integer myNbC1Surf;
  Standard_Integer myNbC2Surf;
  Standard_Integer myNbC0Cur2;
  Standard_Integer myNbC1Cur2;
  Standard_Integer myNbC2Cur2;
  Standard_Integer myNbC0Cur3;
  Standard_Integer myNbC1Cur3;
  Standard_Integer myNbC2Cur3;


};







#endif // _StepToTopoDS_Tool_HeaderFile
