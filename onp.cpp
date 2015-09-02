#include<stdio.h>
#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char s[500],e[500],o[500];
    int t,i,scnt,ecnt;
    cin>>t;
    while(t--)
    {
        ecnt=scnt=0;
        cin>>o;
        for(i=0;o[i]!='\0';i++)
        {
            if(isalpha(o[i])!=0)
            e[ecnt++]=o[i];
            else
            {
                if(o[i]==')')
                {while(s[scnt-1]!='(')
                {
                    scnt--;
                    e[ecnt++]=s[scnt];
                }
                scnt--;
                }
                else if((o[i]=='-'&&s[scnt-1]=='+')||(o[i]=='+'&&s[scnt-1]=='-')||(o[i]=='*'&&s[scnt-1]=='/')||(o[i]=='/'&&s[scnt-1]=='*')||(o[i]=='+'&&s[scnt-1]=='/')||(o[i]=='+'&&s[scnt-1]=='*')||(o[i]=='-'&&s[scnt-1]=='/')||(o[i]=='-'&&s[scnt-1]=='*')||(o[i]=='-'&&s[scnt-1]=='^')||(o[i]=='+'&&s[scnt-1]=='^')||(o[i]=='*'&&s[scnt-1]=='^')||(o[i]=='/'&&s[scnt-1]=='^'))
                {
                    e[ecnt++]=o[i];
                    while(s[scnt-1]!='(')
                    {
                        scnt--;
                        e[ecnt++]=s[scnt];
                    }
                    scnt--;
                }
                else
                {
                    s[scnt++]=o[i];
                }
            }
        }
        e[ecnt]='\0';
        cout<<e<<endl;
    }
}
