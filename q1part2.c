#include<stdio.h>
#include<conio.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("The swapped numbers are %d and %d",a,b);
}
int main()
{
	int a,b;
	printf("Enter the 2 numbers ");
	scanf("%d %d",&a,&b);
	swap(a,b);
	getch();
	return 0;
}
