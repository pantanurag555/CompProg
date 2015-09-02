#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int x,y,z,b,w,s;
    cin>>t;
    while(t--)
    {
        cin>>b>>w>>x>>y>>z;
        if(x+z<y)
        {
            s=(x*b)+((x+z)*w);
        }
        else if(y+z<x)
        {
            s=((y+z)*b)+y*w;
        }
        else
        {
            s=x*b+y*w;
        }
        cout<<s<<endl;
    }
}
