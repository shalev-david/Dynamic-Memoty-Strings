#ifndef STRINGS_H
#define STRINGS_H

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void PrintReversedString(char* string, size_t length);

int StringCompare(const char* a, const char* b);

char** Split(const char* str, int* outputCount);

void CopyString(const char* stringToCopy, char* dest,unsigned fromIndex, unsigned toIndex);

#endif