#include<iostream>
using namespace std;

void update(int *a,int *b) {
    int sum = *a + *b;
    int differance = (*a>=*b) ? *a - *b : *b - *a;

    *a = sum;
    *b = differance;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
    return 0;
}
