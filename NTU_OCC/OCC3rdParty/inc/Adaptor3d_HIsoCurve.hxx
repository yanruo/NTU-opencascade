// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_HIsoCurve_HeaderFile
#define _Adaptor3d_HIsoCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Adaptor3d_HIsoCurve.hxx>

#include <Adaptor3d_IsoCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Adaptor3d_IsoCurve;
class Adaptor3d_Curve;



class Adaptor3d_HIsoCurve : public Adaptor3d_HCurve
{

public:

  
  Standard_EXPORT Adaptor3d_HIsoCurve();
  
  Standard_EXPORT Adaptor3d_HIsoCurve(const Adaptor3d_IsoCurve& C);
  
  Standard_EXPORT   void Set (const Adaptor3d_IsoCurve& C) ;
  
  Standard_EXPORT  const  Adaptor3d_Curve& Curve()  const;
  
  Standard_EXPORT   Adaptor3d_Curve& GetCurve() ;
  
      Adaptor3d_IsoCurve& ChangeCurve() ;




  DEFINE_STANDARD_RTTI(Adaptor3d_HIsoCurve)

protected:


  Adaptor3d_IsoCurve myCurve;


private: 




};

#define TheCurve Adaptor3d_IsoCurve
#define TheCurve_hxx <Adaptor3d_IsoCurve.hxx>
#define Adaptor3d_GenHCurve Adaptor3d_HIsoCurve
#define Adaptor3d_GenHCurve_hxx <Adaptor3d_HIsoCurve.hxx>
#define Handle_Adaptor3d_GenHCurve Handle_Adaptor3d_HIsoCurve
#define Adaptor3d_GenHCurve_Type_() Adaptor3d_HIsoCurve_Type_()

#include <Adaptor3d_GenHCurve.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_hxx
#undef Handle_Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_Type_




#endif // _Adaptor3d_HIsoCurve_HeaderFile