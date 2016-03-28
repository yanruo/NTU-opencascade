// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepShape_RWManifoldSolidBrep_HeaderFile
#define _RWStepShape_RWManifoldSolidBrep_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepShape_ManifoldSolidBrep.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepShape_ManifoldSolidBrep;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for ManifoldSolidBrep
class RWStepShape_RWManifoldSolidBrep 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepShape_RWManifoldSolidBrep();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepShape_ManifoldSolidBrep)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepShape_ManifoldSolidBrep)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepShape_ManifoldSolidBrep)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepShape_RWManifoldSolidBrep_HeaderFile
