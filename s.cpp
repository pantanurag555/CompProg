#include<stdio.h>
#include<conio.h>
int main()
{
	char a[10],b[10];
	int i;
	scanf("%s",b);
	/*for(i=0;b[i]!='\0';i++)
	{
		scanf("%c",&b[i]);
	}*/

    for(i=0;b[i]='\0';i++)
    {
    	a[i]=b[i];
    }
    
 
    printf("%c",a[1]); printf("%c",a[2]); printf("%c",a[3]);
 printf("%c",a[4]); printf("%c",a[5]); 
}
