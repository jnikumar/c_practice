#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool isNeg = 0;
    int input = 0;
    printf("Enter a number to test divisibility by 7: ");
    scanf("%d", &input);

    while (true)
    {
        printf("Evaluating %d\n", input);
        if (input < 0)
        { // apply the negative flag
            isNeg = 1;
            input *= -1;
        }
        // printf("New input is %d\n", input);
        if (input == 0 || input == 7)
        {
            printf("Given number is divisible by 7\n");
            break;
        }
        else if (input < 10)
        {
            printf("Given number is not divisible by 7\n");
            break;
        }
        else
        {
            input = input / 10 - 2 * (input % 10);
        }
    }
}