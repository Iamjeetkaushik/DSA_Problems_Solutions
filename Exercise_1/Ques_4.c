#include<stdio.h>

void main()
{
    // int o,e,f,g,h,i,result;
    // printf("Enter a five digit number: ");
    // scanf("%d", &o);
    // e = o%10;
    // f = (o%100 - e)/10;
    // g = (o%1000 - 10*f - e)/100;
    // h = (o%10000 - g*100 - f*10 - e)/1000;
    // i = (o%100000 - h*1000 - g*100 - f*10 - e)/10000;
    // printf("%d%d%d%d%d", e,f,g,h,i);
    // result = e+f+g+h+i;

    // printf("\nThe sum of the digits is %d", result);

    // OR

    int num,sum = 0,e;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0)
    {
        e = num%10;
        sum = sum + e;
        num/=10;
    }

    printf("The sum of the digits of the number is %d", sum);

}