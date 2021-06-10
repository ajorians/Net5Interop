#pragma once

#include "StringHelper.h"
#include <SomeClass.h>

using namespace System;

namespace CPPCLRNet5 {
	public ref class CLRClass
	{
	public:
		CLRClass()
			: _someNativeClass( new SomeClass() )
		{
		}
		~CLRClass()
		{
			delete _someNativeClass;
		}

		System::String^ GetFromNative()
		{
			using namespace InteropHelper;
			return StringConversionHelper::StdStringToSystemString( _someNativeClass->GetNativeString() );
		}

	private:
		SomeClass* _someNativeClass;
	};
}
