#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int r,c,k;
    cin>>r>>c;
    if(r%2==0)
    {
        k=((r/2)-1)*10;
        switch(c)
        {
            case 1:k++;
                   break;
            case 2:k+=3;
                   break;
            case 3:k+=5;
                   break;
            case 4:k+=7;
                   break;
            case 5:k+=9;
                   break;
        }
    }
    else
    {
        k=(r/2)*10;
        switch(c)
        {
            case 1:k+=0;
                   break;
            case 2:k+=2;
                   break;
            case 3:k+=4;
                   break;
            case 4:k+=6;
                   break;
            case 5:k+=8;
                   break;
        }
    }
    cout<<k;
}
