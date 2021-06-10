#pragma once

#include <string>

class SomeClass
{
public:
   std::string GetNativeString() const;

private:
   mutable int _callCount = 0;
};