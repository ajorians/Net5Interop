// CPPStaticLibrary.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

#include "SomeClass.h"

std::string SomeClass::GetNativeString() const
{
   return std::to_string( ++_callCount ) + " From C++ :)";
}
