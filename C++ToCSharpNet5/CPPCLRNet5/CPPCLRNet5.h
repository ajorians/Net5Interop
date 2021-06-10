#pragma once

using namespace System;
using namespace CSharpNet5Library;

namespace CPPCLRNet5 {
	public ref class CLRClass
	{
	public:
		int Add( int a, int b )
		{
			DotNetClass^ dotNetClass = gcnew DotNetClass();
			return dotNetClass->Add( a, b );
		}
	};
}
