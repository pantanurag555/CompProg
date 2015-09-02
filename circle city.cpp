#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    long long int l,k,d,i,j,cnt;
    long double f;
    cin>>t;
    while(t--)
    {
        cin>>d>>k;
        cnt=0;
        f=sqrt(d);
        l=f;
        if(f==l)
        cnt+=4;
        for(i=1;i<sqrt(d);i++)
        {
            f=sqrt(d-(i*i));
            l=f;
            if(f==l&&f!=0)
            cnt+=4;
        }
        if(cnt<=k)
        cout<<"possible"<<endl;
        else
        cout<<"impossible"<<endl;
    }
}
