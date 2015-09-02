#include<stdio.h>
#include<math.h>
int main()
{
	int j,sum,n,t;
	scanf("%d",&j);
	t=0;
	while(t<j)
	{
		scanf("%d",&n);
		sum=(pow(n,2)*pow(n+1,2))/4;
		printf("%d\n",sum);
	    t++;
    }
    return 0;
}

