#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,num,n,d,ld,ln,c1,c2,i;
	cin>>t;
	while(t--)
	{
		cin>>num;
		n=0;
		d=0;
		ld=2;
		ln=1;
		c1=0;
		c2=0;
		for(i=0;i<num;i++)
		{
			if(c1==1&&d==1)
			{
				d--;
				c1=0;
				ld+=2;
			}
			if(c1==0)
			d++;
			else
			d--;
			if(d==ld)
			c1=1;
			if(c2==1&&n==1)
			{
				n--;
				c2=0;
				ln+=2;
			}
			if(c2==0)
			n++;
			else
			n--;
			if(n==ln)
			c2=1;
		}
		cout<<"TERM "<<num<<" IS "<<n<<"/"<<d<<endl;
	}
}
