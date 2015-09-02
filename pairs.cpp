#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,l,b[100005]={0},tmp1;
    long long int k,a[100005],s=0,tmp;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        l=0;
        for(j=i+1;j<n;j++)
        {
            if(fabs(a[i]-a[j])==k)
               {
                   s++;
                   l++;
                   b[j]++;
                   if(b[j]==2)
                   {
                       tmp=a[i+1];
                       a[i+1]=a[j];
                       a[j]=tmp;
                       tmp1=b[i+1];
                       b[i+1]=b[j];
                       b[j]=tmp1;
                       tmp=a[i+1];
                       a[i+1]=a[i];
                       a[i]=tmp;
                       tmp1=b[i+1];
                       b[i+1]=b[i];
                       b[i]=tmp1;
                       i++;
                   }
                   if(l==2)
                   break;
               }
         }
    }
    cout<<s;
}
