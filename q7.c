#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[30][30],t[30];
	int n,i,j;
	printf("Enter no. of strings you want");
	scanf("%d",&n);
	printf("Enter the strings\n");
	for(i=0;i<=n;i++)
	{
	gets(a[i]);
    }
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-1-i;j++)
		{
			if(strlen(a[j])>strlen(a[j+1]))
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	for(i=0;i<=n;i++)
	puts(a[i]);
	getch();
}
