#include<stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left,*right;
};

struct Node *create()
{
    int x;
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter data:(-1 for no node)");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newNode->data=x;
    printf("Enter left child:%d",x);
    newNode->left=create();
    
    printf("\nENter right child:%d",x);
    newNode->right=create();
    return newNode;
}

void main()
{
    struct Node *root;
    root=NULL;
    root=create();
}
