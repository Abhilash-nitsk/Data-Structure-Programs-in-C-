/** \brief Program to check if a given tree is a subtree of the other given tree  Author : @AbhilashAgarwal */

#include<stdio.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
};
int identicalTree(struct node * mainTree, struct node * smallTree)
{
        if(smallTree==NULL&&mainTree==NULL)
                return 1;
        else if(smallTree==NULL|| mainTree == NULL)
                return 0;
        else
        {
                return((smallTree->data==mainTree->data)&&(identicalTree(mainTree->left, smallTree->left))&&(identicalTree(mainTree->right ,smallTree->right)));

        }
}
int checkSubTree(struct node * mainTree, struct node * smallTree)
{
        if(smallTree==NULL)
                return 1;
        if(mainTree == NULL)
                return 0;
        if(identicalTree(smallTree,mainTree))
                        return 1;
        return(checkSubTree(mainTree->left,smallTree)||checkSubTree(mainTree->right,smallTree));
}
struct node* newNode(int data)
{
    struct node* node =
        (struct node*)malloc(sizeof(struct node));
    node->data  = data;
    node->left  = NULL;
    node->right = NULL;
    return(node);
}

/* Driver program to test above function */
int main()
{
    /* Construct the following tree
              26
            /   \
          10     3
        /    \     \
      4      6      3
       \
        30
    */
    struct node *T        = newNode(26);
    T->right              = newNode(3);
    T->right->right       = newNode(3);
    T->left               = newNode(10);
    T->left->left         = newNode(4);
    T->left->left->right  = newNode(300);
    T->left->right        = newNode(6);

    /* Construct the following tree
          10
        /    \
      4      6
       \
        30
    */
    struct node *S    = newNode(10);
    S->right          = newNode(6);
    S->left           = newNode(4);
    S->left->right    = newNode(30);


    if (checkSubTree(T, S))
        printf("Tree S is subtree of tree T");
    else
        printf("Tree S is not a subtree of tree T");

    getchar();
    return 0;
}

