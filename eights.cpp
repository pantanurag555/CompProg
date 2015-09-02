#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int k;
   unsigned long long int t,n,i,c;
   cin>>t;
   while(t--)
   {
   	c=0;
   	k=0;
	cin>>n;
    c=n/4;
    k=n%4;
   	i=c*1000;
   	switch(k)
   	{
   		case 1:i+=192;
   		         break;
   		case 2:i+=442;
   		         break;
   		case 3:i+=692;
   		         break;
   		case 0:i+=942;
   		         break;
   }
   cout<<i<<endl;
   	}
   
}
