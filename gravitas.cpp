#include<iostream>

using namespace std;

int main()
{
	int i,j,t,test,h,k,n,m,z;
	float a[3][500];
	k=0;
	cin>>test;
	while(z<test)
	{
		z++;
		m=0;
		cin>>h>>n;
		for(i=0;i<n;i++)
		{
		    cin>>a[0][i]>>a[1][i];
		    a[2][i]=a[1][i]/a[0][i];
	    }
	    for(i=0;i<n;i++)
	    {
	    	for(j=i+1;j<n;j++)
	    	{
	    		if(a[2][i]<a[2][j])
	    		{
	    			for(k=0;k<3;k++)
					{
						t=a[k][i];
	    				a[k][i]=a[k][j];
	    				a[k][j]=t;
	    			}
				}
	    	}
	    }
	    for(i=0;i<n;i++)
	    cout<<" "<<a[2][i];
		for(i=0;i<n;i++)
	    {
	    	if(h-a[0][i]>=0)
	        {
	        	h=h-a[0][i];
	        	m=m+a[1][i];
	        }
		}
	    cout<<"\n"<<m;
	}
    return 0;
}
