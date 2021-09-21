#include<stdio.h>

void main()
{
    int num,d1,d2,d3,d4,d5,r1,r2,r3,r4;
    printf("Enter the amount: ");
    scanf("%d", &num);
    d1 = num/100;
    r1 = num%100;
    d2 = r1/50;
    r2 = r1%50;
    d3 = r2/10;
    r3 = r2%10;
    d4 = r3/5;
    r4 = r3%5;
    d5 = r4/1;
    printf("According to the amount entered you need\n%d notes of 100\n%d notes of 50\n%d notes of 10\n%d notes of 5\n%d notes of 1", d1, d2, d3, d4, d5);
}