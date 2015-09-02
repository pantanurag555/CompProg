#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long double x,r,n;
    while(1)
    {
        cin>>n;
        if(n==-1)
        break;
        r=(n-1)/3;
        x=(sqrt(1+(4*r))-1)/2;
        if(x==int(x))
        {
            cout<<"Y"<<endl;
        }
        else
        cout<<"N"<<endl;
    }
}
