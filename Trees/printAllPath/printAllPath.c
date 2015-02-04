/**\brief Program to print all the path from root to leaves in a binary tree    Author : @AbhilashAgarwal  */

#include<stdio.h>
int Path[100], s=0;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
void printArray()
{
        int i;
        printf("\n");
        for(i=0;i<s;i++)
                printf("%d   ",Path[i]);
}
void path(struct node *root)
{
    Path[s++] = root->data;
    if(root->left == NULL && root->right ==NULL)
    {
        printArray();
    }
    else
    {
    path(root->left);
    path(root->right);
    return;
    }
}
int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  path(root);
  getchar();
  return 0;
}
