#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int b=0;
    unsigned long long int a;
    cin>>a;
    while(a>1)
    {
        if(a%2==0)
        a/=2;
        else
        {
            b=1;
            break;
        }
    }
    if(b==0)
    cout<<"TAK";
    else
    cout<<"NIE";
}
