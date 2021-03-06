// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_SweptSurface_HeaderFile
#define _StepGeom_SweptSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_SweptSurface.hxx>

#include <Handle_StepGeom_Curve.hxx>
#include <StepGeom_Surface.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_Curve;
class TCollection_HAsciiString;



class StepGeom_SweptSurface : public StepGeom_Surface
{

public:

  
  //! Returns a SweptSurface
  Standard_EXPORT StepGeom_SweptSurface();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Curve)& aSweptCurve) ;
  
  Standard_EXPORT   void SetSweptCurve (const Handle(StepGeom_Curve)& aSweptCurve) ;
  
  Standard_EXPORT   Handle(StepGeom_Curve) SweptCurve()  const;




  DEFINE_STANDARD_RTTI(StepGeom_SweptSurface)

protected:




private: 


  Handle(StepGeom_Curve) sweptCurve;


};







#endif // _StepGeom_SweptSurface_HeaderFile
