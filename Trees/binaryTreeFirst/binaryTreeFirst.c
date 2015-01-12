/** Program \brief Initial operations in Binary Tree    Author  : @AbhilashAgarwal  */

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
void insertNode(struct node ** tree , int element)
{
    struct node * N = newNode();
    N->data = element;
    if((*tree)  ==NULL)
        *tree = N;
    else
        if((*tree)->left ==NULL)
            insertNode(&((*tree)->left),element);
        else
             insertNode(&((*tree)->right),element);
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
int main()
{
    int x;
    struct node *tree = newNode();
    printf("\nEnter The element you want to insert in the Tree 0 to quit \n");
    scanf("%d",&x);
    while(x!=0)
    {
        insertNode(&tree , x);
        scanf("%d",&x);
    }
    display(tree);
}
