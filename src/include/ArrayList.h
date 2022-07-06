#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "DynamicStructures.h"

typedef struct ArrayList ArrayList;
struct ArrayList
{
    int* array;
    int capacity;
    int count;
};

ArrayList* InitializeArrayList(unsigned capacity);

int GetValueInIndex(ArrayList arrayList, unsigned index);

void AddNewValue(ArrayList* arrayList, int value);

void DeleteByIndex(ArrayList* arrayList, unsigned index);

void AssertIndexExist(ArrayList arrayList, unsigned index);

ArrayList* CloneArrayList(ArrayList listToClone);

#endif