// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_HArray1OfPOnCurv2d_HeaderFile
#define _Extrema_HArray1OfPOnCurv2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Extrema_HArray1OfPOnCurv2d.hxx>

#include <Extrema_Array1OfPOnCurv2d.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Extrema_POnCurv2d;
class Extrema_Array1OfPOnCurv2d;



class Extrema_HArray1OfPOnCurv2d : public MMgt_TShared
{

public:

  
    Extrema_HArray1OfPOnCurv2d(const Standard_Integer Low, const Standard_Integer Up);
  
    Extrema_HArray1OfPOnCurv2d(const Standard_Integer Low, const Standard_Integer Up, const Extrema_POnCurv2d& V);
  
      void Init (const Extrema_POnCurv2d& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Extrema_POnCurv2d& Value) ;
  
     const  Extrema_POnCurv2d& Value (const Standard_Integer Index)  const;
  
      Extrema_POnCurv2d& ChangeValue (const Standard_Integer Index) ;
  
     const  Extrema_Array1OfPOnCurv2d& Array1()  const;
  
      Extrema_Array1OfPOnCurv2d& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Extrema_HArray1OfPOnCurv2d)

protected:




private: 


  Extrema_Array1OfPOnCurv2d myArray;


};

#define ItemHArray1 Extrema_POnCurv2d
#define ItemHArray1_hxx <Extrema_POnCurv2d.hxx>
#define TheArray1 Extrema_Array1OfPOnCurv2d
#define TheArray1_hxx <Extrema_Array1OfPOnCurv2d.hxx>
#define TCollection_HArray1 Extrema_HArray1OfPOnCurv2d
#define TCollection_HArray1_hxx <Extrema_HArray1OfPOnCurv2d.hxx>
#define Handle_TCollection_HArray1 Handle_Extrema_HArray1OfPOnCurv2d
#define TCollection_HArray1_Type_() Extrema_HArray1OfPOnCurv2d_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Extrema_HArray1OfPOnCurv2d_HeaderFile
