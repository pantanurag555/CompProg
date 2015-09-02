#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int m[1005],i,j,f[1005],t,n,k;
    long long int s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>m[i];
        for(i=0;i<n;i++)
        cin>>f[i];
        for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        {
            if(m[j]>m[j+1])
            {
                k=m[j];
                m[j]=m[j+1];
                m[j+1]=k;
            }
            if(f[j]>f[j+1])
            {
                k=f[j];
                f[j]=f[j+1];
                f[j+1]=k;
            }
        }
        for(i=0;i<n;i++)
        s+=m[i]*f[i];
        cout<<s<<endl;
    }
}
