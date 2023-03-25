    #include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *left, *right;
};



// Create a node
struct node *newNode(int n)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = n;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root)
{
  if (root==NULL)
  return;
   inorder(root->left);
   printf("%d->", root->data);
      inorder(root->right);
 
}
// Pre-order Traversal
void preorder(struct node *root)
{
  if (root==NULL)
  return;
     // Traverse root
    printf("%d->", root->data);
     preorder(root->left);
    // Traverse right
    preorder(root->right);
 
}
//Post-order Traversal
void postorder(struct node *root)
{
     if (root==NULL)
     return;
    // Traverse left
    postorder(root->left);
    // Traverse right
    postorder(root->right); 
    // Traverse root
    printf("%d->",root->data);
  
}

// Insert a node
struct node *insert(struct node *node, int data) 
{
  // Return a new node if the tree is empty
  
if (node == NULL) 
return newNode(data);

  if (data < node->data)
    node->left = insert(node->left, data);
  else
    node->right = insert(node->right, data);

  return node;
}

// Driver code
int main()
{
 int x;
  struct node *root = NULL;

 while(1)
 {
  printf("\nEnter node value,zero to stop:");
  scanf("%d",&x);
  if(x==0)
  break;
  root=insert(root,x);
  }
  printf("\nInorder traversal:");
  inorder(root);
  printf("\nPreorder traversal:");
  preorder(root);
  printf("\nPostorder traversal:");
  postorder(root);
  return 0;
}
