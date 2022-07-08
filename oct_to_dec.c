/*
Program to convert octal number to decimal
Octal number is a number with base 8 
1. digits in the number or lesser than 8
2. decimal number can be converted to octal
by repeatedly dividing by 8 and pooloing the reminders
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
/*
Main Module
Read a number from the console
Repeatedly divide the number by 10 to get the reminder
multiply the reminder with powers of 8 in increasing 
order from 8 power 0. Keep adding the result
reduce the number by taking the quotient of the earlier
division and repeat the process till the number is 
less than zero
*/
int main(){
    long int i = 0, input = 0, decimal = 0, octal = 1;
    const int oct = 8;
    bool is_neg = false;
    printf("Enter the number to be converted from octal to Decimal:\n");
    scanf("%ld", &input);
    
    printf("Octal number to be converted to Decimal: %ld\n", input);
    /*
    check if the given input is -ve
    set the sign variable
    conver the number to be converted to +ve for conversion
    */
    if (input < 0){
        is_neg = true;
        input *= -1;
    }

    /*
    check if the given input is a valid octal number
    if any digit of the input is greater than 7
    give an appropriate error message to the user 
    exit the program
    */
    while(input > 0){
        if(input % 10 > 7){
            printf("Given input is not a valid octal\n");
            printf("Input contains digit greater than 7\n");
            printf("Enter a valid octal nuber to try again.\n");
            printf("Octal number has digits 0 through 7 only.\n");
            exit(0);
        }else{
            decimal += (input % 10) * pow(oct, i);
            i += 1;
            input /= 10;
        }
    }
    if(is_neg){
        printf("Decimal representation is: %ld\n", decimal*-1);
    }else{
        printf("Decimal representation is: %ld\n", decimal);
    }
}