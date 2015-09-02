#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,i;
	while(1)
	{
		b=0;
		i=0;
		cin>>a;
		if(a==0.00)
		break;
		while(b<a)
		{
			i++;
			b+=1/(i+1);
		}
		cout<<i<<" card(s)"<<endl;
	}
}
