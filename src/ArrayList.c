#include "include/ArrayList.h"

ArrayList* InitializeArrayList(unsigned capacity){
    ArrayList* arrayList = malloc(sizeof(ArrayList));
    arrayList->capacity = capacity;
    arrayList->array = malloc(sizeof(int) * capacity);
    return arrayList;
}

int GetValueInIndex(ArrayList arrayList, unsigned index){
    AssertIndexExist(arrayList, index);

    return arrayList.array[index];
}

void AddNewValue(ArrayList* arrayList, int value){
    if(arrayList->count == arrayList->capacity){
        arrayList->array = realloc(arrayList->array, (arrayList->capacity * 2) * sizeof(int));
        arrayList->capacity *=2;
    }
    arrayList->array[arrayList->count] = value;
    arrayList->count++;
}

void DeleteByIndex(ArrayList* arrayList, unsigned index){
    AssertIndexExist(*arrayList, index);

    for(unsigned currentIndex = index, nextIndex = index+1; nextIndex < arrayList->count; currentIndex++, nextIndex++){
        arrayList->array[currentIndex] = arrayList->array[nextIndex];
    }
    arrayList->count--;
}


void AssertIndexExist(ArrayList arrayList, unsigned index){
    if(index >= arrayList.count){
        printf("No such index, the size being used by the array is %d\n", arrayList.count);
        exit(1);
    }
}

ArrayList* CloneArrayList(ArrayList listToClone){
    ArrayList* newArrayList = malloc(sizeof(ArrayList));
    newArrayList->capacity = listToClone.capacity;
    newArrayList->count = listToClone.count;

    newArrayList->array = malloc(sizeof(int) * newArrayList->capacity);
    for(unsigned i =0; i< listToClone.count; i++){
        newArrayList->array[i] = listToClone.array[i];
    }

    return newArrayList;
}
