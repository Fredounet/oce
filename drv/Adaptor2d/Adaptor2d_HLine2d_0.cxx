// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Adaptor2d_HLine2d.hxx>

#include <Standard_Type.hxx>

#include <Standard_OutOfRange.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_DomainError.hxx>
#include <Adaptor2d_Line2d.hxx>
#include <Adaptor2d_Curve2d.hxx>

 


IMPLEMENT_STANDARD_TYPE(Adaptor2d_HLine2d)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Adaptor2d_HCurve2d),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Adaptor2d_HLine2d)


IMPLEMENT_DOWNCAST(Adaptor2d_HLine2d,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Adaptor2d_HLine2d)


#define TheCurve Adaptor2d_Line2d
#define TheCurve_hxx <Adaptor2d_Line2d.hxx>
#define Adaptor2d_GenHCurve2d Adaptor2d_HLine2d
#define Adaptor2d_GenHCurve2d_hxx <Adaptor2d_HLine2d.hxx>
#define Handle_Adaptor2d_GenHCurve2d Handle_Adaptor2d_HLine2d
#define Adaptor2d_GenHCurve2d_Type_() Adaptor2d_HLine2d_Type_()
#include <Adaptor2d_GenHCurve2d.gxx>

