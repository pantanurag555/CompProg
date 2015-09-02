#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,k,t,x,y,s,m=1000000007;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x=(n*n)%m;
        y=((n+1)*(n+1))%m;
        s=((x*y)/4)%m;
        cout<<s<<endl;
    }
}
