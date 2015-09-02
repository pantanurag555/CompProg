#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100005],b[100005];
    int i,j,t,n,l,cnt,f,min,x;
    cin>>t;
    while(t--)
    {
        cin>>b;
        strcpy(a," ");
        strcat(a,b);
        l=strlen(a);
        cnt=0;
        n=0;
        min=0;
        if(l%2==1)
        x=l/2;
        else
        x=l/2-1;
        for(i=0;i<=x;i++)
        {
            f=0;
            for(j=0;j<l/2;j++)
            {
                if(a[j]!=a[l-j-1] && a[j]!=' ' && a[l-j-1]!=' ')
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                if(n==l/2 && l%2==1)
                min=1;
                cnt++;
            }
            a[n]=a[n+1];
            a[n+1]=' ';
            n++;
        }
        cnt*=2;
        cout<<cnt-min<<endl;
    }
}
