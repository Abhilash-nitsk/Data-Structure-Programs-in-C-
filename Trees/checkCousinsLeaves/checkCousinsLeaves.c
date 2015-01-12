/** \brief Program to check if the given 2 leaves are cousins   Author : @AbhilashAgarwal  */

#include<stdio.h>

typedef struct Node
{
    int data;
    struct node * left;
    struct node * right;
} node;

struct node * newNode(int d)
{
    node *N = (node *)malloc(sizeof(node));
    N->data = d;
    N->left = NULL;
    N->right = NULL;
    return N;
}

void display(node * tree)
{
        node *N = newNode(0);
        N=tree;
        if(tree == NULL)
            return;
        display(tree->left);
        printf("\n%d",tree->data);
        display(tree->right);
}
int isSibling(node * tree, node * a, node * b)
{
        if(tree==NULL)
                return 0;
        if((tree->left==a&&tree->right==b)||(tree->left==b&&tree->right==a)||isSibling(tree->left, a, b)||isSibling(tree->right, a,b))
                return 1;
        else
                return 0;
}
int findLevel(node * tree, node * ptr, int level)
{
        if(tree==NULL)
                return 0;
        if(tree==ptr)
                return level;
        int l = findLevel(tree->left,ptr,level+1);
        if(l!=0)
                return l;
        else
                return(findLevel(tree->right,ptr, level+1));
}
int checkCousin(node * tree, node * n1, node * n2)
{
        if(tree==NULL)
                return 0;
        return((findLevel(tree, n1, 0)==findLevel(tree, n2, 0))&&!(isSibling(tree, n1,n2)));
}
int main()
{
node * tree = newNode(4);
node * n1 = newNode(3);
node * n2 = newNode(2);
node * n3 = newNode(5);
node * n4 = newNode(10);
n1->left = n2;
n3->right = n4;
tree->left = n1;
tree->right = n3;
if(checkCousin(tree,n2,n3))
        printf("\nThe given nodes are cousins");
else
        printf("\nSorry not cousins");
}
