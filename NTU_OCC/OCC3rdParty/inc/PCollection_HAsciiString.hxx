// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCollection_HAsciiString_HeaderFile
#define _PCollection_HAsciiString_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PCollection_HAsciiString.hxx>

#include <TCollection_AsciiString.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Handle_PCollection_HAsciiString.hxx>
#include <Standard_Character.hxx>
#include <DBC_VArrayOfCharacter.hxx>
#include <Standard_Persistent.hxx>
#include <Standard_CString.hxx>
#include <Handle_PCollection_HExtendedString.hxx>
#include <Standard_OStream.hxx>
class Standard_OutOfRange;
class Standard_NegativeValue;
class Standard_NumericError;
class TCollection_AsciiString;
class PCollection_HExtendedString;
class DBC_VArrayOfCharacter;


class PCollection_HAsciiString : public Standard_Persistent
{

public:

  
  //! Creation and initialization with the string S.
  Standard_EXPORT PCollection_HAsciiString(const Standard_CString S);
  
  //! Creation and initialization with the string S from TCollection.
  Standard_EXPORT PCollection_HAsciiString(const TCollection_AsciiString& S);
  
  //! Creation and initialization with the character C.
  Standard_EXPORT PCollection_HAsciiString(const Standard_Character C);
  
  //! Creation of a sub-string of the string S.
  //! The sub-string starts at the index FromIndex and ends
  //! at the index ToIndex
  Standard_EXPORT PCollection_HAsciiString(const Handle(PCollection_HAsciiString)& S, const Standard_Integer FromIndex, const Standard_Integer ToIndex);
  
  //! Creation by converting an extended string to a normal
  //! string. Raises OutOfRange if the String is not in the "Ascii range".
  Standard_EXPORT PCollection_HAsciiString(const Handle(PCollection_HExtendedString)& S);
  
  //! Creation and initialization by converting the real
  //! value into a string.
  //! F describes a format using "C" conventions.
  Standard_EXPORT PCollection_HAsciiString(const Standard_Real R, const Standard_CString F = "%f");
  
  //! Creation and initialization by converting the Integer
  //! value into a string.
  //! F describes a format using "C" conventions.
  Standard_EXPORT PCollection_HAsciiString(const Standard_Integer I, const Standard_CString F = "%d");
  
  //! Pushing a string at the end of the string me
  Standard_EXPORT   void Append (const Handle(PCollection_HAsciiString)& S) ;
  
  //! Converts the first character into its corresponding
  //! upper-case character and the other characters into lowercase
  Standard_EXPORT   void Capitalize() ;
  
  //! center
  //! Length becomes equal to Width and the new characters are
  //! equal to Filler
  //! Raises an exception if Width is less than zero
  //! if Width < Length nothing happens
  Standard_EXPORT   void Center (const Standard_Integer Width, const Standard_Character Filler) ;
  
  //! Substitutes all the characters equal to C by NewC in the
  //! string <me>.The substition can be case sensitive.
  Standard_EXPORT   void ChangeAll (const Standard_Character C, const Standard_Character NewC, const Standard_Boolean CaseSensitive) ;
  
  //! Remove all characters in the string <me>.
  //! Length is equal to zero now.
  Standard_EXPORT   void Clear() ;
  
  //! Converts a persistent HAsciiString to a non
  //! persistent AsciiString.
  Standard_EXPORT   TCollection_AsciiString Convert()  const;
  
  //! Returns the index of the first character of <Set> founded in <me>.
  //! The search begins to the index FromIndex and ends to the
  //! the index ToIndex.
  //! Returns zero if failure.
  //! Raises an exception if FromIndex or ToIndex is out of range.
  Standard_EXPORT   Standard_Integer FirstLocationInSet (const Handle(PCollection_HAsciiString)& Set, const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  //! Returns the index of the first character of <me>
  //! that is not present in the set <Set>.
  //! The search begins to the index FromIndex and ends to the
  //! the index ToIndex in <me>.
  //! Returns zero if failure.
  //! Raises an exception if FromIndex or ToIndex is out of range.
  Standard_EXPORT   Standard_Integer FirstLocationNotInSet (const Handle(PCollection_HAsciiString)& Set, const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  //! Pushing a string after a specific index in the string <me>.
  //! Raises an exception if Index is out of bounds.
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(PCollection_HAsciiString)& S) ;
  
  //! Pushing a string before a specific index in the string <me>
  //! Raises an exception if Index is out of bounds
  Standard_EXPORT   void InsertBefore (const Standard_Integer Index, const Handle(PCollection_HAsciiString)& S) ;
  
  //! Returns the integer value corresponding to the string <me>
  //! Raises an exception if the string does not correspond to
  //! an integer value.
  Standard_EXPORT   Standard_Integer IntegerValue()  const;
  
  //! Test if characters are different
  //! between <me> and <other>.
  Standard_EXPORT   Standard_Boolean IsDifferent (const Handle(PCollection_HAsciiString)& other)  const;
  
  //! Returns True if the string <me> contains zero character
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  //! Returns TRUE if <me> is 'ASCII' greater than <other>.
  Standard_EXPORT   Standard_Boolean IsGreater (const Handle(PCollection_HAsciiString)& other)  const;
  
  //! Returns True if the string contains an integer value.
  Standard_EXPORT   Standard_Boolean IsIntegerValue()  const;
  
  //! Returns TRUE if <me> is 'ASCII' less than <other>.
  Standard_EXPORT   Standard_Boolean IsLess (const Handle(PCollection_HAsciiString)& other)  const;
  
  //! Returns True if the string contains an Real value.
  Standard_EXPORT   Standard_Boolean IsRealValue()  const;
  
  //! Returns True if two strings are equal.
  //! The comparison is case sensitive.
  Standard_EXPORT   Standard_Boolean IsSameString (const Handle(PCollection_HAsciiString)& S)  const;
  
  //! Returns True if two strings are equal.
  //! The comparison is case sensitive if the flag is set.
  Standard_EXPORT   Standard_Boolean IsSameString (const Handle(PCollection_HAsciiString)& S, const Standard_Boolean CaseSensitive)  const;
  
  //! Removes all space characters in the begining of the
  //! string.
  Standard_EXPORT   void LeftAdjust() ;
  
  //! Left justify.
  //! Length becomes equal to Width and the new characters are
  //! equal to Filler.
  //! If Width < Length nothing happens.
  //! Raises an exception if Width is less than zero.
  Standard_EXPORT   void LeftJustify (const Standard_Integer Width, const Standard_Character Filler) ;
  
  //! Number of characters of the String.
  Standard_EXPORT   Standard_Integer Length()  const;
  
  //! Returns the index of the nth occurence of the character C
  //! in the string <me> from the starting index FromIndex to the
  //! ending index ToIndex.
  //! Returns zero if failure.
  //! Raises an exception if FromIndex or ToIndex is out of range.
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Standard_Character C, const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  //! Returns an index in the string <me> of the first occurence
  //! of the string S in the string <me> from the starting index
  //! FromIndex to the ending index ToIndex
  //! returns zero if failure
  //! Raises an exception if FromIndex or ToIndex is out of range.
  Standard_EXPORT   Standard_Integer Location (const Handle(PCollection_HAsciiString)& S, const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  //! Converts any upper-case character to its corresponding
  //! lower-case character in the string <me>. If there is no
  //! corresponding lower-case character, the character is
  //! unchanged
  //! before
  //! me = "aBAcd123"
  //! after
  //! me = "abacd123"
  Standard_EXPORT   void Lowercase() ;
  
  //! Pushing a string at the begining of the string <me>
  //! before
  //! me = "cde" , S = "ab"
  //! after
  //! me = "abcde" , S = "ab"
  Standard_EXPORT   void Prepend (const Handle(PCollection_HAsciiString)& S) ;
  
  //! Prints the content of <me> on the stream S.
  Standard_EXPORT   void Print (Standard_OStream& S)  const;
  
  //! Returns the real value corresponding to the string <me>.
  //! Raises an exception if the string does not correspond to a real value.
  Standard_EXPORT   Standard_Real RealValue()  const;
  
  //! Removes the character located at the index Index in the string.
  //! Raises an exception if Index is out of bounds.
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  //! Removes all the characters from the index FromIndex to the
  //! index ToIndex.
  //! Raises an exception if FromIndex or ToIndex is out of bounds.
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;
  
  //! Removes all the occurences of the character C in the string
  Standard_EXPORT   void RemoveAll (const Standard_Character C, const Standard_Boolean CaseSensitive) ;
  
  //! Removes all space characters at the end of the string.
  Standard_EXPORT   void RightAdjust() ;
  
  //! Right justify.
  //! Length becomes equal to Width and the new characters are
  //! equal to Filler.
  //! If Width < Length nothing happens.
  //! Raises an exception if Width is less than zero.
  Standard_EXPORT   void RightJustify (const Standard_Integer Width, const Standard_Character Filler) ;
  
  //! Substitutes the character located to the position Index
  //! by the character C.
  //! Raises an exception if the Index is out of bounds.
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Standard_Character C) ;
  
  //! Substitutes from the index Index to the end by the string S.
  //! Raises an exception if Index is out of bounds.
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PCollection_HAsciiString)& S) ;
  
  //! Splits a string of characters into two sub-strings.
  Standard_EXPORT   Handle(PCollection_HAsciiString) Split (const Standard_Integer Index) ;
  
  //! Creation of a sub-string of the string <me>.
  //! The sub-string starts to the index Fromindex and ends
  //! to the index ToIndex.
  //! Raises an exception if ToIndex or FromIndex is out of bounds.
  Standard_EXPORT   Handle(PCollection_HAsciiString) SubString (const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  //! Extracts <aString> token from <me>.
  //! The token extracted is the indice number <num>.
  Standard_EXPORT   Handle(PCollection_HAsciiString) Token (const Standard_CString separators = " \t", const Standard_Integer whichone = 1)  const;
  
  //! Transforms all the characters into upper-case.
  //! If there is no corresponding upper-case character, the
  //! character is unchanged.
  Standard_EXPORT   void Uppercase() ;
  
  //! Length of the string ignoring all spaces (' ') and the
  //! control character at the end.
  Standard_EXPORT   Standard_Integer UsefullLength()  const;
  
  //! Returns the character of index Index of the string
  Standard_EXPORT   Standard_Character Value (const Standard_Integer Index)  const;

PCollection_HAsciiString( )
{
  
}
PCollection_HAsciiString(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    const DBC_VArrayOfCharacter& _CSFDB_GetPCollection_HAsciiStringData() const { return Data; }



  DEFINE_STANDARD_RTTI(PCollection_HAsciiString)

protected:




private: 

  
  //! Assigns the field of the current structure with
  //! the given value.Private method.
  Standard_EXPORT   void Assign (const DBC_VArrayOfCharacter& TheData) ;

  DBC_VArrayOfCharacter Data;


};







#endif // _PCollection_HAsciiString_HeaderFile