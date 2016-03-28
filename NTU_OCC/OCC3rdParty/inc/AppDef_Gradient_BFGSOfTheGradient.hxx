// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_Gradient_BFGSOfTheGradient_HeaderFile
#define _AppDef_Gradient_BFGSOfTheGradient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <math_BFGS.hxx>
#include <math_Vector.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class AppDef_MultiLine;
class AppDef_MyLineTool;
class AppDef_TheGradient;
class AppDef_ParLeastSquareOfTheGradient;
class AppDef_ResConstraintOfTheGradient;
class AppDef_ParFunctionOfTheGradient;
class math_MultipleVarFunctionWithGradient;



class AppDef_Gradient_BFGSOfTheGradient  : public math_BFGS
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AppDef_Gradient_BFGSOfTheGradient(math_MultipleVarFunctionWithGradient& F, const math_Vector& StartingPoint, const Standard_Real Tolerance3d, const Standard_Real Tolerance2d, const Standard_Real Eps, const Standard_Integer NbIterations = 200);
  
  Standard_EXPORT virtual   Standard_Boolean IsSolutionReached (math_MultipleVarFunctionWithGradient& F)  const;




protected:





private:



  Standard_Real myTol3d;
  Standard_Real myTol2d;


};







#endif // _AppDef_Gradient_BFGSOfTheGradient_HeaderFile