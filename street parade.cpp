#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a[1005],stack[1005],top,n,i,j,k;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        for(i=0;i<n;i++)
        cin>>a[i];
        k=1;
        top=-1;
        j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==k)
            k++;
            else if(stack[top]==k && top>-1)
            {
                while(k==stack[top])
                {
                    k++;
                    top--;
                }
                top++;
                stack[top]=a[i];
                if(stack[top]>stack[top-1] && top>0)
                {
                    j=1;
                    goto xyz;
                }
            }
            else if(a[i]!=k)
            {
                top++;
                stack[top]=a[i];
                if(stack[top]>stack[top-1] && top>0)
                {
                    j=1;
                    goto xyz;
                }
            }
        }
        while(top>-1)
        {
            if(stack[top]!=k)
            {
                j=1;
                break;
            }
            else
            {
                k++;
                top--;
            }
        }
        xyz:
        if(j==1)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
}
