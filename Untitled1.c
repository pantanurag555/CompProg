#include<stdio.h>
int main()
{
	int b[10],i,j,t1;
    	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
		  for(j=0;j<10;j++)
        {
        	for(i=0;i<10;i++)
        	{
        	    if(b[i+1]>b[i])
        	    {
        	    	t1=b[i+1];
        	    	b[i+1]=b[i];
        	    	b[i]=t1;
        	    }
			}}
			for(i=0;i<10;i++)
			printf("%d",b[i]);
}
