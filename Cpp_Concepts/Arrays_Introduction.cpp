#include<iostream>
using namespace std;
int main()
{
    int i;
    cin >> i;
    int a[i];
    for(int j=i-1; j>=0 ; j--)
    {
        cin>>a[j];
    }

    for(int j=0; j<i ; j++)
    {
        cout<<a[j]<<" ";
    }
    
    return 0;
}