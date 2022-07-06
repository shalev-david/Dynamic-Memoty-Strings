#include "include/DynamicStructures.h"

int* create_index_arr(int n){
    int* arr = malloc(n * sizeof(int));
    for(unsigned i =0; i< n; i++){
        arr[i] = i;
    }

    return arr;
}
