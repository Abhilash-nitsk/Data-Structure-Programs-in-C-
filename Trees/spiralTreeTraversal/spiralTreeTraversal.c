/**\brief Program to print the binary tree in spiral way  Author : @AbhilashAgarwal */\
#include<stdio.h>

struct node
{
        int data;
        struct node * left;
        struct node * right;
};
struct node * newNode(int d)
{
        struct node * n = (struct node *)malloc(sizeof(struct node));
        n->left = NULL;
        n->right = NULL;
        n->data = d;
        return n;
};
int height(struct node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
}
void printSpiral(struct node * tree , int level, int ltr)
{
        if(tree == NULL)
                return;
        if(level == 1)
                printf("   %d    ", tree->data);
        else
        {
                if(ltr == 1)
                {
                        printSpiral(tree->left , level-1, ltr);
                        printSpiral(tree->right , level-1, ltr);
                }
                else
                {
                        printSpiral(tree->right , level-1, ltr);
                        printSpiral(tree->left , level-1, ltr);
                }
        }
}
void spiralTraversal(struct node * tree)
{
        int ltr = 0;
    if(tree==NULL)
                return;
    else if (tree->left == NULL&& tree->right == NULL)
                printf("\n%d",tree->data);
    else
    {
            int i;
           int h = height(tree);
           for(i=0;i<h;i++)
           {
                   printSpiral(tree, i,ltr);
                   ltr = !ltr;
           }
    }
}
int main()
{
        struct node * tree = newNode(1);
        struct node *n1 = newNode(2);
        struct node *n2 = newNode(3);
        struct node *n3= newNode(4);
        struct node *n4= newNode(5);
        struct node *n5= newNode(6);
        struct node *n6 = newNode(7);
        n1->left = n3;
        n1->right = n4;
        n2->left = n5;
        n2->right = n6;
        tree->left = n1;
        tree->right = n2;
        spiralTraversal(tree);
}
