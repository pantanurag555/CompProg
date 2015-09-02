#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int n=0;
class id
{
    char na[25],res[15];
    public:
    char no[12];
    void input()
    {
        int a;
        cout<<"Enter id card no. and name of student";
        cin>>no>>na;
        while(1){
        cout<<"Enter 1 for hosteller and 2 for day-boarder";
        cin>>a;
        switch(a)
        {
            case 1:strcpy(res,"HOSTELLER");
                   break;
            case 2:strcpy(res,"DAY-BOARDER");
                   break;
            default:cout<<"Wrong input\n";
        }
        if(a==1 || a==2)
        break;
        }
    }
    void update()
    {
        int a;
        cout<<"Enter id card no. and name of student";
        cin>>no>>na;
        while(1){
        cout<<"Enter 1 for hosteller and 2 for day-boarder";
        cin>>a;
        switch(a)
        {
            case 1:strcpy(res,"HOSTELLER");
                   break;
            case 2:strcpy(res,"DAY-BOARDER");
                   break;
            default:cout<<"Wrong input\n";
        }
        if(a==1 || a==2)
        break;
        }
    }
    void copy(id k)
    {
        strcpy(no,k.no);
        strcpy(na,k.na);
        strcpy(res,k.res);
    }
    void del(int d,id b[])
    {
        int i,j;
        for(i=0,j=0;j<n;i++,j++)
        {
            if(i==d)
            {
                i--;
            }
            else
            {
                b[i].copy(b[j]);
            }
        }
        n--;
    }
    void disp()
    {
        cout<<"Id card no.: "<<no<<"\nName: "<<na<<"\nHosteller/Day-Boarder: "<<res<<endl;
    }
};

int main()
{
    int ch,ch1,i,f;
    id b[1000];
    char c[12];
    while(1)
    {
        cout<<"Enter:-\n1.To add an id card\n2.To make changes to an existing id card\n3.To exit ";
        cin>>ch;
        if(ch==3)
        break;
        switch(ch)
        {
            case 1:b[n].input();
                   n++;
                   break;
            case 2:f=0;
                   cout<<"Enter id card no. ";
                   cin>>c;
                   cout<<"Enter:-\n1.To update id card\n2.To delete id card\n3.To display details of the id card ";
                   cin>>ch1;
                   for(i=0;i<n;i++)
                   {
                       if(strcmp(c,b[i].no)==0)
                       {
                           f=1;
                           break;
                       }
                   }
                   if(f==0)
                   {
                       cout<<"Id card not found\n";
                       goto x;
                   }
                   switch(ch1)
                   {
                       case 1:b[i].update();
                              break;
                       case 2:b[i].del(i,b);
                              break;
                       case 3:b[i].disp();
                              break;
                   }
                   break;
            default:cout<<"Wrong choice\n";
        }
        x:;
    }
    return(0);
}
