#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{int a,k,d,w,x,y,z;
long long int t,b;
  cin>>t;
  while(t--)
  {cin>>a>>b;k=a%10;d=b%4;
    if(b==0){cout<<"1"<<endl;goto l;}
	if(k==0||k==1||k==5||k==6)
    {cout<<k<<endl;goto l;}
     if(k==2)
     {w=2;x=4;y=8;z=6;}
     if(k==3)
     {w=3;x=9;y=7;z=1;}
       if(k==7)
     {w=7;x=9;y=3;z=1;}
     if(k==8)
     {w=8;x=4;y=2;z=6;}
     if(k==4)
     {w=y=4;x=z=6;}
     if(k==9)
     {w=y=9;x=z=1;}
      switch(d)
      { case 1:cout<<w<<endl;break;
        case 2:cout<<x<<endl;break;
        case 3:cout<<y<<endl;break;
        case 0:cout<<z<<endl;break;}l:;}}


