// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlAPI_Writer_HeaderFile
#define _StlAPI_Writer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Handle_StlMesh_Mesh.hxx>
#include <Standard_CString.hxx>
class StlMesh_Mesh;
class TopoDS_Shape;


//! This class creates and writes
//! STL files from Open CASCADE shapes. An STL file can be
//! written to an existing STL file or to a new one..
class StlAPI_Writer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a writer object with
  //! default parameters: ASCIIMode, RelativeMode, SetCoefficent,
  //! SetDeflection. These parameters may be modified.
  Standard_EXPORT StlAPI_Writer();
  
  //! Sets the deflection of the meshing algorithm.
  //! Deflection is used, only if relative mode is false
  Standard_EXPORT   void SetDeflection (const Standard_Real aDeflection) ;
  
  //! Sets the coeffiecient for computation of deflection through
  //! relative size of shape. Default value = 0.001
  Standard_EXPORT   void SetCoefficient (const Standard_Real aCoefficient) ;
  
  //! Returns the address to the
  //! flag defining the relative mode for writing the file.
  //! This address may be used to either read or change the flag.
  //! If the mode returns True (default value), the
  //! deflection is calculated from the relative size of the
  //! shape. If the mode returns False, the user defined deflection is used.
  //! Example
  //! Read:
  //! Standard_Boolean val = Writer.RelativeMode( );
  //! Modify:
  //! Writer.RelativeMode( ) = Standard_True;
  Standard_EXPORT   Standard_Boolean& RelativeMode() ;
  
  //! Returns the address to the
  //! flag defining the mode for writing the file. This address
  //! may be used to either read or change the flag.
  //! If the mode returns True (default value) the generated
  //! file is an ASCII file. If the mode returns False, the
  //! generated file is a binary file.
  Standard_EXPORT   Standard_Boolean& ASCIIMode() ;
  
  //! Converts a given shape to STL format and writes it to file with a given filename.
  Standard_EXPORT   void Write (const TopoDS_Shape& aShape, const Standard_CString aFileName, const Standard_Boolean InParallel = Standard_False) ;




protected:





private:



  Standard_Boolean theRelativeMode;
  Standard_Boolean theASCIIMode;
  Standard_Real theDeflection;
  Standard_Real theCoefficient;
  Handle(StlMesh_Mesh) theStlMesh;


};







#endif // _StlAPI_Writer_HeaderFile
