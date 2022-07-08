/**
	Program to check if a given number is positive or negative
	Accept the input, check if the input is greater than 0
	if yes, it is a positive number else, that is if the 
	number is less than 0, it is a negative number
*/

#include <stdio.h>
/*
Main module to run the program logic
accepts input and compares whether
less than or greater than zero
prints the result
*/
int main(void){
	int input;
	
	printf("Enter the input to check: ");
	scanf("%d", &input);
	
	//check if the input is less than or greater than 0
	if(input < 0){
		printf("%d is a negative number", input);
	}else if(input > 0){
		printf("%d is a positive number", input);
	}else{
		printf("Entered input is ZERO - %d", input);
	}		
}

