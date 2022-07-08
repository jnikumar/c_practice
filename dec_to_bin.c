/*
Program to convert decimal number to binary number
Given input integer from the user
convert into a binary number
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Declare variables 
Char array to hold the converted binary number
integer to read the decimal number to be converted
iterate through the loop taking modulus of the number
divided by 2 - which will be 0 or 1
keep adding this modulus to the char array
remove the last digit of the number so that next 
iteration modulus is calculated on the remaining 
number
repeat until the number is 0 or lower
*/
int main(void){
    //char binary[100] = "";
    char binary[] = "";
    long int input = 0;
    int i;
    printf("Please enter an integer: \n");
    scanf("%ld", &input);
    printf("Decimal number entered: %ld\n", input);
    for(i = 0; input > 0; i++){
        binary[i] = (input % 2) + '0';
        input /= 2;
    }
    binary[i+1] = '\0';
    printf("Binary representation: ");
    for(i = i-1; i >=0; i--){
        printf("%c", binary[i]);
    }
    printf("\n");
}
