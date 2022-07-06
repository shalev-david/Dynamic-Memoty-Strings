#include "include/main.h"

int main(){

    int* fibo = fib(8);

    for(int i=0; i< 7; i++){
        printf("%d ", fibo[i]);
    }
    return 0;
}