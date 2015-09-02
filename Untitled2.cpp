#include<iostream>

using namespace std;


int main()
{
	int minv,l,t[5],d,p,i,mind,j,pos,pr[5],qty[5],k;
	cin>>k;
	l=0;
	while(l<k)
	{
		l++;
		p=0;
		cin>>d;
		for(i=0;i<d;i++)
		{
			cin>>t[i];
			p=p+t[i];
		}
		minv=100001;
		for(i=0;i<5;i++)
		{
			cin>>pr[i];
		    qty[i]=0;
		    if(minv>pr[i])
		    minv=pr[i];
		}
	    for(i=0;i<d;i++)
	    {
	        while(t[i]>=minv)
	        {
		    	pos=-1;
			    mind=100001;
	    		for(j=0;j<5;j++)
	    		{
	        		if(t[i]-pr[j]<mind)
					if(t[i]-pr[j]>=0)
						{
							mind=t[i]-pr[j];
							pos=j;
						}
	    		}
	    		if(pos>=0)
				{
					p=p-pr[pos];
	    			qty[pos]++;
            	    t[i]=t[i]-pr[pos];
				}
		    }
		}
	    for(i=0;i<5;i++)
		cout<<qty[i];
		cout<<p;
	    
	}
	return 0;
}
