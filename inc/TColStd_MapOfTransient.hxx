// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_MapOfTransient_HeaderFile
#define _TColStd_MapOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_StdMapNodeOfMapOfTransient_HeaderFile
#include <Handle_TColStd_StdMapNodeOfMapOfTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_Transient;
class TColStd_MapTransientHasher;
class TColStd_StdMapNodeOfMapOfTransient;
class TColStd_MapIteratorOfMapOfTransient;



class TColStd_MapOfTransient  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   TColStd_MapOfTransient(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TColStd_MapOfTransient& Assign(const TColStd_MapOfTransient& Other) ;
    TColStd_MapOfTransient& operator =(const TColStd_MapOfTransient& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TColStd_MapOfTransient()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(Standard_Transient)& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Standard_Transient)& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(Standard_Transient)& aKey) ;





protected:





private:

  
  Standard_EXPORT   TColStd_MapOfTransient(const TColStd_MapOfTransient& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif