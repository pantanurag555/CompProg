#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int t;
  long long int n,i,c;
  cin>>t;
  while(t--)
  {
  	i=5;
  	c=0;
  	cin>>n;
  	while(n>=i)
  	{
  		c=c+n/i;
  		i=i*5;
  	}
  	cout<<c<<endl;
  }
}
