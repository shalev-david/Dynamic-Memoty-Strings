#include "include/DynamicStructures.h"

int* create_index_arr(int n){
    int* arr = malloc(n * sizeof(int));
    for(unsigned i =0; i< n; i++){
        arr[i] = i;
    }

    return arr;
}


/*
you can't realloc a const because realloc may give you a new address and
you can't change the address because the pointer is constant
*/
int* duplicate_numbers(const int* numbers, int length){
    int* newArr = malloc(length * sizeof(int));
    for(unsigned i =0; i<length; i++){
        newArr[i] = numbers[i];
    }
    return newArr;
}
