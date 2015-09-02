#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,x,y;
	unsigned long long int m,a[100005],i,sum;
	sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m>>x>>y;
	for(i=0;i<m;i++)
	{
		if(i!=0)
		{
			x=(x+7)%(n-1);
			y=(y+11)%n;
		}
		sum=sum+*std::max_element(a+(x<=y?x:y),a+(x>=y?x:y)+1);
	}
	cout<<sum;
}
