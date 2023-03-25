#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node* left, *right;
};
 
/*
 * Function to create new nodes
 */
 
struct node* createnode(int key)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = key;
    newnode->left = NULL;
    newnode->right = NULL;
 
    return(newnode);
}
 
/*
 * Function to ascertain the height of a Tree
 */
 
static int count = 0;
int countnodes(struct node *root)
{
    if(root != NULL)
    {
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;
}
 
/*
 * Main Function
 */
 
int main()
{
  
 
    struct node *newnode = createnode(25);
    newnode->left = createnode(27);
    newnode->right = createnode(19);
    newnode->left->left = createnode(17);
    newnode->left->right = createnode(91);
    newnode->right->left = createnode(13);
    newnode->right->right = createnode(55);
 
    /* Sample Tree 1- Balanced Tree
 
 
                    25
                  /    \
                 27     19
                / \     / \
              17  91   13 55
 
 
    */
    printf("Number of nodes in tree = %d ",countnodes(newnode));
    /* Creating second Tree.*/
 
    
    return 0;
}
