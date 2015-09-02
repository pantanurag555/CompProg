#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,m,i,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
        }
        if(n%2==0)
        cout<<"Alex"<<endl;
        else
        cout<<"Artur"<<endl;
    }
}
