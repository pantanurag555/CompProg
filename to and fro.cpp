#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   int k,r,m,c,i,j,cnt,f;
   char a[21][21],b[250];
   while(1)
   {
       cin>>c;
       if(c==0)
       break;
       cin>>b;
       r=strlen(b)/c;
       cnt=0;
       j=0;
       f=0;
       k=1;
       for(i=0;i<r;i++)
       for(m=0;m<c;m++)
       {
           a[i][j]=b[cnt];
           if((j==c-1||j==0)&&cnt!=0)
           {
               if(f==0)
               f++;
               else
               {
                   f=0;
                   k*=-1;
               }
           }
           if(f!=1)
           j=j+k;
           cnt++;
       }
       for(i=0;i<c;i++)
       for(j=0;j<r;j++)
       cout<<a[j][i];
       cout<<endl;
   }
}
