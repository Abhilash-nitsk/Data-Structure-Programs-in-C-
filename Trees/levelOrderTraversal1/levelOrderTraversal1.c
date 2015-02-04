/**\brief Program to perform level order Traversal in a tree     Author : @AbhilashAgarwal  */

#include<stdio.h>

struct node
{
        int data;
        struct node * left;
        struct node * right;
};

struct node * newNode(int d)
{
        struct node * temp = (struct node *)malloc(sizeof(struct node ));
        temp->data = d;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
}

void printGivenLevel(struct node * tree , int level)
{
        if(level == 0)
            {
                    printf( "   %d   ",tree->data);
                    return;
            }

        printGivenLevel(tree->left , level-1);
        printGivenLevel(tree->right , level-1);
        return ;
}
int height(struct node* tree)
{
   if (tree==NULL)
       return 0;
   else
   {
     /* compute the height of each subtree */
     int lheight = height(tree->left);
     int rheight = height(tree->right);

     /* use the larger one */
     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
}

void levelOrderTraversal(struct node * tree)
{
        int i;
        int h = height(tree);
        for(i=0;i<h;i++)
        {
                printGivenLevel(tree , i);
        }
}
int main()
{
        struct node * tree = newNode(1);
        struct node * n1 = newNode(2);
        struct node * n2 = newNode(3);
        struct node * n3 = newNode(4);
        struct node * n4 = newNode(5);
        n1->left = n3;
        n1->right = n4;
        tree->left = n1;
        tree->right = n2;
        levelOrderTraversal(tree);
}
