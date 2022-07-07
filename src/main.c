#include "include/main.h"

int main(){

    char* test = "Let's test   this shit ";
    int* count = malloc(sizeof(int));
    char** output = Split(test, count);

    for(unsigned i = 0; i < *count; i++){
        printf("%s\n", output[i]);
    }

    return 0;
}