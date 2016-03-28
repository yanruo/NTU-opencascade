// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheCSFunctionOfInterCSurf_HeaderFile
#define _HLRBRep_TheCSFunctionOfInterCSurf_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <gp_Lin.hxx>
#include <gp_Pnt.hxx>
#include <Standard_Real.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <math_Vector.hxx>
class HLRBRep_SurfaceTool;
class gp_Lin;
class HLRBRep_LineTool;
class math_Matrix;
class gp_Pnt;



class HLRBRep_TheCSFunctionOfInterCSurf  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_TheCSFunctionOfInterCSurf(const Standard_Address& S, const gp_Lin& C);
  
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;
  
  Standard_EXPORT  const  gp_Pnt& Point()  const;
  
  Standard_EXPORT   Standard_Real Root()  const;
  
  Standard_EXPORT  const  Standard_Address& AuxillarSurface()  const;
  
  Standard_EXPORT  const  gp_Lin& AuxillarCurve()  const;




protected:





private:



  Standard_Address surface;
  gp_Lin curve;
  gp_Pnt p;
  Standard_Real f;


};







#endif // _HLRBRep_TheCSFunctionOfInterCSurf_HeaderFile
