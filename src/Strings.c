#include "include/Strings.h"

void PrintReversedString(char* string, size_t length){
    for (int i = length-1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

int StringCompare(const char* a, const char* b){
    unsigned index = 0;
    
    do{
        char aChar = tolower(a[index]);
        char bChar = tolower(b[index]);

        if(aChar < bChar) return -1;
        else if (bChar < aChar) return 1;
        
        index++;
    }while(a[index]);

    if(!b[index]) return 0;
    return -1; 
}

char** Split(const char* str, int* outputCount){
    int flagInWord  = 0;
    int lengthOfWord = 0;
    int index = 0;
    char** splittedWords = malloc(sizeof(char*));
    *outputCount = 0;

    while(str[index] || flagInWord){
        if(str[index] != ' ' && str[index]){
            flagInWord = 1;
            lengthOfWord +=1;
        }else if(flagInWord){
            flagInWord = 0;
            splittedWords = realloc(splittedWords, sizeof(char*) * ((*outputCount) +1));

            splittedWords[*outputCount] = malloc(lengthOfWord +1);
            CopyString(str, splittedWords[*outputCount], index-lengthOfWord, index);
            (*outputCount)++;
            lengthOfWord = 0;
        }
        if(!str[index]) break;
        index++;
    }

    return splittedWords;
}

void CopyString(const char* stringToCopy, char* dest,unsigned fromIndex, unsigned toIndex){
    unsigned destIndex = 0;
    for(unsigned stringIndex = fromIndex; stringIndex<toIndex; stringIndex++, destIndex++){
        dest[destIndex] = stringToCopy[stringIndex];
    }
    dest[destIndex] = '\0';
}