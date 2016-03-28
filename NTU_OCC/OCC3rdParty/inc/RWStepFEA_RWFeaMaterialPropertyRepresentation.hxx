// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepFEA_RWFeaMaterialPropertyRepresentation_HeaderFile
#define _RWStepFEA_RWFeaMaterialPropertyRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepFEA_FeaMaterialPropertyRepresentation.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepFEA_FeaMaterialPropertyRepresentation;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for FeaMaterialPropertyRepresentation
class RWStepFEA_RWFeaMaterialPropertyRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepFEA_RWFeaMaterialPropertyRepresentation();
  
  //! Reads FeaMaterialPropertyRepresentation
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepFEA_FeaMaterialPropertyRepresentation)& ent)  const;
  
  //! Writes FeaMaterialPropertyRepresentation
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepFEA_FeaMaterialPropertyRepresentation)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepFEA_FeaMaterialPropertyRepresentation)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepFEA_RWFeaMaterialPropertyRepresentation_HeaderFile
