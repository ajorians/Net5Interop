#pragma once

// Set up DLL Export/Import macro for windows
#if !defined(TEST_API)
#ifdef TestLib_EXPORTS
#define TEST_API __declspec(dllexport)
#else
#define TEST_API __declspec(dllimport)
#endif
#endif

#include <memory>

class NativeClassImpl;

class /*TEST_API*/ NativeClass
{
public:
   TEST_API NativeClass();
   TEST_API ~NativeClass();

   TEST_API int NativeAdd( int a, int b );

private:
   std::unique_ptr<NativeClassImpl> _impl;
};
