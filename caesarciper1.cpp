#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;


int main() {
    char a[105],b;
    int n,k,j;
    cin>>n;
    cin>>a;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(isalpha(a[i])!=0)
         for(j=0;j<k;j++)
            if(a[i]=='z')
            a[i]='a';
            else if(a[i]=='Z')
            a[i]='A';
            else
            a[i]++;
    }
    cout<<a;
    return 0;
}
