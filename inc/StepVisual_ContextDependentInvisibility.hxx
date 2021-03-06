// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_ContextDependentInvisibility_HeaderFile
#define _StepVisual_ContextDependentInvisibility_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_ContextDependentInvisibility.hxx>

#include <StepVisual_InvisibilityContext.hxx>
#include <StepVisual_Invisibility.hxx>
#include <Handle_StepVisual_HArray1OfInvisibleItem.hxx>
class StepVisual_HArray1OfInvisibleItem;
class StepVisual_InvisibilityContext;



class StepVisual_ContextDependentInvisibility : public StepVisual_Invisibility
{

public:

  
  //! Returns a ContextDependentInvisibility
  Standard_EXPORT StepVisual_ContextDependentInvisibility();
  
  Standard_EXPORT virtual   void Init (const Handle(StepVisual_HArray1OfInvisibleItem)& aInvisibleItems) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepVisual_HArray1OfInvisibleItem)& aInvisibleItems, const StepVisual_InvisibilityContext& aPresentationContext) ;
  
  Standard_EXPORT   void SetPresentationContext (const StepVisual_InvisibilityContext& aPresentationContext) ;
  
  Standard_EXPORT   StepVisual_InvisibilityContext PresentationContext()  const;




  DEFINE_STANDARD_RTTI(StepVisual_ContextDependentInvisibility)

protected:




private: 


  StepVisual_InvisibilityContext presentationContext;


};







#endif // _StepVisual_ContextDependentInvisibility_HeaderFile
