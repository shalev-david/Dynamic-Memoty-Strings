#include "include/main.h"

int main(){

   ArrayList* arr = InitializeArrayList(2);
    AddNewValue(arr, 0);
    AddNewValue(arr, 1);
    AddNewValue(arr, 2);
    AddNewValue(arr, 3);

    printf("%d ", GetValueInIndex(*arr, 0));
    printf("%d ", GetValueInIndex(*arr, 1));
    printf("%d ", GetValueInIndex(*arr, 2));
    printf("%d\n", GetValueInIndex(*arr, 3));

    DeleteByIndex(arr, 2);
    printf("%d ", GetValueInIndex(*arr, 0));
    printf("%d ", GetValueInIndex(*arr, 1));
    printf("%d\n", GetValueInIndex(*arr, 2));
    
    ArrayList* cloned = CloneArrayList(*arr);
    printf("%d ", GetValueInIndex(*cloned, 0));
    printf("%d ", GetValueInIndex(*cloned, 1));
    printf("%d\n", GetValueInIndex(*cloned, 2));

    return 0;
}