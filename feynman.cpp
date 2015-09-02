#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,t;
    long long int s;
    while(1)
    {
        cin>>t;
        if(t==0)
        break;
        s=(t*(t+1)*((2*t)+1))/6;
        cout<<s<<endl;
    }
}
