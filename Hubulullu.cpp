#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int p;
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        if(p==0)
        cout<<"Airborne wins."<<endl;
        else
        cout<<"Pagfloyd wins."<<endl;
    }
}
