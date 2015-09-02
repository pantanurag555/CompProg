#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,r,i,t,j,k,l;
	k=0;
	for(i=2;i<1000;i++)
    {   
	  t=i;l=0;
		while(1)
		{  
		   b=0;
		   while(t>0)
		   {
			   a=t%10;
			   t=t/10;
			   b=b+(a*a);
		   }
		   if(b==89)
	   	   {
	   	   l++;break;}
	       if(b==1)
	       break;
	       t=b;
		}
	    if(l==1)
	    {
	    k++;
		}
	}
	cout<<k;
	return 0;
}
