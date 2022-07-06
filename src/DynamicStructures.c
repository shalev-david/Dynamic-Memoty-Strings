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

int* fib(unsigned max_num){
    int* fibonachi = malloc(sizeof(int));
    int currentValue = 1;
    int previousValue = 1;

    fibonachi[0] = 0;

    int index = 1;
    while(currentValue <= max_num){
        fibonachi = (int*) realloc(fibonachi, sizeof(int) * (index+1));
        if(index == 1){fibonachi[index] = 1;}
        else{
            fibonachi[index] = currentValue;
            int temp = currentValue;
            currentValue += previousValue;
            previousValue = temp;
        }
        index++;
    }

    return fibonachi;
}