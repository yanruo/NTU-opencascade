// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_TextureEnv_HeaderFile
#define _Graphic3d_TextureEnv_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_TextureEnv.hxx>

#include <Graphic3d_NameOfTextureEnv.hxx>
#include <Graphic3d_TextureRoot.hxx>
#include <Standard_Integer.hxx>
class Standard_OutOfRange;
class TCollection_AsciiString;


//! This class provides environment texture usable only in Visual3d_ContextView
class Graphic3d_TextureEnv : public Graphic3d_TextureRoot
{

public:

  
  //! Creates an environment texture from a file.
  Standard_EXPORT Graphic3d_TextureEnv(const TCollection_AsciiString& theFileName);
  
  //! Creates an environment texture from a predefined texture name set.
  Standard_EXPORT Graphic3d_TextureEnv(const Graphic3d_NameOfTextureEnv theName);
  

  //! Returns the name of the predefined textures or NOT_ENV_UNKNOWN
  //! when the name is given as a filename.
  Standard_EXPORT   Graphic3d_NameOfTextureEnv Name()  const;
  

  //! Returns the number of predefined textures.
  Standard_EXPORT static   Standard_Integer NumberOfTextures() ;
  

  //! Returns the name of the predefined texture of rank <aRank>
  Standard_EXPORT static   TCollection_AsciiString TextureName (const Standard_Integer theRank) ;




  DEFINE_STANDARD_RTTI(Graphic3d_TextureEnv)

protected:




private: 


  Graphic3d_NameOfTextureEnv myName;


};







#endif // _Graphic3d_TextureEnv_HeaderFile
