#include "pch.h"
#include "NativeClass.h"

#include <vcclr.h>
#include "CPPCLRNet5.h"

class NativeClassImpl
{
public:
   NativeClassImpl()
      : _clrClass( gcnew CPPCLRNet5::CLRClass() )
   {

   }

   int Add( int a, int b )
   {
      return _clrClass->Add( a, b );
   }

private:
   gcroot<CPPCLRNet5::CLRClass^> _clrClass;

};


NativeClass::NativeClass()
   : _impl( new NativeClassImpl() )
{

}

NativeClass::~NativeClass() {}

int NativeClass::NativeAdd( int a, int b )
{
   return _impl->Add( a, b );
}

