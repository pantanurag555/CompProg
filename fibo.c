#include<stdio.h>
#include<math.h>
int main()
{
	int l,t,i,j,n1,n2;
	l=0;
	long long int a,b,c,sum,e;
	e=pow(10,9)+7;
	scanf("%d",&t);
	while(l<t)
	{
		a=1;b=1;
		scanf("%d %d",&n1,&n2);
		l++;
		sum=0;
		for(i=2;i<n2;i++)
		{
			c=(a+b)%e;
		    if(i+1>=n1&&i+1<=n2)
		    sum=sum+c;
		    a=b;
		    b=c;
		}
		if(1>=n1&&1<=n2)
		sum=sum+1;
		if(2>=n1&&2<=n2)
		sum=sum+1;
		printf("%d\n",sum%e);
	}
	return 0;
}
