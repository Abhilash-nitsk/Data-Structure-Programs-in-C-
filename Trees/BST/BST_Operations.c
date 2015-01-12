/** Program \brief Basic operations working in BST     Author : @AbhilashAgarwal */

#include<stdio.h>

struct node
{
    int data;
    struct node * left;
    struct node * right;
};

struct node * newNode()    // Function to Create a new Node in the Tree
{
        struct node * N  = (struct node *)malloc(sizeof(struct node ));
        N->data = 0;
        N->left = NULL;
        N->right = NULL;
        return N;
}

void insertNode(struct node ** tree , int x)
{
    struct node * t =newNode();
    t->data = x;
    if((*tree) == NULL)
        (*tree) = t;
    else
    {
            if(x>((*tree)->data))
                insertNode(&((*tree)->right), x);
            else
                insertNode(&((*tree)->left), x);
    }
}
int searchNode(struct node * tree , int ele)
{
    static int c = 0;
    if(tree==NULL)
        return 0;
    if(tree->data==ele)
        return c;
   else if(tree->data<ele)
        searchNode(tree->right, ele);
    else
        searchNode(tree->left, ele);
    c++;
}
void displayTree(struct node * tree)
{
    if(tree==NULL)
        return;
    displayTree(tree->left);
    printf(" \n %d",tree->data);
    displayTree(tree->right);
}
int minNode(struct node * tree)
{
    if(tree == NULL)
        return 0;
    if(tree->left == NULL)
        return tree->data;
    minNode(tree->left);
}
//*---------------------------------------------------------Incorrenct Function----------------------------------------------------
struct node * inOrderSuccessor(struct node *root, struct node *n)
{
    // step 1 of the above algorithm
    if( n->right != NULL )
        return minNode(n->right);

    struct node *succ = NULL;

    // Start from root and search for successor down the tree
    while (root != NULL)
    {
        if (n->data < root->data)
        {
            succ = root;
            root = root->left;
        }
        else if (n->data > root->data)
            root = root->right;
        else
           break;
    }

    return succ;
}
void deleteNode(struct node ** tree , int m)
{
            struct node * current =newNode();
            struct node * temp =newNode();
            //current = (*tree);
            if((*tree)==NULL)
                return;
            if((*tree)->data==m)
            {
                if((*tree)->left==NULL&&(*tree)->right==NULL)
                {
                        temp = *tree;
                        *tree = NULL;
                        free(temp);
                }
                else if((*tree)->left==NULL)
                {
                        temp = *tree;
                        *tree = (*tree)->right;
                        free(temp);

                }
                else if((*tree)->right==NULL)
                {
                        temp = *tree;
                        *tree = (*tree)->left;
                }
                else
                {
                        int succ = minNode((*tree)->right);
                        deleteNode(tree, succ);
                        (*tree)->data = succ;
                }
            }
            else
            {
                    if((*tree)->data>m)
                    {
                            deleteNode(&(*tree)->left, m);
                    }
                    else
                        deleteNode(&(*tree)->right, m);
            }
}
int main()
{
    int x;
    struct node * tree =newNode();
    printf("\nEnter the node for the BST and 0 to stop  :  \n");
    scanf("%d",&x);
    while(x!=0)
    {
        insertNode(&tree , x);
        scanf("%d",&x);
    }
    printf("\n\nThe Tree Formed IS \n");
    displayTree(tree);
    /*struct node *succ = newNode();
    succ = tree->right->left;
    succ =inOrderSuccessor(tree , succ);
    printf("\nThe successor of the given child  :  %d  : is  :   %d",tree->right->left->data , succ->data);*/
    /*printf("\nEnter the element to delete :   ");
    scanf("%d",&num);
    deleteNode(&tree , num);
    displayTree(tree);*/
   /* int child;
    printf("\nEnter the number whose parent is to be found : ");
    scanf("%d",&child);
    findParent(tree,child);
    printf("\nThe parent of the given child is   :  %d", P->data);*/
    /*int num;
    printf("\nEnter the number to search in the tree : ");
    scanf("%d" , &num);
    int r = searchNode(tree , num);
    if(r==0)
        printf("\nSorry Number not found in any Location n the tree " );
    else
        printf("\nSearch Successfull  found at level : %d"  , r);
    int minN = minNode(tree);
    printf("\nThe minimum node is :  %d",minN);*/
}
