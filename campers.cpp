#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long int j,i,n,k,a,cnt=0,b[1000010];
    cin>>n>>k;
    for(i=0;i<=n;i++)
    b[i]=1;
    for(i=0;i<k;i++)
    {
        cin>>a;
        b[a+1]--;
        b[a-1]--;
    }
    for(i=1;i<=n;i++)
    {
        if(b[i]==1)
        {
            if(b[i+1]==1)
            {
                b[i+1]=0;
                cnt++;
            }
            else
            cnt++;
        }
    }
    cout<<cnt;
}
