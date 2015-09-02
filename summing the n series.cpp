#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,t,tn,s,i,k,l,m=1000000007;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        s=((n%m)*(n%m))%m;
        cout<<s<<endl;
    }
}
