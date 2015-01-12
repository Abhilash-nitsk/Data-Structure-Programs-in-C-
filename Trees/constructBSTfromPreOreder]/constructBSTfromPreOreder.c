/**\brief Program to construct a BST from a array of preorder traversal  Author : @AbhilashAgarwal  */

#include<stdio.h>
#define SIZE 10
struct node
{
    int data;
    struct node * left;
    struct node * right;
} Node;

struct node * newNode(int d)
{
    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->data = d;
    N->left = NULL;
    N->right = NULL;
    return N;
}
struct node * constructTree(int a[], int s, int e,int *preIndex)
{
        if(s>e||*preIndex>=SIZE)
                return NULL;
        struct node * tree = newNode(a[*preIndex]);
        preIndex++;
        if(s==e)
                return tree;
        int i;
        for(i=s;i<=e;i++)
                if(a[i]>tree->data)
                        break;
        tree->left = constructTree(a,*preIndex,i-1,preIndex);
        tree->right = constructTree(a,i,e,preIndex);
        return tree;
}
void printInorder (struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}

// Driver program to test above functions
int main ()
{
    int pre[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof( pre ) / sizeof( pre[0] );
  int *preIndex = 0;
    struct node *root = constructTree(pre, 0,6,&preIndex);

    printf("Inorder traversal of the constructed tree: \n");
    printInorder(root);

    return 0;
}
