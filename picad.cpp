#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{ int max,min,tmax,t,c[5000],cnt=0,j;
  long long int a[5000],b[5000],p,k,i;
  while(cnt<10)
  {
  	cnt++;
  	cin>>p>>k;
  	cin>>t;
  	max=0;
  	min=t;
  	for(i=0;i<t;i++)
  	cin>>a[i]>>b[i];
  	for(i=p;i<=k;i++)
  	{
	    tmax=0;
		  
  		for(j=0;j<t;j++)
  		{
  			if(i>=a[j]&&i<=b[j])
  			c[j]=1;
  			else
  			c[j]=0;
  			tmax=tmax+c[j];
  		}
  		if(tmax>max)
  		max=tmax;
  		if(tmax<min)
  		min=tmax;
  	}
  	cout<<min<<" "<<max;
  }
}
  
   
