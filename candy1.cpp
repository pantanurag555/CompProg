#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,a[10000],i,j,s,m;
	while(1)
	{
		s=0;
		m=0;
		cin>>n;
		if(n==-1)
		break;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s=s+a[i];
		}
		if(s%n!=0)
		{
			cout<<"-1"<<endl;
			goto z;
		}
		j=s/n;
		for(i=0;i<n;i++)
		{
			if(a[i]>j)
			m+=a[i]-j;
		}
		cout<<m<<endl;
		z:;
	}
}
