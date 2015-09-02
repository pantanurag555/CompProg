#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,m,n,c,t,k;
	int a[1000];
	a[0]=1;
	cin>>t;
	while(t--)
	{
		a[0]=1;
		m=1;
		c=0;
		cin>>n;
		for(i=2;i<=n;i++)
		{
			for(j=0;j<m;j++)
			{
				k=a[j]*i+c;
				a[j]=k%10;
				c=k/10;
			}
			while(c>0)
			{
				a[m]=c%10;
				c=c/10;
				m++;
			}
		}
		for(i=m-1;i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
}
