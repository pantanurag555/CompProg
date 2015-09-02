#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n,p=0,i;
	unsigned long long int a[100002],cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cnt=0;
		for(i=0;i<n;i++)
		{
			if(p!=0)
			p--;
			cin>>a[i];
			if(i!=0)
			{
				if(a[i]!=a[i-1])
				{
					if(p==0)
					{
						cnt=cnt+2;
					}
					else if(p==1)
					{
						cnt=cnt+1;
					}
					p=2;
				}
			}
		}
		cout<<cnt<<endl;
	}
}
