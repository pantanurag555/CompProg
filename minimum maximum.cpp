#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,min,a,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(i==0)
            min=a;
            else if(a<min)
            min=a;
        }
        s=min*(n-1);
        cout<<s<<endl;
    }
}
