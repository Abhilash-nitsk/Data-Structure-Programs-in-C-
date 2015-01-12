/** \brief Program for determining other utilities in Binary Tree   Author : @AbhilashAgarwal  */
 #include<stdio.h>
 struct node
 {
         int data;
         struct node * left;
         struct node * right;
 };
struct node * newNode()
{
    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->left = NULL;
    N->right = NULL;
    return N;
}
void display(struct node * tree)
{
        if(tree == NULL)
            return;
        display(tree->left);
        printf("\n%d",tree->data);
        display(tree->right);
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
/*---Insert similar to BST
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
*/
/*int countLeaf(struct node * tree)
{
        if(tree==NULL)
                return 0;
        else if(tree->left==NULL && tree->right==NULL)
                return 1;
        else
                return (countLeaf(tree->left)+countLeaf(tree->right));
}
int printAncester(struct node * tree, int child)
{
        if(tree==NULL)
                return 0;
        if(tree->data == child)
                return 1;
        if(printAncester(tree->left, child)||printAncester(tree->right , child))
        {
                printf("    %d   ",tree->data);
                return 1;
        }
}
void printKthLevelElements(struct node * tree,int k)
{
        if(tree==NULL)
                return;
        if(k==0)
        {
                printf("   %d    ", tree->data);
                return;
        }
        else
        {
                printKthLevelElements(tree->left , k-1);
                printKthLevelElements(tree->right , k-1);
        }
}
void printArray(int path[], int len)
{
        int i;
        for(i=0;i<len;i++)
                printf("     %d",path[i]);
        printf("\n");
}
void printPaths(struct node * tree)
{
        int pathArray[10];
        utilPaths(tree ,pathArray,0 );
}
void utilPaths(struct node * tree,int * path, int pos)
{
        if(tree==NULL)
                return;
        path[pos] =tree->data;
        pos++;
        if(tree->left==NULL && tree->right ==NULL)
                printArray(path,pos);
        else
        {
                utilPaths(tree->left ,path,  pos);
                utilPaths(tree->right , path ,pos);
        }
}
*/
/*int isSumTree(struct node* tree)
{
    if(tree==NULL)
        return 1;
    if(tree->data!=(tree->left->data)+(tree->right->data))
        return 0;
    return(isSumTree(tree->left) && isSumTree(tree->right));
}
*/
/*int sizeTree(struct node * tree)
{
        if(tree==NULL)
                return 0;
        else
                return(sizeTree(tree->left)+sizeTree(tree->right)+1);
}
int maxDepth(struct node * tree)
{
        if(tree==NULL) return 0 ;
        if(maxDepth(tree->left)>maxDepth(tree->right))
                return(maxDepth(tree->left) + 1);
        else
        return(maxDepth(tree->right) + 1);
}*/
/*
int pathSum(struct node * tree,int sum)
{
        if(tree==NULL)
        {
                if(sum==0)
                        return 1;
                else
                        return 0;
        }
        int subSum = sum-tree->data;
        return(pathSum(tree->left , subSum)||pathSum(tree->right , subSum));
}*/
/*void printArray(int A[] , int s)
{
        int  i;
        printf("\n");
        for(i=0;i<s;i++)
                printf("    %d", A[i]);
}
void printPath(struct node * tree)
{
        int A[10];
        printPathUtil(tree , A, 0);
}
void printPathUtil(struct node * tree , int A[] , int pos)
{
        if(tree==NULL) return;
        A[pos]= tree->data;
                pos++;
        if(tree->left==NULL&&tree->right==NULL)
                printArray(A, pos);
        else
        {
                printPathUtil(tree->left , A, pos);
                printPathUtil(tree->right , A, pos);
        }
}*/
/*void mirror(struct node * tree)
{
        if(tree==NULL)
                return;
        mirror(tree->left);
        mirror(tree->right);
        struct node * temp = tree->left;
        tree->left = tree->right;
        tree->right = temp;
}*/
/*void doubleTree(struct node * tree)
{
        if(tree==NULL) return;
        doubleTree(tree->left);
        doubleTree(tree->right);
        struct node * temp;
        struct node * N = newNode();
        N->data = tree->data;
        temp = tree->left;
        tree->left = N;
        tree->left->left= temp;
}*/
int sameTree(struct node * T1 , struct node *T2)
{
        if(T1==NULL&&T2==NULL)
                return 1;
        else if(T1!=NULL &&T2!=NULL)
                        return((T1->data == T2->data)&&sameTree(T1->left, T2->left)&&(T1->right, T2->right));
        else
                return 0;
}

int main()
{
    int x;
    struct node *tree = newNode();
    /*printf("\nEnter the elments and 0 to quit\n");
    printf("\nEnter the root");
    scanf("%d",&(tree->data));
    while(1)
    {
       scanf("%d" ,&x);
       if(x==0)
        break;
       insertNode(&tree , x);
    }
    display(tree);*/
    /*printf("\ntree has been doubled  \n");
    doubleTree(tree);
    display(tree);*/
    struct node * tree2 = newNode();
     struct node *node1 = newNode();
    struct node *node2 = newNode();
    struct node *node3 = newNode();
    struct node *node4 = newNode();
     tree->data = 10;
     tree2->data = 10;
    node1->data = 5;
    node2->data = 15;
    node3->data = 5;
    node4->data = 15;
    tree->left = node1;
    tree->right = node2;
    tree2->left = node3;
    tree2->right = node4;
    display(tree);
    printf("\n");
    display(tree2);
    int r = sameTree(tree, tree2);
    if(r==1)
        printf("\nSucessful");
    else
        printf("\nFailed");
    display(tree);
   // mirror(tree);
    /*int Depth;
    Depth = maxDepth(tree);
    printf("\nThe max Depth the Given tree is  :  %d" , Depth-1);*/
   /* int sizeT = sizeTree(tree);
    printf("\nThe size of the tree is  :  %d",sizeT);*/
  /* int r = isSumTree(tree);
    if(r==0)
        printf("\nSorry dude not a sum tree");
    else
        printf("\nSucess Given tree is the Sum tree");*/
     // int child = 8;
     //printf("\n\n");
     //x = printAncester(tree, child);
    // int path[10] ;
    //printPath(tree);
    /*int leaf = countLeaf(tree);8
    printf("\nThe total numbers of leafs are : %d", leaf);*/
    /*int k = 3;
    printf("\n\n");
    printKthLevelElements(tree , k-1);*/
    return;
}
