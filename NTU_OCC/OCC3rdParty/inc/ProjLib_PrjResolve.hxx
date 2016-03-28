// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_PrjResolve_HeaderFile
#define _ProjLib_PrjResolve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Adaptor3d_CurvePtr.hxx>
#include <Adaptor3d_SurfacePtr.hxx>
#include <Standard_Boolean.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
class Standard_DomainError;
class Standard_ConstructionError;
class StdFail_NotDone;
class Adaptor3d_Curve;
class Adaptor3d_Surface;
class gp_Pnt2d;



class ProjLib_PrjResolve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ProjLib_PrjResolve(const Adaptor3d_Curve& C, const Adaptor3d_Surface& S, const Standard_Integer Fix);
  
  //! Calculates the ort from  C(t)  to  S  with a close point.
  //! The close point is defined by the parameter values
  //! U0 and V0.
  //! The function F(u,v)=distance(S(u,v),C(t)) has an
  //! extremum when gradient(F)=0. The algorithm searchs
  //! a zero near the close point.
  Standard_EXPORT   void Perform (const Standard_Real t, const Standard_Real U, const Standard_Real V, const gp_Pnt2d& Tol, const gp_Pnt2d& Inf, const gp_Pnt2d& Sup, const Standard_Real FTol = -1, const Standard_Boolean StrictInside = Standard_False) ;
  
  //! Returns True if the distance is found.
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns the point of the extremum distance.
  Standard_EXPORT   gp_Pnt2d Solution()  const;




protected:





private:



  Adaptor3d_CurvePtr myCurve;
  Adaptor3d_SurfacePtr mySurface;
  Standard_Boolean myDone;
  gp_Pnt2d mySolution;
  Standard_Integer myFix;


};







#endif // _ProjLib_PrjResolve_HeaderFile
