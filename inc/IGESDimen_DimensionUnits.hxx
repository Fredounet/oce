// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_DimensionUnits_HeaderFile
#define _IGESDimen_DimensionUnits_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_DimensionUnits.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;


//! defines Dimension Units, Type <406>, Form <28>
//! in package IGESDimen
//! Describes the units and formatting details of the
//! nominal value of a dimension.
class IGESDimen_DimensionUnits : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_DimensionUnits();
  
  //! This method is used to set the fields of the class
  //! DimensionUnits
  //! - nbPropVal  : Number of property values, always = 6
  //! - aSecondPos : Secondary Dimension Position
  //! 0 = This is the main text
  //! 1 = Before primary dimension
  //! 2 = After primary dimension
  //! 3 = Above primary dimension
  //! 4 = Below primary dimension
  //! - aUnitsInd  : Units Indicator
  //! - aCharSet   : Character Set used
  //! - aFormat    : Format HAsciiString
  //! 1 = Standard ASCII
  //! 1001 = Symbol Font 1
  //! 1002 = Symbol Font 2
  //! 1003 = Drafting Font
  //! - aFracFlag  : Fraction Flag
  //! 0 = Display values as decimal numbers
  //! 1 = Display values as fractions
  //! - aPrecision : Precision Value
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Standard_Integer aSecondPos, const Standard_Integer aUnitsInd, const Standard_Integer aCharSet, const Handle(TCollection_HAsciiString)& aFormat, const Standard_Integer aFracFlag, const Standard_Integer aPrecision) ;
  
  //! returns the number of property values
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns position of secondary dimension w.r.t. primary dimension
  Standard_EXPORT   Standard_Integer SecondaryDimenPosition()  const;
  
  //! returns the units indicator
  Standard_EXPORT   Standard_Integer UnitsIndicator()  const;
  
  //! returns the character set interpretation
  Standard_EXPORT   Standard_Integer CharacterSet()  const;
  
  //! returns the string used in formatting value
  Standard_EXPORT   Handle(TCollection_HAsciiString) FormatString()  const;
  
  //! returns the fraction flag
  Standard_EXPORT   Standard_Integer FractionFlag()  const;
  
  //! returns the precision/denominator
  //! number of decimal places when FractionFlag() = 0
  //! denominator of fraction when FractionFlag() = 1
  Standard_EXPORT   Standard_Integer PrecisionOrDenominator()  const;




  DEFINE_STANDARD_RTTI(IGESDimen_DimensionUnits)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Integer theSecondaryDimenPosition;
  Standard_Integer theUnitsIndicator;
  Standard_Integer theCharacterSet;
  Handle(TCollection_HAsciiString) theFormatString;
  Standard_Integer theFractionFlag;
  Standard_Integer thePrecision;


};







#endif // _IGESDimen_DimensionUnits_HeaderFile
