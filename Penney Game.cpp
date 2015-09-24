#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char a[45];
    int t,n,i,b[8];
    cin>>t;
    while(t--)
    {
        for(i=0;i<8;i++)
        b[i]=0;
        cin>>n>>a;
        for(i=0;i<38;i++)
        {
            if(a[i]=='T')
            {
                if(a[i+1]=='T')
                {
                    if(a[i+2]=='T')
                    b[0]++;
                    else
                    b[1]++;
                }
                if(a[i+1]=='H')
                {
                    if(a[i+2]=='T')
                    b[2]++;
                    else
                    b[3]++;
                }
            }
            else
            {
                if(a[i+1]=='T')
                {
                    if(a[i+2]=='T')
                    b[4]++;
                    else
                    b[5]++;
                }
                if(a[i+1]=='H')
                {
                    if(a[i+2]=='T')
                    b[6]++;
                    else
                    b[7]++;
                }
            }
        }
        cout<<n;
        for(i=0;i<8;i++)
        cout<<" "<<b[i];
        cout<<endl;
    }
}
