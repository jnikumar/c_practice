/*
Program to check if a given number is 
even or odd
Program divides the given number by 2
if the reminder is 0, number is even
else the number is odd
*/

#include <stdio.h>

int main(void){
    //define a variable to hold the input
    int input = 0;

    //prompt the user to enter the input
    printf("Enter an integer number: ");
    scanf("%d", &input); //read the input from console

    //check the reminder when input is divided by 2
    if(input % 2 == 0){//if the reminder is 0 number is even
        printf("%d is an even number", input);
    }else{//if the reminder is not 0 number is odd
        printf("%d is an odd number", input);
    }
}