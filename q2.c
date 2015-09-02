#include<stdio.h>
#include<conio.h>
void rev(int *a,int n)
{
	int i,j;
	for(i=0;i<n/2;i++)
	{
		j=*(a+i);
		*(a+i)=*(a+n-1-i);
		*(a+n-1-i)=j;
	}
}
int main()
{
	int a[50],n,i;
	printf("Enter the number of numbers you want to input ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	rev(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	getch();
	return 0;
}
