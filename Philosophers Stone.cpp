#include<iostream>
#include<stdio.h>
using namespace std;
int a[105][105];
int main()
{
    int t,h,w,i,j,max;
    cin>>t;
    while(t--)
    {
        cin>>h>>w;
        for(i=0;i<h;i++)
        for(j=0;j<w;j++)
        cin>>a[i][j];
        for(i=1;i<h;i++)
        for(j=0;j<w;j++)
        {
            if(j==0)
            {
                a[i][j]+=(a[i-1][j]>a[i-1][j+1])?a[i-1][j]:a[i-1][j+1];
            }
            else if(j==w-1)
            {
                a[i][j]+=(a[i-1][j]>a[i-1][j-1])?a[i-1][j]:a[i-1][j-1];
            }
            else
            {
                a[i][j]+=(a[i-1][j]>a[i-1][j-1])?((a[i-1][j]>a[i-1][j+1])?a[i-1][j]:a[i-1][j+1]):((a[i-1][j-1]>a[i-1][j+1])?a[i-1][j-1]:a[i-1][j+1]);
            }
        }
        max=a[h-1][0];
        for(j=1;j<w;j++)
        {
            if(a[h-1][j]>max)
            max=a[h-1][j];
        }
        cout<<max<<endl;
    }
}
