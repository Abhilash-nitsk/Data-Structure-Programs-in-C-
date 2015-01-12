/** \brief Program to construct a special tree from a given preorder traversal of the tree in form of two array representing 1. values pre[],  2. only L,N for leaf or Node for corresponding node preLN[]  Author : @AbhilashAgarwal */


/**----------------------------------Program is incomplete and Experimental----------------------*/
#include<stdio.h>
#define MAX_SIZE 10
typedef struct Node
{
    int data;
    node * left;
    node * right;
} node;

struct node * newNode()
{
    node *N = ( node *)malloc(sizeof( node));
    N->data = 0;
    N->left = NULL;
    N->right = NULL;
    return N;
}
void display( node * tree)
{
        node *N = newNode();
        N=tree;
        if(tree == NULL)
            return;
        display(tree->left);
        printf("\n%d",tree->data);
        display(tree->right);
}
void specialTreeConst(node * tree, int pre[], char preLN[])
{
        int i,j;
        for(i=0;i<MAX_SIZE;i++)
        {
                if(preLN[i]=='L')
                {
                        if()
                        tree=pre[i];
                        return;
                }
                else
                {
                      tree
                }
        }
}
int main()
{
    int x;
    node *tree = newNode();
    printf("\nEnter The element you want to insert in the Tree 0 to quit \n");
    scanf("%d",&x);
    while(x!=0)
    {
        insertNode(&tree , x);
        scanf("%d",&x);
    }
    display(tree);
}
