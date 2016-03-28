// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_GeneralRelation_HeaderFile
#define _Expr_GeneralRelation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Expr_GeneralRelation.hxx>

#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Expr_GeneralExpression.hxx>
#include <Handle_Expr_NamedUnknown.hxx>
class Standard_OutOfRange;
class Standard_NumericError;
class Expr_GeneralExpression;
class Expr_NamedUnknown;
class TCollection_AsciiString;


//! Defines the general purposes of any relation between
//! expressions.
class Expr_GeneralRelation : public MMgt_TShared
{

public:

  
  //! Returns the current status of the relation
  Standard_EXPORT virtual   Standard_Boolean IsSatisfied()  const = 0;
  
  //! Tests if <me> is linear between its NamedUnknowns.
  Standard_EXPORT virtual   Standard_Boolean IsLinear()  const = 0;
  
  //! Returns a GeneralRelation after replacement of
  //! NamedUnknowns by an associated expression, and after
  //! values computation.
  Standard_EXPORT virtual   Handle(Expr_GeneralRelation) Simplified()  const = 0;
  
  //! Replaces NamedUnknowns by associated expressions,
  //! and computes values in <me>.
  Standard_EXPORT virtual   void Simplify()  = 0;
  
  //! Returns a copy of <me> having the same unknowns and
  //! functions.
  Standard_EXPORT virtual   Handle(Expr_GeneralRelation) Copy()  const = 0;
  
  //! Returns the number of relations contained in <me>.
  Standard_EXPORT virtual   Standard_Integer NbOfSubRelations()  const = 0;
  
  //! Returns the number of SingleRelations contained in
  //! <me>.
  Standard_EXPORT virtual   Standard_Integer NbOfSingleRelations()  const = 0;
  
  //! Returns the relation denoted by <index> in <me>.
  //! An exception is raised if <index> is out of range.
  Standard_EXPORT virtual   Handle(Expr_GeneralRelation) SubRelation (const Standard_Integer index)  const = 0;
  
  //! Tests if <exp> contains <var>.
  Standard_EXPORT virtual   Standard_Boolean Contains (const Handle(Expr_GeneralExpression)& exp)  const = 0;
  
  //! Replaces all occurences of <var> with <with> in <me>.
  Standard_EXPORT virtual   void Replace (const Handle(Expr_NamedUnknown)& var, const Handle(Expr_GeneralExpression)& with)  = 0;
  
  //! returns a string representing <me> in a readable way.
  Standard_EXPORT virtual   TCollection_AsciiString String()  const = 0;




  DEFINE_STANDARD_RTTI(Expr_GeneralRelation)

protected:




private: 




};







#endif // _Expr_GeneralRelation_HeaderFile