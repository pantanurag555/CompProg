#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20],b[20];
    int i,t,n,f;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;
        n=strlen(a);
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i] || a[i]=='?' || b[i]=='?')
            f=0;
            else
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
}
