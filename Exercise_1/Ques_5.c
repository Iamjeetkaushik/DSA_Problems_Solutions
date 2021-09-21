#include<stdio.h>

void main()
{
    int num,rev=0,remainder;
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num%10;
        rev = rev*10 + remainder;
        num /=10;
    }

    printf("The reversed number is %d", rev);

}