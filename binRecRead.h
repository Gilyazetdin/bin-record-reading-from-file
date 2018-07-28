#ifndef BINRECREAD
#define BINRECREAD

    #define _CRT_SECURE_NO_WARNINGS
    #include <stdio.h>
    int binWrite(char* fileName, char* pointer, int size);
    int binLoad(char* fileName, char* pointer, int size);

#endif