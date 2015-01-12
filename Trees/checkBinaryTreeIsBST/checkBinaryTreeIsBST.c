/** Program \brief Check if the given binary tree is BST or not  Author : @AbhilashAgarwal */

#include<stdio.h>
#include<limits.h>

struct node
{
        int data;
        struct node * left;
        struct node * right;
};
int minNode(struct node *tree )
{
        if(tree==NULL)
                return 0;
        while(tree->left!=NULL)
                tree=tree->left;
        return tree->data;
}
int maxNode(struct node * tree)
{
        if(tree==NULL)
                return 0;
        while(tree->right!=NULL)
                tree = tree->right;
        return tree->data;
}
int checkBinaryBST(struct node * tree)
{
        return(UtilBST(tree , INT_MIN, INT_MAX));
}
int UtilBST(struct node * tree , int minN , int maxN)
{
        if(tree==NULL)
                return 1;
        if(tree->data<minN||tree->data>maxN)
                return 0;
        else
                return(UtilBST(tree->left , minN , tree->data)&&UtilBST(tree->right , tree->data  , maxN));
}
struct node * newNode()
{
    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->data = 0;
    N->left = NULL;
    N->right = NULL;
    return N;
}
void insertNodeBST(struct node ** tree , int x)
{
    struct node * t =newNode();
    t->data = x;
    if((*tree) == NULL)
        (*tree) = t;
    else
    {
            if(x>((*tree)->data))
                insertNodeBST(&((*tree)->right), x);
            else
                insertNodeBST(&((*tree)->left), x);
    }
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
        insertNodeBST(&tree , x);
        scanf("%d",&x);
    }
    display(tree);
    int r = checkBinaryBST(tree);
    if(r==0)
        printf("\nGivrn tree is not BST " );
    else
        printf("\nGivn tree is a BST ");
}
