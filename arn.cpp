#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,f,s,i,j,tf=0,ts=0,sum=0,tsum=0;
	cin>>t;
	while(t--)
	{
	    tsum=0;
		tf=0;ts=0;
		i=0;
		cin>>f>>s;
		j=0;
		while(f>0)
		{
			while(i==0&&j==0)
			{
				i=f%10;
				f=f/10;
			}
			if(j>0)
			{
				i=f%10;
				f=f/10;
			}
            j=1;
            tf=tf*10+i;
		}
	    j=0;
		i=0;
		while(s>0)
		{
			while(i==0&&j==0)
			{
				i=s%10;
				s=s/10;
			}
			if(j>0)
			{
				i=s%10;
				s=s/10;
			}
			ts=ts*10+i;
			j=1;
		}
		sum=tf+ts;
	    i=0;
		j=0;
		while(sum>0)
		{
			while(i==0&&j==0)
			{
				i=sum%10;
				sum=sum/10;
			}
			if(j>0)
			{
				i=sum%10;
				sum=sum/10;
			}
			tsum=tsum*10+i;
			j=1;
		}
		cout<<tsum<<endl;
	}
}

