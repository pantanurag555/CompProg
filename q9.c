#include<stdio.h>
#include<conio.h>
int check(char a)
{
	switch(a)
	{
		case 'A':
		case 'a':return 1;
		case 'E':
		case 'e':return 2;
		case 'I':
		case 'i':return 3;
		case 'O':
		case 'o':return 4;
		case 'U':
		case 'u':return 5;
		default:return 0; 
	}
}
int main()
{
	char a[30];
	int n,i,c1=0,c2=0,c3=0,c4=0,c5=0;
	printf("Enter the string ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		n=check(a[i]);
		switch(n)
	    {
	    	case 1:c1++;
	    	       break;
	        case 2:c2++;
	        	   break;
		    case 3:c3++;
			       break;
		    case 4:c4++;
			       break;
	        case 5:c5++;
			       break;	
	    }
	}
	printf("The total number of vowels in the string are %d\n",c1+c2+c3+c4+c5);
	printf("Number of a's are %d\n",c1);
	printf("Number of e's are %d\n",c2);
    printf("Number of i's are %d\n",c3);
    printf("Number of o's are %d\n",c4);
    printf("Number of u's are %d\n",c5);
    getch();
    return 0;
}
