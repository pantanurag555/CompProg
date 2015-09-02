#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,x,y,z,i,j,k,n,cnt=0;
	cin>>t;
	char a[1000],b[1000],c;
	while(t--)
	{
       x=0;
       y=0;
       z=0;
       gets(b);
       if(cnt==0)
	   gets(a);
       gets(a);
       for(j=0;a[j]!=' ';j++)
       {
       	c=a[j];
       	if(c=='m')
       	{
       		k=1;
       		x=0;
			break;
       	}
       n=c;
       n=n-48;
	   x=x*10+n;
       }
       for(i=0;a[i]!='+';i++);
       for(j=i+2;a[j]!=' ';j++)
       {
       	c=a[j];
       	if(c=='m')
       	{
       		k=2;
       		y=0;
			break;
       	}
       n=c;
       n=n-48;
	   y=y*10+n;
       }
       for(i=0;a[i]!='=';i++);
       for(j=i+2;a[j]!='\0';j++)
       {
       	c=a[j];
       	if(c=='m')
       	{
       		k=3;
       		z=0;
			break;
       	}
       n=c;
       n=n-48;
	   z=z*10+n;
       }
       if(k==1)
       x=z-y;
       else if(k==2)
       y=z-x;
       else
       z=x+y;
       cout<<x<<" + "<<y<<" = "<<z<<endl;
       cnt++;
	}
}
