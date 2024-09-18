// DLL_Compiler.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "DLL_Compiler.h"


// This is an example of an exported variable
DLLCOMPILER_API int nDLLCompiler=0;

// This is an example of an exported function.
DLLCOMPILER_API int fnDLLCompiler(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDLLCompiler::CDLLCompiler()
{
    return;
}
