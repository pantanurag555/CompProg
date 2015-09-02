#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,k,l,mod=1000007;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=(2*n)%mod;
        l=(3*(((n-1)*n))/2)%mod;
        n=(k+l)%mod;
        cout<<n<<endl;
    }
}
