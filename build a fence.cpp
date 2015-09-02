#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float k,l;
    while(1)
    {
        cin>>l;
        if(l==0)
        break;
        k=(l*l)/(2*M_PI);
        k=floor(k*100.00+0.5)/100.00;
        cout<<k<<endl;
    }
}
