/**\brief Program to check if the given tree is a subtree of other given tree or not   Author : @AbhilashAgarwal */

#include<stdio.h>

struct node
{
        int data;
        struct node * left;
        struct node * right;
};
struct node * newNode(int d)
{
        struct node * n = (struct node *)malloc(sizeof(struct node ));
        n->data = d;
        n->left = NULL;
        n->right = NULL;
        return n;
};
int checkSubtree(struct node * t1, struct node * t2)
{
        if(t1==NULL)
}
int main()
{

}
