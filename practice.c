/*
*/
#include <stdio.h>

int main(){

    int myArr[] = {1, 2, 3, 4, 5};
    int arrLen = sizeof(myArr)/sizeof(int);
    printf("Size of Array: %lu\n", sizeof(myArr));
    printf("Size of int: %lu\n", sizeof(int));
    printf("Array lenth: %lu\n", arrLen);

}