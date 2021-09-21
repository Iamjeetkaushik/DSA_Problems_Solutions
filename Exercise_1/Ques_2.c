#include<stdio.h>

void main()
{
    int s1,s2,s3,s4,s5;
    int result;
    printf("Enter the numbers of five subject with space between every score: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    result = (s1+s2+s3+s4+s5)/5;
    printf("The aggregate is %d", result);

}