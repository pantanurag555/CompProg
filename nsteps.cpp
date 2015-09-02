#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,x,y,s;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x==y||y==x-2)
		{
			if(x%2==0)
			s=x+y;
			else
			s=x+y-1;
			cout<<s<<endl;
		}
		else
		cout<<"No Number"<<endl;
	}
}
