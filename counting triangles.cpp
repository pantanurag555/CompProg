#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=(n*(n+2)*((2*n)+1))/8;
        cout<<n<<endl;
    }
}
