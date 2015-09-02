#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int t,f1;
  long long int x,n,i,l;
  cin>>t;
  while(t--)
  {
      cin>>x;
      f1=1;
      n=x;
      n++;
      while(n>1)
      {
          if(n%2!=0)
          {
              f1=0;
              break;
          }
          n/=2;
      }
      if(x==1)
          cout<<"2"<<endl;
       else if(f1==1)
          {
              cout<<x/2<<endl;
          }
       else
              cout<<"-1"<<endl;
  }
}
