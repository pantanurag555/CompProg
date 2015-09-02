#include<stdio.h>
#include<iostream>
using namespace std;
void max_heapify(long long int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2*i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
            j = j+1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j/2] = a[j];
            j = 2*j;
        }
    }
    a[j/2] = temp;
    return;
}
void heapsort(long long int *a, int n)
{
    int i, temp;
    for (i = n; i >= 2; i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        max_heapify(a, 1, i - 1);
    }
}
void build_maxheap(long long int *a, int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        max_heapify(a, i, n);
    }
}
int main()
{
    int t,n,j,i;
    long long int a[100008],s,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(i=1;i<=n;i++)
        cin>>a[i];
        build_maxheap(a,n);
        heapsort(a,n);
        for(i=1;i<=n;i++)
        {
            k=1;
            while(a[i]==a[i+1]&&i!=n)
            {
                k++;
                i++;
            }
            if(k>1)
            {
                s=s+(k*(k-1));
            }
        }
        cout<<s<<endl;
    }
}
