#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,x,num=0;
	cin>>n;
	x=sqrt(n);
	for(i=1;i<=x;i++)
	for(j=i;i*j<=n;j++)
    num++;
    cout<<num;
}
