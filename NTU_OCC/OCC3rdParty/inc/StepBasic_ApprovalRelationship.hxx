// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ApprovalRelationship_HeaderFile
#define _StepBasic_ApprovalRelationship_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ApprovalRelationship.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_Approval.hxx>
#include <MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_Approval;



class StepBasic_ApprovalRelationship : public MMgt_TShared
{

public:

  
  //! Returns a ApprovalRelationship
  Standard_EXPORT StepBasic_ApprovalRelationship();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepBasic_Approval)& aRelatingApproval, const Handle(StepBasic_Approval)& aRelatedApproval) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  Standard_EXPORT   void SetRelatingApproval (const Handle(StepBasic_Approval)& aRelatingApproval) ;
  
  Standard_EXPORT   Handle(StepBasic_Approval) RelatingApproval()  const;
  
  Standard_EXPORT   void SetRelatedApproval (const Handle(StepBasic_Approval)& aRelatedApproval) ;
  
  Standard_EXPORT   Handle(StepBasic_Approval) RelatedApproval()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ApprovalRelationship)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(TCollection_HAsciiString) description;
  Handle(StepBasic_Approval) relatingApproval;
  Handle(StepBasic_Approval) relatedApproval;


};







#endif // _StepBasic_ApprovalRelationship_HeaderFile