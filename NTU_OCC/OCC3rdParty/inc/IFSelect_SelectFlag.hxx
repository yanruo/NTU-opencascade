// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectFlag_HeaderFile
#define _IFSelect_SelectFlag_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IFSelect_SelectFlag.hxx>

#include <TCollection_AsciiString.hxx>
#include <IFSelect_SelectExtract.hxx>
#include <Standard_CString.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class Interface_EntityIterator;
class Interface_Graph;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! A SelectFlag queries a flag noted in the bitmap of the Graph.
//! The Flag is designated by its Name. Flag Names are defined
//! by Work Session and, as necessary, other functional objects
//!
//! WorkSession from IFSelect defines flag "Incorrect"
//! Objects which control application running define some others
class IFSelect_SelectFlag : public IFSelect_SelectExtract
{

public:

  
  //! Creates a Select Flag, to query a flag designated by its name
  Standard_EXPORT IFSelect_SelectFlag(const Standard_CString flagname);
  
  //! Returns the name of the flag
  Standard_EXPORT   Standard_CString FlagName()  const;
  
  //! Returns the list of selected entities. It is redefined to
  //! work on the graph itself (not queried by sort)
  //!
  //! An entity is selected if its flag is True on Direct mode,
  //! False on Reversed mode
  //!
  //! If flag does not exist for the given name, returns an empty
  //! result, whatever the Direct/Reversed sense
  Standard_EXPORT virtual   Interface_EntityIterator RootResult (const Interface_Graph& G)  const;
  
  //! Returns always False because RootResult has done the work
  Standard_EXPORT   Standard_Boolean Sort (const Standard_Integer rank, const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;
  
  //! Returns a text defining the criterium, includes the flag name
  Standard_EXPORT   TCollection_AsciiString ExtractLabel()  const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectFlag)

protected:




private: 


  TCollection_AsciiString thename;


};







#endif // _IFSelect_SelectFlag_HeaderFile