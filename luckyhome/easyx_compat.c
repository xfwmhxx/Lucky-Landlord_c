#include <stdio.h>

// Provide __iob_func (MSVCRT compatibility for UCRT MinGW)
FILE *__cdecl __iob_func(void) {
    static FILE iob[3];
    iob[0] = *stdin;
    iob[1] = *stdout;
    iob[2] = *stderr;
    return iob;
}

// EasyX was compiled against MSVCRT and references __imp___iob_func
// (the DLL import stub). We provide it as a pointer to our __iob_func.
extern FILE* __cdecl __iob_func(void);
FILE* (* const __imp___iob_func)(void) = __iob_func;
