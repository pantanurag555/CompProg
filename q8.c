#include<stdio.h>
#include<conio.h>
int check(int n)
{
	int m,i,s=0;
	m=n;
	while(m>0)
	{
		i=m%10;
		m=m/10;
		s=s+(i*i*i);
	}
	if(n==s)
	return(1);
	else
	return(0);
}
int main()
{
	int n,f;
	printf("Enter the number");
	scanf("%d",&n);
	f=check(n);
	if(f==1)
	printf("Number is an armstrong number");
	else
	printf("Number is not an armstrong number");
	getch();
	return 0;
}
