/*
Program to calculate sum of even
and odd numbers from a given list
of numbers
*/
#include <stdio.h>
/*
Main module - accepts user input for number of values 
iterates from 1 through the value, if the number is 
even adds to even_sum, if it is odd, adds to odd_sum
*/

int main(void){
	int i = 1;
	int limit = 0;
	int even_sum = 0;
	int odd_sum = 0;
	printf("Enter limit number: ");
	scanf("%d", &limit);
	printf("Sum of even and odd numbers from 1 to %d\n", limit);
//using a while loop to iterate from 1 through the limit
/*	while(i <= limit){
		if(i % 2 == 0){
			even_sum += i;
		}else{
			odd_sum += i;
		}
		i++;
	}*/
//using a for loop to itnerate from 1 through limit
	for(i = 1; i <= limit; i++){
		if(i % 2 == 0){//even number add to even_sum
			even_sum += i;
		}else{//odd number add to odd_sum
			odd_sum += i;
		}
	}
	printf("Sum of numbers from 1 to %d\n", limit);
	printf("Sum of even numbers is %d\n", even_sum);
	printf("Sum of odd numbers is %d", odd_sum);
}
