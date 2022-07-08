

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int input = 0, even_count = 0, odd_count = 0;
    int even_sum = 0, odd_sum = 0;
    float even_average = 0, odd_average = 0;
    while (true)
    {
        scanf("%d", &input);
        if (input != 0)
        {
            switch (input % 2)
            {
                case 0:
                    even_count += 1;
                    even_sum += input;
                    break;
                case 1:
                    odd_count += 1;
                    odd_sum += input;
                    break;
            }
        }else{
            break;
        }
    }
    even_average = (float)even_sum / (float)even_count;
    odd_average = (float)odd_sum / (float)odd_count;
    printf("No of even numbers entered: %d\n", even_count);
    printf("Sum of all the even numbers: %d\n", even_sum);
    printf("Average of all the even numbers: %.2f\n", even_average);
    printf("No of odd numbers entered: %d\n", odd_count);
    printf("Sum of all the odd numbers: %d\n", odd_sum);
    printf("Average of all the odd numbers: %.2f\n", odd_average);
}