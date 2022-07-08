/*
Program to generate divisors of a given integer
Divide the given input with each number starting from 1
Use the modulo operator so that we get reminder
If the reminder is 0, print the number
continue till we reach input/2 as there will be 
no divisor which is greater than half the number
print the input also finally as every number is a
divisor of itself
*/
#include <stdio.h>

int main(){

    //variables to accept input and count number of divisors
    int input = 0, no_divisors = 1;
    printf("Enter the integer to find divisors for: ");
    scanf("%d", &input);
    
    printf("Divisors of %d are: \n", input);
    //iterate from 1 through half of the input
    for(int i = 1; i <= input/2; i++){
        //check if the number leaves reminder 0 
        //when dividing the given input
        if(input % i == 0){
            no_divisors += 1;
            printf("%d, ", i);
        }
    }
    //print the input as every number is a divisor of itself
    printf("%d\n", input);
    //print total number of divisors
    printf("Total number of divisors are %d\n", no_divisors);

}