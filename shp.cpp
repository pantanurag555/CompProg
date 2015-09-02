#include<iostream>

using namespace std;

int main()
{
	int test,d,pt[50],pr[5],i,j,z,mind,qty[5],pos,sum,minv;
	cin>>test;
	z=0;
	while(z<test)
	{
		sum=0;
		z++;
		cin>>d;
		for(i=0;i<d;i++)
		cin>>pt[i];
		minv=100001;
		for(i=0;i<5;i++)
		{
		cin>>pr[i];
		if(pr[i]<minv)
		minv=pr[i];
		qty[i]=0;
	    }
	
		for(i=0;i<d;i++)
		{   pt[i]=sum+pt[i];
		    while(pt[i]>=minv)
			{
			mind=100001;
			for(j=0;j<5;j++)
			{
				if(pt[i]-pr[j]>=0)
				if(pt[i]-pr[j]<mind)
				{
					mind=pt[i]-pr[j];
					pos=j;
				}
			}
			qty[pos]++;
			pt[i]=pt[i]-pr[pos];
			}
			sum=pt[i];
		}
	
		
		cout<<" "<<qty[0]<<" "<<qty[1]<<" "<<qty[2]<<" "<<qty[3]<<" "<<qty[4]<<"\n"<<sum;
	}
}
