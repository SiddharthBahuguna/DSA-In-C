#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
   struct node *next;
};
void display(struct node* p)
{
    while(p!=NULL)
{
    printf("%d ",p->data);
    p=p->next;
}
}
void create(int a[],int n)
{
    struct node *temp,*first,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    int i;
    for(i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    display(first);
}

int count(struct Node *p)
{
	int c=0;
	while(p!=0)
	{
		c++;
		p=p->next;
	}
	return c;
}
printf("%d",count(first));
int main()
{
    int n;
    printf("enter size of an array:");
    scanf("%d",&n);
    
    int a[n],i;
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,n);
    
}
