/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkOpenGL.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef __vtkOpenGLError_h
#define __vtkOpenGLError_h

#include "vtkgl.h"
#include "vtkSetGet.h"

#define VTK_REPORT_OPENGL_ERRORS

// Description:
// The following functions can be used to detect and report, and/or
// silently clear OpenGL error flags. These are not intended to be
// used driectly, instead use the following macros.
//
// vtkOpenGLClearErrorMacro() -- Silently clear OpenGL error flags.
//
// vtkOpenGLCheckErrorMacro(message) -- Check and clear OpenGL's error
// flags. Report errors detected via vtkErrorMacro.
//
// vtkOpenGLStaticCheckErrorMacro(message) -- Check and clear OpenGL's
// error flags. Report errors detected via vtkGenericWarningMacro.
// This may be used in static methods and outside of vtkObjects.
//
// The intended usage pattern is to 1) call vtkOpenGLClearErrorMacro
// at the top of, and 2) vtkOpenGLCheckErrorMacro at the bottom of
// methods that make OpenGL calls.
//
// By calling vtkOpenGLClearErrorMacro at the top of a method that
// makes OpenGL calls, you isolate the code and prevent it from
// detecting any preceding errors. By calling vtkOpenGLCheckErrorMacro
// at the bottom of the method you clear the error flags and report
// any errors that have occured in the method where they occured.
//
// The macros maybe completely disabled via the CMakeLists variable
// VTK_REPORT_OPENGL_ERRORS. Note that in that case error flags are
// never cleared so that if an error occurs the flags will remain dirty
// making it impossible for anyone else to use them reliably. Please
// don't disable them with out a good reason.



// Description:
// Convert an OpenGL error code into a descriptive
// string.
inline
const char *vtkOpenGLStrError(unsigned int code)
{
  switch(static_cast<GLenum>(code))
    {
    case GL_NO_ERROR:
      return "No error";
      break;
    case GL_INVALID_ENUM:
      return "Invalid enum";
      break;
    case GL_INVALID_VALUE:
      return "Invalid value";
      break;
    case GL_INVALID_OPERATION:
      return "Invalid operation";
      break;
    case GL_STACK_OVERFLOW:
      return "Stack overflow";
      break;
    case GL_STACK_UNDERFLOW:
      return "Stack underflow";
      break;
    case GL_OUT_OF_MEMORY:
      return "Out of memory";
      break;
    case vtkgl::TABLE_TOO_LARGE:
      return "Table too large";
      break;
    case vtkgl::INVALID_FRAMEBUFFER_OPERATION_EXT:
      return "Invalid framebuffer operation";
      break;
    case vtkgl::TEXTURE_TOO_LARGE_EXT:
      return "Texture too large";
      break;
    }
  return "Unknown error";
}

// Description:
// Check for OpenGL errors. Error status is querried until
// OpenGL reports no errors. The list of errors and their
// descriptions are returned in the user supplied arrays.
// User passes the size of the arrays as the first argument.
// Error flags will still be cleared if the user arays are
// less than the number of errors.
#if defined(VTK_REPORT_OPENGL_ERRORS)
inline
int vtkGetOpenGLErrors(
      int maxNum,
      unsigned int *errCode,
      const char **errDesc)
{
  int i=0;
  GLenum code = glGetError();
  if (i<maxNum)
    {
    errCode[i] = static_cast<unsigned int>(code);
    errDesc[i] = vtkOpenGLStrError(code);
    }
  while (code!=GL_NO_ERROR)
    {
    i+=1;
    code = glGetError();
    if (i<maxNum)
      {
      errCode[i] = static_cast<unsigned int>(code);
      errDesc[i] = vtkOpenGLStrError(code);
      }
    }
  return i;
}
#else
inline
int vtkGetOpenGLErrors(
      int maxNum,
      unsigned int *errCode,
      const char **errDesc)
{
  (void)maxNum;
  (void)errCode;
  (void)errDesc;
  return 0;
}
#endif

// Description:
// Send a set of errors collected by GetOpenGLErrors
// to the give stream. The number of errors is obtained
// in the return value of GetOpenGLErrors, while the max
// errors gives the size of the error arrays.
#if defined(VTK_REPORT_OPENGL_ERRORS)
inline
void vtkPrintOpenGLErrors(
      ostream &os,
      int maxErrors,
      int numErrors,
      unsigned int *errCode,
      const char **errDesc)
{
  os << numErrors << " OpenGL errors detected" << endl;
  for (int i=0; (i<numErrors)&&(i<maxErrors); ++i)
    {
    os << "  " <<  i << " : (" << errCode[i] << ") " << errDesc[i] << endl;
    }
  if (numErrors>maxErrors)
    {
    os
      << "More than " << maxErrors
      << " detected! The remainder are not reported"
      << endl;
    }
}
#else
inline
void vtkPrintOpenGLErrors(
      ostream &os,
      int maxErrors,
      int numErrors,
      unsigned int *errCode,
      const char **errDesc)
{
  (void)os;
  (void)maxErrors;
  (void)numErrors;
  (void)errCode;
  (void)errDesc;
}
#endif

// Description:
// Clear OpenGL's error flags.
#if defined(VTK_REPORT_OPENGL_ERRORS)
inline
void vtkClearOpenGLErrors()
{
  while (glGetError()!=GL_NO_ERROR){;}
}
#else
inline
void vtkClearOpenGLErrors(){}
#endif

#if !defined(VTK_REPORT_OPENGL_ERRORS)
# define vtkOpenGLClearErrorMacro()
# define vtkOpenGLCheckErrorMacro(message)
# define vtkOpenGLStaticCheckErrorMacro(message)
#else
# define vtkOpenGLClearErrorMacro() vtkClearOpenGLErrors();
# include <sstream> // for error macro
# define vtkOpenGLCheckErrorMacroImpl(ostr, message) \
{                                                    \
  const int maxErrors = 16;                          \
  unsigned int errCode[maxErrors] = {0};             \
  const char *errDesc[maxErrors] = {NULL};           \
                                                     \
  int numErrors                                      \
    = vtkGetOpenGLErrors(                            \
        maxErrors,                                   \
        errCode,                                     \
        errDesc);                                    \
                                                     \
  if (numErrors)                                     \
    {                                                \
    std::ostringstream oss;                          \
    vtkPrintOpenGLErrors(                            \
          oss,                                       \
          maxErrors,                                 \
          numErrors,                                 \
          errCode,                                   \
          errDesc);                                  \
                                                     \
    ostr(<< message << " " << oss.str().c_str());    \
    }                                                \
}
# define vtkOpenGLCheckErrorMacro(message) \
  vtkOpenGLCheckErrorMacroImpl(vtkErrorMacro, message)
# define vtkOpenGLStaticCheckErrorMacro(message) \
  vtkOpenGLCheckErrorMacroImpl(vtkGenericWarningMacro, message)
#endif

// Use this macro for fine grained error checking during
// debugging. It is removed for Release builds.
#ifdef NDEBUG
# define vtkOpenGLDebugClearErrorMacro()
# define vtkOpenGLDebugCheckErrorMacro(message)
#else
# define vtkOpenGLDebugClearErrorMacro() \
  vtkOpenGLClearErrorMacro()
# define vtkOpenGLDebugCheckErrorMacro(message) \
  vtkOpenGLStaticCheckErrorMacro(message)
#endif

#endif
// VTK-HeaderTest-Exclude: vtkOpenGLError.h
