/**\brief Program to construct a max-heap given an inorder traversal  Author : @AbhilashAgarwal  */

#include<stdio.h>
#define MAX_SIZE 10

struct node
{
    int data;
    struct node * left;
    struct node * right;
};

struct node * newNode(int e)
{
    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->data = e;
    N->left = NULL;
    N->right = NULL;
    return N;
}
int maxNode(int arr[], int strt, int end)
{
    int i, max = arr[strt], maxind = strt;
    for(i = strt+1; i <= end; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            maxind = i;
        }
    }
    printf("\n%d      %d",maxind,arr[maxind]);
    return maxind;
}

struct node * specialTreeInorder(int inorder[],int start, int fin)
{
        if(start>fin)
                return NULL;
        int m = maxNode(inorder, start, fin);
        struct node * tree = newNode(inorder[m]);
        if(start == fin)
                return tree;
        tree->left =  specialTreeInorder(inorder, start, m-1);
        tree->right = specialTreeInorder(inorder, m+1, fin);
        return tree;

}
void printInorder (struct node* n)
{
    if (n == NULL)
        return;
    printInorder (n->left);
    printf("%d ", n->data);
    printInorder (n->right);
}
int main()
{
    int inorder[] = {5, 100, 40, 30, 28};
    int len = sizeof(inorder)/sizeof(inorder[0]);
    struct node *root = specialTreeInorder(inorder, 0, len-1);
    printf("\n Inorder traversal of the constructed tree is \n");
    printInorder(root);
    return 0;
}
