#include <stdio.h>
// doubt
int main(void)
{
    int num, sum, remainder, check;
    sum = check = 0;

    printf("Enter the sequence: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 10; 

        if (remainder != 9)
        {
            if (check == 0)
                sum = (10 * sum) + (remainder + 1);
            else
            {
                sum = (10 * sum) + (remainder + 2);
                check = 0;
            }
        }
        else
        {
            sum = (10 * sum) + 0;
            check = 1;
        }
        num /= 10; 
    }

    num = sum; 
    sum = 0;


    while (num > 0)
    {
        remainder = num % 10;
        sum = (10 * sum) + remainder;
        num /= 10;
    }

    printf("Result: %d\n", sum);

    return 0;
}