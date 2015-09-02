#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int h,m;
    char a[10],b[35],c[15];
    cin>>h>>m;
    if(m>30)
    {
        m=60-m;
        h++;
        strcpy(a,"to");
    }
    else
    strcpy(a,"past");
    switch(m)
    {
        case 1:strcpy(b,"one minute");
                break;
        case 2:strcpy(b,"two minutes");
                break;
        case 3:strcpy(b,"three minutes");
                break;
        case 4:strcpy(b,"four minutes");
                break;
        case 5:strcpy(b,"five minutes");
                break;
        case 6:strcpy(b,"six minutes");
                break;
        case 7:strcpy(b,"seven minutes");
                break;
        case 8:strcpy(b,"eight minutes");
                break;
        case 9:strcpy(b,"nine minutes");
                break;
        case 10:strcpy(b,"ten minutes");
                break;
        case 11:strcpy(b,"eleven minutes");
                break;
        case 12:strcpy(b,"twelve minutes");
                break;
        case 13:strcpy(b,"thirteen minutes");
                break;
        case 14:strcpy(b,"fourteen minutes");
                break;
        case 15:strcpy(b,"quarter");
                break;
        case 16:strcpy(b,"sixteen minutes");
                break;
        case 17:strcpy(b,"seventeen minutes");
                break;
        case 18:strcpy(b,"eighteen minutes");
                break;
        case 19:strcpy(b,"nineteen minutes");
                break;
        case 20:strcpy(b,"twenty minutes");
                break;
        case 21:strcpy(b,"twenty one minutes");
                break;
        case 22:strcpy(b,"twenty two minutes");
                break;
        case 23:strcpy(b,"twenty three minutes");
                break;
        case 24:strcpy(b,"twenty four minutes");
                break;
        case 25:strcpy(b,"twenty five minutes");
                break;
        case 26:strcpy(b,"twenty six minutes");
                break;
        case 27:strcpy(b,"twenty seven minutes");
                break;
        case 28:strcpy(b,"twenty eight minutes");
                break;
        case 29:strcpy(b,"twenty nine minutes");
                break;
        case 30:strcpy(b,"half");
                break;
    }
    switch(h)
    {
        case 1:strcpy(c,"one");
                break;
        case 2:strcpy(c,"two");
                break;
        case 3:strcpy(c,"three");
                break;
        case 4:strcpy(c,"four");
                break;
        case 5:strcpy(c,"five");
                break;
        case 6:strcpy(c,"six");
                break;
        case 7:strcpy(c,"seven");
                break;
        case 8:strcpy(c,"eight");
                break;
        case 9:strcpy(c,"nine");
                break;
        case 10:strcpy(c,"ten");
                break;
        case 11:strcpy(c,"eleven");
                break;
        case 12:strcpy(c,"twelve");
                break;
    }
    if(m==0)
    cout<<c<<" o' clock";
    else
    cout<<b<<" "<<a<<" "<<c;
}
