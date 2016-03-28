// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_MakeManifoldSolidBrep_HeaderFile
#define _TopoDSToStep_MakeManifoldSolidBrep_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepShape_ManifoldSolidBrep.hxx>
#include <TopoDSToStep_Root.hxx>
#include <Handle_Transfer_FinderProcess.hxx>
class StepShape_ManifoldSolidBrep;
class StdFail_NotDone;
class TopoDS_Shell;
class Transfer_FinderProcess;
class TopoDS_Solid;


//! This class implements the mapping between classes
//! Shell or Solid from TopoDS and ManifoldSolidBrep from
//! StepShape. All the topology and geometry comprised
//! into the shell or the solid are taken into account and
//! translated.
class TopoDSToStep_MakeManifoldSolidBrep  : public TopoDSToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopoDSToStep_MakeManifoldSolidBrep(const TopoDS_Shell& S, const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT TopoDSToStep_MakeManifoldSolidBrep(const TopoDS_Solid& S, const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT  const  Handle(StepShape_ManifoldSolidBrep)& Value()  const;




protected:





private:



  Handle(StepShape_ManifoldSolidBrep) theManifoldSolidBrep;


};







#endif // _TopoDSToStep_MakeManifoldSolidBrep_HeaderFile
