/*
	Program to check if a given input is divisible by 7
	there are two ways to check divisibility by 7
	1. Use the modulo operator and check if the result
	of input modulo 7 is 0 - then number is divisible by 7
	2. if the difference of twice the units digit and rest of
	the number is divisible by 7 then also number is divisible by 7
*/
#include <stdio.h>
/*
Main module to accept input and chck if the numbe ris 
divisible by 7
*/
int main(void){
	int input, units, temp_input;
	//accept the input from the user
	printf("Enter a number to check if divisible by 7: ");
	scanf("%d", &input);
	//extract the units digit
	units = input % 10;
	//get the remaining digits of the number other than the units digit
	temp_input = input / 10;
	/*check if the difference of the 
	remaining digits and twice
	the units digit is divisible by 7
	*/
	if((temp_input - 2*units) % 7 == 0){
		printf("%d is divisible by 7\n", input);
	}else{
		printf("%d is NOT divisible by 7\n", input);
	}  
}
