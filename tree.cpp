#include<iostream>
#include<stdio.h>

using namespace std;
 int main()
 {
 	int i,j,a[100],b[100],k,flag,rs,temp,count=0;
 	while(1)
 	{
 		count++;
		 flag=0;k=0;rs=0;
		 for(i=0;1>0;i++)
 		{
 			cin>>a[i]>>b[i];
 			if(a[i]==0)
 			break;
 			if(a[i]<0)
 			goto xy;
 		    k++;
		 }
 		for(i=0;i<k;i++)
 		{
 			for(j=i+1;j<k;j++)
 			{
 				if(b[i]==b[j])
 				{
 					flag=1;
 					goto abcd;
 				}
 			}
 		}
 		for(i=0;i<k;i++)
 		{
 			temp=0;
			 for(j=0;j<k;j++)
 			{
 				if(a[i]==b[j])
 				temp++;
 			}
 		    if(temp==0)
 		    rs++;
		}
		if(rs==0)
		flag=1;
		abcd:
			if(flag==0)
			cout<<"Case "<<count<<" is a tree"<<endl;
			else
 			cout<<"Case "<<count<<" is not a tree"<<endl;
 	}
 	xy:
    return 0;
 }
