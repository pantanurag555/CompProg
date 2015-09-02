#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,i=0;
    long double r,s;
    cin>>t;
    while(t--)
    {
        i++;
        cin>>r;
        s=4*r*r+.25;
        cout<<setprecision(2)<<fixed<<"Case "<<i<<": "<<s<<endl;
    }
}
