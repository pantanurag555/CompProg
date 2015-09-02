#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    long long int a[500005],n,k=-1,i,j,l,f;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l;
        f=0;
        for(j=0;j<=k;j++)
        {
            if(l==a[j])
            {
                f=1;
                k--;
            }
            if(f==1)
            {
                a[j]=a[j+1];
            }
        }
        if(f==0)
        {
            k++;
            a[k]=l;
        }
    }
    cout<<a[0];
}
