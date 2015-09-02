#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,f1,l,k,r1,c1,r2,c2,t,y,z;
    char g[1005][1005],p[1005][1005];
    cin>>t;
    while(t--)
    {
        cin>>r1>>c1;
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        cin>>g[i][j];
        cin>>r2>>c2;
        for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        cin>>p[i][j];
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {{
            f1=0;
            if(g[i][j]==p[0][0] && c1-j>=c2)
            {
                f1=1;
                y=i;
                z=j;
                for(l=0;l<r2;l++)
                {
                    for(k=0;k<c2;k++)
                    {
                        if(p[l][k]!=g[y][z])
                        {
                            f1=0;
                            break;
                        }
                        z++;
                    }
                    if(f1==0)
                    break;
                    z=z-c2;
                    y++;
                }
            }
                if(f1==1)
                {
                    cout<<"YES\n";
                    goto de;
                }
        }}de:
        if(f1==0)
        cout<<"NO\n";
    }
    return 0;
}
