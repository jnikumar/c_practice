/*
Program to compute the sum of digits of a given 5 digit number
Extract each digit from the units side by using modulo operator
Add to the variable to calculate the sum
*/
#include <stdio.h>
/*
Main module
Accept a 5 digit number
Using a while loop and modulo operator
keep extracting the units digit
add to the sum_of_digits variable
if the number is not within the expected range
prompt error to the user
*/
int main(void){
	int input, sum_of_digits;
	printf("Enter a 5 digit number: ");
	scanf("%d", &input);
	if(input < 10000 || input > 99999){
		printf("Entered number is out of range - %d\n", input);
		printf("Enter a number within range 10000 and 99999\n");
	}else{
		printf("Sum of all the digits of %d is - ", input);
		while (input > 0){
			sum_of_digits += input % 10;
			input /= 10;
		}		
		printf("%d\n", sum_of_digits);
	}
}
