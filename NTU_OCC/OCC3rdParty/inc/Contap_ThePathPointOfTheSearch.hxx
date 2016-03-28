// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_ThePathPointOfTheSearch_HeaderFile
#define _Contap_ThePathPointOfTheSearch_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gp_Pnt.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Adaptor3d_HVertex.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
class Adaptor3d_HVertex;
class Adaptor2d_HCurve2d;
class Standard_DomainError;
class gp_Pnt;



class Contap_ThePathPointOfTheSearch 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Contap_ThePathPointOfTheSearch();
  
  Standard_EXPORT Contap_ThePathPointOfTheSearch(const gp_Pnt& P, const Standard_Real Tol, const Handle(Adaptor3d_HVertex)& V, const Handle(Adaptor2d_HCurve2d)& A, const Standard_Real Parameter);
  
  Standard_EXPORT Contap_ThePathPointOfTheSearch(const gp_Pnt& P, const Standard_Real Tol, const Handle(Adaptor2d_HCurve2d)& A, const Standard_Real Parameter);
  
      void SetValue (const gp_Pnt& P, const Standard_Real Tol, const Handle(Adaptor3d_HVertex)& V, const Handle(Adaptor2d_HCurve2d)& A, const Standard_Real Parameter) ;
  
      void SetValue (const gp_Pnt& P, const Standard_Real Tol, const Handle(Adaptor2d_HCurve2d)& A, const Standard_Real Parameter) ;
  
     const  gp_Pnt& Value()  const;
  
      Standard_Real Tolerance()  const;
  
      Standard_Boolean IsNew()  const;
  
     const  Handle(Adaptor3d_HVertex)& Vertex()  const;
  
     const  Handle(Adaptor2d_HCurve2d)& Arc()  const;
  
      Standard_Real Parameter()  const;




protected:





private:



  gp_Pnt point;
  Standard_Real tol;
  Standard_Boolean isnew;
  Handle(Adaptor3d_HVertex) vtx;
  Handle(Adaptor2d_HCurve2d) arc;
  Standard_Real param;


};

#define TheVertex Handle(Adaptor3d_HVertex)
#define TheVertex_hxx <Adaptor3d_HVertex.hxx>
#define TheArc Handle(Adaptor2d_HCurve2d)
#define TheArc_hxx <Adaptor2d_HCurve2d.hxx>
#define IntStart_PathPoint Contap_ThePathPointOfTheSearch
#define IntStart_PathPoint_hxx <Contap_ThePathPointOfTheSearch.hxx>

#include <IntStart_PathPoint.lxx>

#undef TheVertex
#undef TheVertex_hxx
#undef TheArc
#undef TheArc_hxx
#undef IntStart_PathPoint
#undef IntStart_PathPoint_hxx




#endif // _Contap_ThePathPointOfTheSearch_HeaderFile
