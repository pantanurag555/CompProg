#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	unsigned long long int n,i,s;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n;
		for(i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				s=s+i;
				if(i*i!=n)
				s=s+n/i;
			}
		}
	    cout<<s<<endl;
	}
}
