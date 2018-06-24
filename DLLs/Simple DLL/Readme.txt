Build Dll

	cl /W4 /LD Hello.cpp Export.def

	/LD	Creates a DLL.
	/LDd	Creates a debug DLL. Defines _MT and _DEBUG

Use DLL
	cl /W4 app.cpp /link Hello.lib

	
C# code
		csc Hello.cs /platform:x86
