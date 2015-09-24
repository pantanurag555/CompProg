#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,tmp;
    int cnt=0,i,a[1000]={0};
    cin>>n;
    while(1)
    {
        cnt++;
        tmp=0;
        while(n>0)
        {
            i=n%10;
            n/=10;
            tmp+=i*i;
        }
        if(tmp==1)
        {
            cout<<cnt;
            break;
        }
        if(a[tmp]==1)
        {
            cout<<"-1";
            break;
        }
        else
        {
            a[tmp]=1;
        }
        n=tmp;
    }
}
