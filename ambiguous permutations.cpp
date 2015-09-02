#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a[100005],n,f,i;
    while(1)
    {
        f=0;
        cin>>n;
        if(n==0)
        break;
        for(i=1;i<=n;i++)
        cin>>a[i];
        for(i=1;i<=n;i++)
        {
            if(i!=a[a[i]])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"not ambiguous"<<endl;
        else
        cout<<"ambiguous"<<endl;
    }
}
