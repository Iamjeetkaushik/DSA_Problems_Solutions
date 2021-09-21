#include<stdio.h>

void main()
{
    int num, sum, first, last, len, e=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the length of the number: ");
    scanf("%d", &len);
    first = num%10;
    printf("%d", first);
    while ((len-1) > 0)
    {
        e = 10*e;
        len -= 1;
    }
    last = num/e;
    printf("\n%d", last);
    sum = first + last;
    printf("\nThe sum of the first and last digits is %d", sum);

}