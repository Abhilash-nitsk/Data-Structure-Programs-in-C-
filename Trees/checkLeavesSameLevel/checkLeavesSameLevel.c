/** \brief Program to check if all the leaves of the Binary tree are in same level  Author : @AbhilashAgarwal  */

#include<stdio.h>

typedef struct Node
{
        int data;
        struct Node * left;
        struct Node * right;
} node;

node * newNode(int d)
{
    node *N = (node *)malloc(sizeof(node));
    N->data = d;
    N->left = NULL;
    N->right = NULL;
    return N;
}
void display(node * tree)
{
        node *N = (node *)malloc(sizeof(node));
        N=tree;
        if(tree == NULL)
            return;
        display(tree->left);
        printf("\n%d",tree->data);
        display(tree->right);
}
int sameLevelUtil(node *tree , int level , int * leafLevel)
{
        if(tree==NULL)
                return 1;
        if(tree->left==NULL && tree->right ==NULL)
        {
                if(*leafLevel==0)
                {
                       * leafLevel = level;
                        return 1;
                }
                return(*leafLevel==level);
        }
        else
                return(sameLevelUtil(tree->left, level+1, leafLevel)&&sameLevelUtil(tree->right, level+1, leafLevel));
}
int checkLeavesSameLevel(node * tree)
{
        int leafLevel = 0;
        return( sameLevelUtil(tree, 0,&leafLevel));
}

int main()
{
    // Let us create tree shown in thirdt example
    node *root = newNode(12);
    root->left = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(9);
        root->left->left->left = newNode(1);
   // root->left->right->left = newNode(1);
    if (checkLeavesSameLevel(root))
        printf("Leaves are at same level\n");
    else
        printf("Leaves are not at same level\n");
    getchar();
    return 0;
}
