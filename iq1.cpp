#include<stdio.h>
int main()
{
	int n1,sum,t,n,i,j,g[1000],b[1000],t1;
	scanf("%d",&n1);
	t=0;
	while(t<n1)
	{
		sum=0;
		t++;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		for(i=0;i<n;i++)
		scanf("%d",&g[i]);
		for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (b[i]>b[j])
			{
				t1=b[i];
				b[i]=b[j];
				b[j]=t1;
			}
			if (g[i]>g[j])
			{
				t1=g[i];
				g[i]=g[j];
				g[j]=t1;
			}
			
		}
	}
		for(i=0;i<n;i++)
		{
			sum=sum+b[i]*g[i];
		}
	    printf("%d\n",sum);
	}
    return 0;
}
