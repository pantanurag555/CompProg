#include<stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,gs,i,mgs,g[1000000],mg[1000000];
    char s[10000];
    cin>>t;
    while(t--)
    {
        gets(s);
        cin>>gs>>mgs;
        for(i=0;i<gs;i++)
        cin>>g[i];
        for(i=0;i<mgs;i++)
        cin>>mg[i];
        sort(g,g+gs,greater<int>());
        sort(mg,mg+mgs,greater<int>());
        while(mgs!=0 && gs!=0)
        {
            if(g[gs-1]>=mg[mgs-1])
            mgs--;
            else
            gs--;
        }
        if(gs==0)
        cout<<"MechaGodzilla"<<endl;
        else if(mgs==0)
        cout<<"Godzilla"<<endl;
        else
        cout<<"uncertain"<<endl;
    }
}
