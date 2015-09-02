#include<stdio.h>
#include<math.h>
int main()
{
    float k,l;
    while(1)
    {
        scanf("%f",&l);
        if(l==0)
        break;
        k=(l*l)/(2*M_PI);
        printf("%.2f\n",k);
    }
}
