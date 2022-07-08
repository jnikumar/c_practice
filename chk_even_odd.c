#include <stdio.h>

/*
Main module - start of the program
will accept input from user
divide the reminder after dividing
by 2.
If reminder is 0, print input is even
else print input is odd 
*/
int main(void){
	
	int input;
	printf("Enter a number to check even or odd: ");
	scanf("%d", &input);
	//check the reminder after dividing by 2
	if(input % 2 == 0){
		printf("%d is even number.", input);
	}else{
		printf("%d is odd number.", input);
	}	

}
