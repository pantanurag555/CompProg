#include<stdio.h>
#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;
long long int modpow(long long int base, long long int exp, long long int modulus)
{
  base %= modulus;
  long long int result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
int main()
{
    int t;
    long long int a,b,m=1000000007,i,sc,sd;
    char c[100005],d[100005];
    cin>>t;
    while(t--)
    {
        a=0;
        b=0;
        cin>>c>>d;
        sc=strlen(c);
        for(i=0;i<sc;i++)
        a=(a*10+(c[i]-48))%m;
        sd=strlen(d);
        for(i=0;i<sd;i++)
        b=(b*10+(d[i]-48))%m;
        i=modpow(a,b,m);
        cout<<i<<endl;
    }
}
