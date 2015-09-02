#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,n,k,st,s,en,cnt,i,j;
    char a[2010];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        s=0;
        for(i=0;i<k;i++)
        {
            cin>>st>>en;
            for(j=st;j<=en;j++)
            {
             if(s%2==0)
             a[j]='(';
             else
             a[j]=')';
             s++;
            }
        }
        s=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!='(' && a[i]!=')')
            {
                if(s%2==0)
                cout<<"(";
                else
                cout<<")";
                s++;
            }
            else
            cout<<a[i];
        }
        cout<<endl;
    }
}
