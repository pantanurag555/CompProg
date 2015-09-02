#include<iostream>

using namespace std;
int main()
{
	long long int a[100000],l,k,x;
	int i,j,r,pos,b[25],cnt;
	j=0;
	while(1)
	{   
		cin>>k;
		if(k==0)
		break;
		for(l=0;l<k;l++)
		a[l]=l+1;
		cin>>pos;
		for(i=0;i<20;i++)
		{
		cin>>b[i];
	    }
	    r=0;
		while(k>pos)
		{
			cnt=0;
			for(i=0;i<k;i++)
		{
			if((i+1)%b[r]==0)
			{
			a[i]=0;cnt++;
			}
	        if(k-cnt==pos)
	        break;
		}
			x=0;
			for(i=0;i<k;i++)
			if(a[i]!=0)
			a[x++]=a[i];
			k=k-cnt;
		    r++;
		}
		j++;
		cout<<"Selection #"<<j<<endl;
		for(i=0;i<pos;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
	
}
