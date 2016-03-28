// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_DataEnvironment_HeaderFile
#define _StepRepr_DataEnvironment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepRepr_DataEnvironment.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepRepr_HArray1OfPropertyDefinitionRepresentation.hxx>
#include <MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepRepr_HArray1OfPropertyDefinitionRepresentation;


//! Representation of STEP entity DataEnvironment
class StepRepr_DataEnvironment : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepRepr_DataEnvironment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepRepr_HArray1OfPropertyDefinitionRepresentation)& aElements) ;
  
  //! Returns field Name
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  //! Set field Name
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& Name) ;
  
  //! Returns field Description
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  //! Set field Description
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& Description) ;
  
  //! Returns field Elements
  Standard_EXPORT   Handle(StepRepr_HArray1OfPropertyDefinitionRepresentation) Elements()  const;
  
  //! Set field Elements
  Standard_EXPORT   void SetElements (const Handle(StepRepr_HArray1OfPropertyDefinitionRepresentation)& Elements) ;




  DEFINE_STANDARD_RTTI(StepRepr_DataEnvironment)

protected:




private: 


  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Handle(StepRepr_HArray1OfPropertyDefinitionRepresentation) theElements;


};







#endif // _StepRepr_DataEnvironment_HeaderFile