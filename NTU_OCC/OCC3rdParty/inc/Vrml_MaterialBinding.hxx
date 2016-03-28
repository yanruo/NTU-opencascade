// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_MaterialBinding_HeaderFile
#define _Vrml_MaterialBinding_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Vrml_MaterialBindingAndNormalBinding.hxx>
#include <Standard_OStream.hxx>


//! defines a MaterialBinding node of VRML specifying properties of geometry
//! and its appearance.
//! Material nodes may contain more than one material. This node specifies how the current
//! materials are bound to shapes that follow in the scene graph. Each shape node may
//! interpret bindings differently. For example, a Sphere node is always drawn using the first
//! material in the material node, no matter what the current MaterialBinding, while a Cube
//! node may use six different materials to draw each of its six faces, depending on the
//! MaterialBinding.
class Vrml_MaterialBinding 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_MaterialBinding(const Vrml_MaterialBindingAndNormalBinding aValue);
  
  Standard_EXPORT Vrml_MaterialBinding();
  
  Standard_EXPORT   void SetValue (const Vrml_MaterialBindingAndNormalBinding aValue) ;
  
  Standard_EXPORT   Vrml_MaterialBindingAndNormalBinding Value()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  Vrml_MaterialBindingAndNormalBinding myValue;


};







#endif // _Vrml_MaterialBinding_HeaderFile
