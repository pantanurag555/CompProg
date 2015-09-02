#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	long long int t,s,i,n,j;
	char a[1000];
	cin>>t;
	while(t--)
	{
		s=0;
		cin.getline(a,999);
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>j;
			j=j%n;
			s+=j;
		}
		if(s%n==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
