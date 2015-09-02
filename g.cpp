#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

const int N=100;
int main()
{
 int i,j,n,k,a[100][100];
 char b[N];
 cin>>n;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 cin>>a[i][j];
}
 }
 
 	gets(b);
	 if(strcmp("SHOW",b)==0)
 	{
 		for(i=0;i<n;i++)
        {
         for(j=0;j<n;j++)
        {
        	cout<<a[i][j]<<" ";
        }cout<<endl;
 	    } cout<<endl;
     }
     else if(strcmp("NEIGHBORS",b)==0)
     {
     	cin>>k;
     	for(i=0;i<n;i++)
        for(j=0;j<n;j++)
     	{
     		if(a[i][j]==k)
     		goto ab;
     	}
        ab: 
		if(i-1>=0)
		cout<<a[i-1][j]<<" ";
        if(j-1>=0)
	    cout<<a[i][j-1]<<" ";
	    if(j+1<n)
	    cout<<a[i][j+1]<<" ";
	    if(i+1<n)
	    cout<<a[i+1][j]<<" ";
	 }
	 
 
 return 0;
 }
