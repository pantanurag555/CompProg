#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,l,i,j,x,y,stop,cx,cy;
    char a[100008];
    cin>>t;
    j=0;
    while(t--)
    {
        if(j==0)
        gets(a);
        gets(a);
        j++;
        l=strlen(a);
        stop=0;
        x=0;
        y=l-1;
        for(i=0;i<l/2;i++)
        {
            if(a[x]!=a[y])
            {
                stop++;
                break;
            }
            x++;
            y--;
        }
        if(stop==0)
        cout<<"-1"<<endl;
        else
        {
            cx=0;cy=0;
            for(i=1;;i++)
            {
                if(a[x+i]!=a[y-i+1])
                cx=1;
                if(a[x+i-1]!=a[y-i])
                cy=1;
                if(cx==1)
                {
                    cout<<y<<endl;
                    break;
                }
                if(cy==1)
                {
                    cout<<x<<endl;
                    break;
                }
            }
        }
    }
}
