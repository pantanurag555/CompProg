#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int b,g,s,l,r,q;
    while(1)
    {
        cin>>g>>b;
        if(b==-1 && g==-1)
        break;
        else if(b==0 || g==0)
        {
            l=(b>g)?b:g;
            cout<<l<<endl;
        }
        else if(b-g>=-1 && b-g<=1)
        cout<<"1"<<endl;
        else if(b==1 || g==1)
        {
            l=(b>g)?b:g;
            cout<<l-(l/2)<<endl;
        }
        else
        {
            s=(b>g)?g:b;
            l=(b>g)?b:g;
            r=l%(s+1);
            q=l/(s+1);
            if(r==0)
            cout<<q<<endl;
            else
            cout<<q+1<<endl;
        }
    }
}
