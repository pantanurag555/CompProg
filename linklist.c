#include<stdio.h>
struct node
{
  int n;
  struct node *next;	
}*end=NULL,*m;
int cnt=0;
void add()
{
    struct node *a;
	a=(struct node*)calloc(1,sizeof(struct node));
	if(end==NULL)
	{
		end=a;
		m=a;
		m->next=NULL;
	}
	else
	{
	   a->next=m;
		m=a;	
	}
	printf("\nEnter no.");
	scanf("%d",&m->n);
	cnt++;
}
void del()
{
   	struct node *l;
	l=(struct node*)calloc(1,sizeof(struct node));
	l=m;
	m=m->next;
    printf("%d\n",l->n);
	free(l);	
    cnt--;
}
void mid(int j)
{
	int k=0;
	struct node *l,*y;
	l=(struct node*)calloc(1,sizeof(struct node));
	y=(struct node*)calloc(1,sizeof(struct node));
	while(k<cnt-j+1)
	{
			printf("%d",cnt);
		l=l->next;
		k++;
	}
	y=l->next;
	l->next=y->next;
    printf("%d\n",y->n);
	free(y);
}
void trav()
{
	struct node *l;
	l=(struct node*)calloc(1,sizeof(struct node));
	l=m;
	while(l!=NULL)
	{
		printf("%d\n",l->n);
		l=l->next;
	}
}
int main()
{
	int i,j;
while(1){
	printf("1.Add\n2.Delete\n3.Delete in middle\n4.Taverse\n0.End ");
	scanf("%d",&i);
	if(i==1)
	add();
	if(i==2)
	del();
	if(i==3)
	{
		printf("Enter serial no.");
		scanf("%d",&j);
	    mid(j);
	}
    if(i==4)
    trav();
	if(i==0)
	break;
}
}
