// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_GeometryData_HeaderFile
#define _TopOpeBRepDS_GeometryData_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopOpeBRepDS_ListOfInterference.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
class TopOpeBRepDS_ListOfInterference;
class TopOpeBRepDS_Interference;


//! mother-class of SurfaceData, CurveData, PointData
class TopOpeBRepDS_GeometryData 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_GeometryData();
  
  Standard_EXPORT TopOpeBRepDS_GeometryData(const TopOpeBRepDS_GeometryData& Other);
  
  Standard_EXPORT   void Assign (const TopOpeBRepDS_GeometryData& Other) ;
  void operator= (const TopOpeBRepDS_GeometryData& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT  const  TopOpeBRepDS_ListOfInterference& Interferences()  const;
  
  Standard_EXPORT   TopOpeBRepDS_ListOfInterference& ChangeInterferences() ;
  
  Standard_EXPORT   void AddInterference (const Handle(TopOpeBRepDS_Interference)& I) ;




protected:





private:



  TopOpeBRepDS_ListOfInterference myInterferences;


};







#endif // _TopOpeBRepDS_GeometryData_HeaderFile
