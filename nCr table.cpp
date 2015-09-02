#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t,n,i,l,o;
    double k,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        j=1;
        k=n;
        for(i=0;i<n+1;i++)
        {
            if(i==0 || i==n)
            {
                l=1;
                cout<<l<<" ";
            }
            else
            {
                l=(k*l)/j;
                o=fmod(l,1000000000);
                cout<<o<<" ";
                k--;
                j++;
            }
        }
        cout<<endl;
    }
}
