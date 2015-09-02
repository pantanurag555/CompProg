#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,d,mina,cnt,b[15],c[15],i;
    while(1)
    {
        cin>>a>>d;
        cnt=0;
        if(a==d&&a==0)
        break;
        else
        {
            for(i=0;i<a;i++)
            {
                cin>>b[i];
                if(i==0)
                mina=b[i];
                else if(b[i]<mina)
                mina=b[i];
            }
            for(i=0;i<d;i++)
            {
                cin>>c[i];
                if(c[i]<=mina)
                cnt++;
            }
            if(cnt<=1)
            cout<<"Y"<<endl;
            else
            cout<<"N"<<endl;
        }
    }
}
