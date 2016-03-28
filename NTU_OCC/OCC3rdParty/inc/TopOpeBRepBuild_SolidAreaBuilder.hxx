// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_SolidAreaBuilder_HeaderFile
#define _TopOpeBRepBuild_SolidAreaBuilder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopOpeBRepBuild_Area3dBuilder.hxx>
#include <Standard_Boolean.hxx>
class TopOpeBRepBuild_LoopSet;
class TopOpeBRepBuild_LoopClassifier;



//! The SolidAreaBuilder algorithm is used to construct Solids from a LoopSet,
//! where the Loop is the composite topological object of the boundary,
//! here wire or block of edges.
//! The LoopSet gives an iteration on Loops.
//! For each Loop  it indicates if it is on the boundary (wire) or if it
//! results from  an interference (block of edges).
//! The result of the SolidAreaBuilder is an iteration on areas.
//! An area is described by a set of Loops.
class TopOpeBRepBuild_SolidAreaBuilder  : public TopOpeBRepBuild_Area3dBuilder
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_SolidAreaBuilder();
  
  //! Creates a SolidAreaBuilder to build Solids on
  //! the (shells,blocks of face) of <LS>, using the classifier <LC>.
  Standard_EXPORT TopOpeBRepBuild_SolidAreaBuilder(TopOpeBRepBuild_LoopSet& LS, TopOpeBRepBuild_LoopClassifier& LC, const Standard_Boolean ForceClass = Standard_False);
  
  Standard_EXPORT   void InitSolidAreaBuilder (TopOpeBRepBuild_LoopSet& LS, TopOpeBRepBuild_LoopClassifier& LC, const Standard_Boolean ForceClass = Standard_False) ;




protected:





private:





};







#endif // _TopOpeBRepBuild_SolidAreaBuilder_HeaderFile