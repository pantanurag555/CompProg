#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int i,a,n,d,s,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>s;
        n=(2*s)/(x+y);
        d=(y-x)/(n-5);
        a=x-(2*d);
        cout<<n<<endl;
        for(i=1;i<=n;i++)
        cout<<a+((i-1)*d)<<" ";
        cout<<endl;
    }
}
