#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int t1,t2,t3;
    while(1)
    {
        cin>>t1>>t2>>t3;
        if(t3==t2 && t2==t1 && t1==0)
        break;
        if(t2-t1==t3-t2)
        {
            cout<<"AP "<<t3+(t2-t1)<<endl;
        }
        else
        {
            cout<<"GP "<<t3*(t2/t1)<<endl;
        }
    }
}
