// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFi3d_ChBuilder_HeaderFile
#define _ChFi3d_ChBuilder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <ChFi3d_Builder.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <ChFiDS_ChamfMethod.hxx>
#include <Handle_ChFiDS_SecHArray1.hxx>
#include <Handle_ChFiDS_SurfData.hxx>
#include <Handle_ChFiDS_HElSpine.hxx>
#include <Handle_ChFiDS_Spine.hxx>
#include <Handle_BRepAdaptor_HSurface.hxx>
#include <Handle_Adaptor3d_TopolTool.hxx>
#include <math_Vector.hxx>
#include <Handle_BRepAdaptor_HCurve2d.hxx>
#include <TopAbs_Orientation.hxx>
#include <TopAbs_State.hxx>
#include <Handle_ChFiDS_Stripe.hxx>
class Standard_ConstructionError;
class Standard_DomainError;
class TopoDS_Shape;
class TopoDS_Edge;
class TopoDS_Face;
class ChFiDS_SecHArray1;
class ChFiDS_SurfData;
class ChFiDS_HElSpine;
class ChFiDS_Spine;
class BRepAdaptor_HSurface;
class Adaptor3d_TopolTool;
class BRepAdaptor_HCurve2d;
class ChFiDS_SequenceOfSurfData;
class TopoDS_Vertex;
class ChFiDS_Stripe;
class ChFiDS_ListOfStripe;


//! construction tool for 3D chamfers on edges (on a solid).
class ChFi3d_ChBuilder  : public ChFi3d_Builder
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! initializes the Builder with the Shape <S> for the
  //! computation of chamfers
  Standard_EXPORT ChFi3d_ChBuilder(const TopoDS_Shape& S, const Standard_Real Ta = 1.0e-2);
  
  //! initializes a contour with the edge <E> as first
  //! (the next are found by propagation ).
  //! The two distances (parameters of the chamfer) must
  //! be set after.
  //! if the edge <E> has more than 2 adjacent faces
  Standard_EXPORT   void Add (const TopoDS_Edge& E) ;
  
  //! initializes a new contour with the edge <E> as first
  //! (the next are found by propagation ), and  the
  //! distance <Dis>
  //! if the edge <E> has more than 2 adjacent faces
  Standard_EXPORT   void Add (const Standard_Real Dis, const TopoDS_Edge& E, const TopoDS_Face& F) ;
  
  //! set the distance <Dis> of the fillet
  //! contour of index <IC> in the DS with <Dis> on <F>.
  //! if the face <F> is not one of common faces
  //! of an edge of the contour <IC>
  Standard_EXPORT   void SetDist (const Standard_Real Dis, const Standard_Integer IC, const TopoDS_Face& F) ;
  
  //! gives the distances <Dis> of the fillet
  //! contour of index <IC> in the DS
  Standard_EXPORT   void GetDist (const Standard_Integer IC, Standard_Real& Dis)  const;
  
  //! initializes a new contour with the edge <E> as first
  //! (the next are found by propagation ), and  the
  //! distance <Dis1> and <Dis2>
  //! if the edge <E> has more than 2 adjacent faces
  Standard_EXPORT   void Add (const Standard_Real Dis1, const Standard_Real Dis2, const TopoDS_Edge& E, const TopoDS_Face& F) ;
  
  //! set the distances <Dis1> and <Dis2> of the fillet
  //! contour of index <IC> in the DS with <Dis1> on <F>.
  //! if the face <F> is not one of common faces
  //! of an edge of the contour <IC>
  Standard_EXPORT   void SetDists (const Standard_Real Dis1, const Standard_Real Dis2, const Standard_Integer IC, const TopoDS_Face& F) ;
  
  //! gives the distances <Dis1> and <Dis2> of the fillet
  //! contour of index <IC> in the DS
  Standard_EXPORT   void Dists (const Standard_Integer IC, Standard_Real& Dis1, Standard_Real& Dis2)  const;
  
  //! initializes a new contour with the edge <E> as first
  //! (the next are found by propagation ), and  the
  //! distance <Dis1> and <Angle>
  //! if the edge <E> has more than 2 adjacent faces
  Standard_EXPORT   void AddDA (const Standard_Real Dis, const Standard_Real Angle, const TopoDS_Edge& E, const TopoDS_Face& F) ;
  
  //! set the distance <Dis> and <Angle> of the fillet
  //! contour of index <IC> in the DS with <Dis> on <F>.
  //! if the face <F> is not one of common faces
  //! of an edge of the contour <IC>
  Standard_EXPORT   void SetDistAngle (const Standard_Real Dis, const Standard_Real Angle, const Standard_Integer IC, const TopoDS_Face& F) ;
  
  //! gives the distances <Dis> and <Angle> of the fillet
  //! contour of index <IC> in the DS
  Standard_EXPORT   void GetDistAngle (const Standard_Integer IC, Standard_Real& Dis, Standard_Real& Angle, Standard_Boolean& DisOnFace1)  const;
  
  //! renvoi la methode des chanfreins utilisee
  Standard_EXPORT   ChFiDS_ChamfMethod IsChamfer (const Standard_Integer IC)  const;
  
  //! Reset tous rayons du contour IC.
  Standard_EXPORT   void ResetContour (const Standard_Integer IC) ;
  
  Standard_EXPORT   void Simulate (const Standard_Integer IC) ;
  
  Standard_EXPORT   Standard_Integer NbSurf (const Standard_Integer IC)  const;
  
  Standard_EXPORT   Handle(ChFiDS_SecHArray1) Sect (const Standard_Integer IC, const Standard_Integer IS)  const;
  
  Standard_EXPORT virtual   void SimulSurf (Handle(ChFiDS_SurfData)& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const Handle(BRepAdaptor_HCurve2d)& PC1, const Handle(BRepAdaptor_HSurface)& Sref1, const Handle(BRepAdaptor_HCurve2d)& PCref1, Standard_Boolean& Decroch1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const TopAbs_Orientation Or2, const Standard_Real Fleche, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecP, const Standard_Boolean RecS, const Standard_Boolean RecRst, const math_Vector& Soldep) ;
  
  Standard_EXPORT virtual   void SimulSurf (Handle(ChFiDS_SurfData)& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const TopAbs_Orientation Or1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const Handle(BRepAdaptor_HCurve2d)& PC2, const Handle(BRepAdaptor_HSurface)& Sref2, const Handle(BRepAdaptor_HCurve2d)& PCref2, Standard_Boolean& Decroch2, const Standard_Real Fleche, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecP, const Standard_Boolean RecS, const Standard_Boolean RecRst, const math_Vector& Soldep) ;
  
  Standard_EXPORT virtual   void SimulSurf (Handle(ChFiDS_SurfData)& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const Handle(BRepAdaptor_HCurve2d)& PC1, const Handle(BRepAdaptor_HSurface)& Sref1, const Handle(BRepAdaptor_HCurve2d)& PCref1, Standard_Boolean& Decroch1, const TopAbs_Orientation Or1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const Handle(BRepAdaptor_HCurve2d)& PC2, const Handle(BRepAdaptor_HSurface)& Sref2, const Handle(BRepAdaptor_HCurve2d)& PCref2, Standard_Boolean& Decroch2, const TopAbs_Orientation Or2, const Standard_Real Fleche, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecP1, const Standard_Boolean RecRst1, const Standard_Boolean RecP2, const Standard_Boolean RecRst2, const math_Vector& Soldep) ;
  
  //! Methode, implemented in inheritants, calculates
  //! the elements of construction of  the surface (fillet
  //! or chamfer).
  Standard_EXPORT virtual   Standard_Boolean PerformSurf (ChFiDS_SequenceOfSurfData& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const Standard_Real MaxStep, const Standard_Real Fleche, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecOnS1, const Standard_Boolean RecOnS2, const math_Vector& Soldep, Standard_Boolean& Intf, Standard_Boolean& Intl) ;
  
  //! Method, implemented in  the inheritants, calculates
  //! the elements of construction of  the surface (fillet
  //! or chamfer) contact edge/face.
  Standard_EXPORT virtual   void PerformSurf (ChFiDS_SequenceOfSurfData& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const Handle(BRepAdaptor_HCurve2d)& PC1, const Handle(BRepAdaptor_HSurface)& Sref1, const Handle(BRepAdaptor_HCurve2d)& PCref1, Standard_Boolean& Decroch1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const TopAbs_Orientation Or2, const Standard_Real MaxStep, const Standard_Real Fleche, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecP, const Standard_Boolean RecS, const Standard_Boolean RecRst, const math_Vector& Soldep) ;
  
  //! Method, implemented in inheritants, calculates
  //! the elements of construction of  the surface (fillet
  //! or chamfer) contact edge/face.
  Standard_EXPORT virtual   void PerformSurf (ChFiDS_SequenceOfSurfData& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const TopAbs_Orientation Or1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const Handle(BRepAdaptor_HCurve2d)& PC2, const Handle(BRepAdaptor_HSurface)& Sref2, const Handle(BRepAdaptor_HCurve2d)& PCref2, Standard_Boolean& Decroch2, const Standard_Real MaxStep, const Standard_Real Fleche, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecP, const Standard_Boolean RecS, const Standard_Boolean RecRst, const math_Vector& Soldep) ;
  
  //! Method, implemented in  inheritants, calculates
  //! the elements of construction of  the surface (fillet
  //! or chamfer) contact edge/edge.
  Standard_EXPORT virtual   void PerformSurf (ChFiDS_SequenceOfSurfData& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const Handle(BRepAdaptor_HCurve2d)& PC1, const Handle(BRepAdaptor_HSurface)& Sref1, const Handle(BRepAdaptor_HCurve2d)& PCref1, Standard_Boolean& Decroch1, const TopAbs_Orientation Or1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const Handle(BRepAdaptor_HCurve2d)& PC2, const Handle(BRepAdaptor_HSurface)& Sref2, const Handle(BRepAdaptor_HCurve2d)& PCref2, Standard_Boolean& Decroch2, const TopAbs_Orientation Or2, const Standard_Real MaxStep, const Standard_Real Fleche, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecP1, const Standard_Boolean RecRst1, const Standard_Boolean RecP2, const Standard_Boolean RecRst2, const math_Vector& Soldep) ;
  
  Standard_EXPORT   Standard_Integer FindChoiceDistAngle (const Standard_Integer Choice, const Standard_Boolean DisOnF1)  const;




protected:

  
  Standard_EXPORT   void SimulKPart (const Handle(ChFiDS_SurfData)& SD)  const;
  
  Standard_EXPORT   Standard_Boolean SimulSurf (Handle(ChFiDS_SurfData)& Data, const Handle(ChFiDS_HElSpine)& Guide, const Handle(ChFiDS_Spine)& Spine, const Standard_Integer Choix, const Handle(BRepAdaptor_HSurface)& S1, const Handle(Adaptor3d_TopolTool)& I1, const Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I2, const Standard_Real TolGuide, Standard_Real& First, Standard_Real& Last, const Standard_Boolean Inside, const Standard_Boolean Appro, const Standard_Boolean Forward, const Standard_Boolean RecOnS1, const Standard_Boolean RecOnS2, const math_Vector& Soldep, Standard_Boolean& Intf, Standard_Boolean& Intl) ;
  
  Standard_EXPORT   Standard_Boolean PerformFirstSection (const Handle(ChFiDS_Spine)& S, const Handle(ChFiDS_HElSpine)& HGuide, const Standard_Integer Choix, Handle(BRepAdaptor_HSurface)& S1, Handle(BRepAdaptor_HSurface)& S2, const Handle(Adaptor3d_TopolTool)& I1, const Handle(Adaptor3d_TopolTool)& I2, const Standard_Real Par, math_Vector& SolDep, TopAbs_State& Pos1, TopAbs_State& Pos2)  const;
  
  //! computes  the  intersection of two chamfers on
  //! the vertex of index <Index> in myVDataMap.
  Standard_EXPORT   void PerformTwoCorner (const Standard_Integer Index) ;
  
  //! computes the intersection of three chamfers on
  //! the vertex of index <Index> in myVDataMap.
  Standard_EXPORT   void PerformThreeCorner (const Standard_Integer Index) ;
  
  //! extends  the spine  of  the Stripe  <S> at  the
  //! extremity of the vertex <V>.
  Standard_EXPORT   void ExtentOneCorner (const TopoDS_Vertex& V, const Handle(ChFiDS_Stripe)& S) ;
  
  //! extends the spine of the 2 stripes of <LS> at the
  //! extremity of the vertex <V>
  Standard_EXPORT   void ExtentTwoCorner (const TopoDS_Vertex& V, const ChFiDS_ListOfStripe& LS) ;
  
  //! extends the spine of the 2 stripes of <LS> at the
  //! extremity of the vertex <V>
  Standard_EXPORT   void ExtentThreeCorner (const TopoDS_Vertex& V, const ChFiDS_ListOfStripe& LS) ;
  
  //! set the regularities
  Standard_EXPORT   void SetRegul() ;




private:

  
  Standard_EXPORT   void ConexFaces (const Handle(ChFiDS_Spine)& Sp, const Standard_Integer IEdge, TopoDS_Face& F1, TopoDS_Face& F2)  const;




};







#endif // _ChFi3d_ChBuilder_HeaderFile
