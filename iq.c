#include<stdio.h>
int main()
{
	int n1,sum,t,n,i,j,max,pos,g[1000],b[1000],t1;
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
		for(j=0;j<n;j++)
        {
        	for(i=j+1;i<n;i++)
        	{
        	    if(b[j]<b[i])
        	    {
        	    	t1=b[j];
        	    	b[j]=b[i];
        	    	b[i]=t1;
        	    }
        	    if(g[j]<g[i])
        	    {
        	    	t1=g[j];
        	    	g[j]=g[i];
        	    	g[i]=t1;
        	    }      
            }
        }
		{
			max=0;
			pos=0;
		    for(j=0;j<n;j++)
		    {
		    	if(b[i]*g[j]>max)
		    	{
		    		max=b[i]*g[j];
		    		pos=j;
		        }
		    }
		    g[pos]=0;b[i]=0;
		    sum=sum+max;
		}
	    printf("%d\n",sum);
	}
    return 0;
}
