// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewBRepNaming_BooleanOperationFeat_HeaderFile
#define _QANewBRepNaming_BooleanOperationFeat_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <QANewBRepNaming_TopNaming.hxx>
#include <Standard_Boolean.hxx>
#include <TopAbs_ShapeEnum.hxx>
class TDF_Label;
class BRepAlgoAPI_BooleanOperation;
class TopoDS_Shape;


//! To load the BooleanOperationFeat results
class QANewBRepNaming_BooleanOperationFeat  : public QANewBRepNaming_TopNaming
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   void Init (const TDF_Label& ResultLabel) ;
  
  //! Returns the label to insert modified faces of an Object.
  Standard_EXPORT   TDF_Label ModifiedFaces()  const;
  
  //! Returns the label to insert modified edges of an Object.
  Standard_EXPORT   TDF_Label ModifiedEdges()  const;
  
  //! Returns the label to insert deleted faces of an Object.
  Standard_EXPORT   TDF_Label DeletedFaces()  const;
  
  //! Returns the label to insert deleted edges of an Object.
  Standard_EXPORT   TDF_Label DeletedEdges()  const;
  
  //! Returns the label to insert deleted vertices of an Object.
  Standard_EXPORT   TDF_Label DeletedVertices()  const;
  
  //! Returns the label to insert added shapes to an Object
  //! (given from tool).
  Standard_EXPORT   TDF_Label NewShapes()  const;
  
  Standard_EXPORT   TDF_Label Content()  const;
  
  Standard_EXPORT   TDF_Label DeletedDegeneratedEdges()  const;
  
  //! Returns true if the result is not the same as the object shape.
  Standard_EXPORT   Standard_Boolean IsResultChanged (BRepAlgoAPI_BooleanOperation& MakeShape)  const;
  
  //! If the shape is a compound the method
  //! returns the underlying shape type.
  Standard_EXPORT static   TopAbs_ShapeEnum ShapeType (const TopoDS_Shape& theShape) ;
  
  //! Returns true if workaround case identified
  Standard_EXPORT static   Standard_Boolean IsWRCase (const BRepAlgoAPI_BooleanOperation& theMS) ;
  
  //! Returns true if workaround case identified
  Standard_EXPORT static   Standard_Boolean IsWRCase2 (const BRepAlgoAPI_BooleanOperation& theMS) ;




protected:

  
  Standard_EXPORT QANewBRepNaming_BooleanOperationFeat();
  
  Standard_EXPORT QANewBRepNaming_BooleanOperationFeat(const TDF_Label& ResultLabel);
  
  //! If the shape is a compound the method
  //! returns the underlying shape.
  Standard_EXPORT   TopoDS_Shape GetShape (const TopoDS_Shape& theShape)  const;
  
  //! A default implementation for naming of a wire as an object of
  //! a boolean operation.
  Standard_EXPORT   void LoadWire (BRepAlgoAPI_BooleanOperation& MakeShape)  const;
  
  //! A default implementation for naming of a shell as an object of
  //! a boolean operation.
  Standard_EXPORT   void LoadShell (BRepAlgoAPI_BooleanOperation& MakeShape)  const;
  
  //! Loads the content of the result.
  Standard_EXPORT   void LoadContent (BRepAlgoAPI_BooleanOperation& MakeShape)  const;
  
  //! Loads the result.
  Standard_EXPORT   void LoadResult (BRepAlgoAPI_BooleanOperation& MakeShape)  const;
  
  //! Loads the deletion of the degenerated edges.
  Standard_EXPORT   void LoadDegenerated (BRepAlgoAPI_BooleanOperation& MakeShape)  const;
  
  //! To process special cases with evolution 1 to n
  Standard_EXPORT   void LoadModified1n (BRepAlgoAPI_BooleanOperation& theMS, const TopoDS_Shape& theShapeIn, const TopAbs_ShapeEnum theKindOfShape)  const;
  
  //! To process special cases with evolution 1 to 1
  Standard_EXPORT   void LoadModified11 (BRepAlgoAPI_BooleanOperation& theMS, const TopoDS_Shape& theShapeIn, const TopAbs_ShapeEnum theKindOfShape)  const;
  
  //! To process special case when result has symmetrical edges
  Standard_EXPORT   void LoadSymmetricalEdges (BRepAlgoAPI_BooleanOperation& theMS)  const;
  
  Standard_EXPORT   void LoadWRCase (BRepAlgoAPI_BooleanOperation& theMS)  const;




private:

  
  //! used inside LoadModified1n
  Standard_EXPORT   void Load1nFaces (BRepAlgoAPI_BooleanOperation& theMS, const TopoDS_Shape& theShapeIn)  const;




};







#endif // _QANewBRepNaming_BooleanOperationFeat_HeaderFile
