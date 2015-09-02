#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long int n,cnt;
    int i,j,k,t,t1=0,f,a[1005],d;
    cin>>t;
    while(t1<t)
    {
        cnt=0;
        d=0;
        t1++;
        cin>>n>>f;
        for(i=0;i<f;i++)
        cin>>a[i];
        cout<<"Scenario #"<<t1<<":"<<endl;
        for(i=0;i<f-1;i++)
        for(j=0;j<f-i-1;j++)
        if(a[j]<a[j+1])
        {
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
        }
        for(i=0;i<f;i++)
        {
            cnt+=a[i];
            if(cnt>=n)
            {
                d=1;
                break;
            }
        }
        if(d==1)
        cout<<i+1<<endl<<endl;
        else
        cout<<"impossible"<<endl<<endl;
    }
}
