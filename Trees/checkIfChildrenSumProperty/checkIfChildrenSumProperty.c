/** \brief Program to check if the Binary tree satisfies children sum property  Author : @AbhilashAgarwal  */

#include<stdio.h>

typedef struct node
{
    int data;
    struct node * left;
    struct node * right;
} Node;

struct node * newNode()
{
    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->data = 0;
    N->left = NULL;
    N->right = NULL;
    return N;
}

void display(struct node * tree)
{
        struct node *N = newNode();
        N=tree;
        if(tree == NULL)
            return;
        display(tree->left);
        printf("\n%d",tree->data);
        display(tree->right);
}
int checkChildrenSum(struct node * tree)
{
        struct node *N = newNode();
        if(tree==NULL)
                return 1;
        else if(tree->left==NULL&& tree->right ==NULL)
                return 1;
        else if(tree->left==NULL)
        {
                if(tree->right->data == tree->data)
                        return (checkChildrenSum(tree->left)&&checkChildrenSum(tree->right));
                else
                        return 0;
        }
        else if(tree->right ==NULL)
        {
                if(tree->left->data == tree->data)
                        return (checkChildrenSum(tree->left)&&checkChildrenSum(tree->right));
                else
                        return 0;
        }
        else
        {
                if(tree->left->data +tree->right->data == tree->data)
                        return (checkChildrenSum(tree->left)&&checkChildrenSum(tree->right));
                else
                        return 0;
        }
}
int main()
{
    int x;
    struct node *tree = newNode();
    struct node *n1 = newNode();
    struct node *n2 = newNode();
    struct node *n3 = newNode();
    tree->data = 30;
    n1->data = 13;
    n2->data = 17;
    n3->data = 13;
    tree->left = n1;
    tree->right =n2;
    tree->left->left=n3;
    display(tree);
    int s = checkChildrenSum(tree);
    if(s==1)
        printf("\nThe tree is sum tree");
    else
        printf("\nThe Tree is not a sum tree");
}
