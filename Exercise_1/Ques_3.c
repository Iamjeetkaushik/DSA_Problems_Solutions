#include<stdio.h>

void main()
{
    float C, D, e;
    printf("Enter two numbers: ");
    scanf("%f %f", &C, &D);
    e = C;
    C = D;
    D = e;

    printf("Value at C is %f and at D is %f", C, D);

}