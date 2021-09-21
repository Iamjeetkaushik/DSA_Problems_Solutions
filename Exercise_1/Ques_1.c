#include<stdio.h>

void main()
{
    
    int salary;
    float dearness, rent, gross_Salary;

    printf("Enter the salary: ");
    scanf("%d", &salary);
    dearness = 40*salary/100;
    rent = 20*salary/100;
    gross_Salary = salary - dearness - rent;
    printf("The gross salary is %f", gross_Salary);

}