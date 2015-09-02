#include<iostream>
using namespace std;
int main()
{
	int i,j,flag,a,temp,k;
	float coc,r,fl,t;
	while(1)
	{   
		cin>>coc;
		temp=coc;t=coc;
		if(coc<0)
		break;
		for(i=50;i>2;i--)
		{
			coc=t;
			flag=0;
			for(j=i;j>0;j--)
			{
				coc=coc-1;
				coc=coc-coc/i;
		        a=coc;
				if(coc-a>0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				k=coc;
				r=k%i;
				if(r==0)
				break;
			}
		}
		if(flag==1)
		cout<<temp<<" coconuts, no solution"<<endl;
		else
		cout<<temp<<" coconuts, "<<i<<" people and 1 monkey"<<endl;
	}
}
