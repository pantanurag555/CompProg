#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,m,sum,x,y,z,w;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x=n/m;
        y=n%m;
        z=m*(m-1)/2;
        w=y*(y+1)/2;
        sum=x*z+w;
        cout<<sum<<endl;
    }
}
