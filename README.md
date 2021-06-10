Net5Interop
====================

These are some samples to show communicating between C++ code and .Net 5 (probably .Net 6 and .Net Core 3.1 too).

There are some useful blog posts about this:
https://devblogs.microsoft.com/cppblog/an-update-on-cpp-cli-and-dotnet-core/

and:
https://devblogs.microsoft.com/cppblog/porting-a-c-cli-project-to-net-core/
Which has a useful code sample here: https://github.com/mjrousos/CppCliMigrationSample

## Examples

For these examples I used VS2019 Update 10.

Here are what each examples are:

- C++ToCSharpNet5:
This is a C++ console application (but could have been MFC/Qt/etc) talking to CSharp code (library/.dll) built with .Net 5.

![image](https://user-images.githubusercontent.com/3475163/121578726-f9813900-c9f8-11eb-8c67-292df9c426dc.png)

- CSharpNet5ToC++:
This is a WPF .Net 5 applications (but could have been a console application/.Net 6/.Net Core 3.1/etc) talking to C++ static library (but could have been a DLL).

![image](https://user-images.githubusercontent.com/3475163/121578603-d9ea1080-c9f8-11eb-875a-48bf2756cb01.png)

## Debugging

For the C++ example to debug the .Net 5 code I used this debugging option:
![image](https://user-images.githubusercontent.com/3475163/121578901-31887c00-c9f9-11eb-8482-dfc6f25f0fce.png)

For the C# example to debug the C++ code I used this debugging option:
![image](https://user-images.githubusercontent.com/3475163/121579229-86c48d80-c9f9-11eb-8410-613903c45f3b.png)

Hope that helps! :)