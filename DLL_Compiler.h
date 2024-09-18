// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DLLCOMPILER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DLLCOMPILER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLLCOMPILER_EXPORTS
#define DLLCOMPILER_API __declspec(dllexport)
#else
#define DLLCOMPILER_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DLLCOMPILER_API CDLLCompiler {
public:
	CDLLCompiler(void);
	// TODO: add your methods here.
};

extern DLLCOMPILER_API int nDLLCompiler;

DLLCOMPILER_API int fnDLLCompiler(void);
