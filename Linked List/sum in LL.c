#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node*)malloc (sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}

int Add(struct Node *p)
{
	if(p==0)
	return 0;
	
	else
	return Add(p->next)+p->data;
}

int main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	
	int a[n],i;
	printf("Enter values in Linked List:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sum%d",)
	
}


