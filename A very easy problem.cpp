#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void mkeexp(int n)
{
    int i;
    while(n>0)
    {
        i=-1;
        while(n>=pow(2,i+1))
        i++;
        n-=pow(2,i);
        if(i==2)
        {
            cout<<"2(2)";
            if(n!=0)
            cout<<"+";
        }
        else if(i==1)
        {
            cout<<"2";
            if(n!=0)
            cout<<"+";
        }
        else if(i==0)
        {
            cout<<"2(0)";
            break;
        }
        else
        {
            cout<<"2(";
            mkeexp(i);
            cout<<")";
            if(n!=0)
            cout<<"+";
        }
    }
}
int main()
{
    int n[7],i;
    for(i=0;i<7;i++)
    cin>>n[i];
    for(i=0;i<7;i++)
    {
        cout<<n[i]<<"=";
        mkeexp(n[i]);
        cout<<endl;
    }
}
