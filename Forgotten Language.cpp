#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,k,l[60],n,i,j,n1[105]={0},x;
    char dic[105][10],ph[55][55][10];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        cin>>dic[i];
        for(i=0;i<k;i++)
        {
            cin>>l[i];
            for(j=0;j<l[i];j++)
            {
                cin>>ph[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                for(x=0;x<l[j];x++)
                if(strcmp(dic[i],ph[j][x])==0)
                {
                    n1[i]=1;
                    goto a;
                }
            }
            a:;
        }
        for(i=0;i<n;i++)
        {
            if(n1[i]==1)
            {
                cout<<"YES ";
                n1[i]=0;
            }
            else
            cout<<"NO ";
        }
        cout<<endl;
    }
}
