/** \brief : Basic operations in single @LinkedList  Author : @AbhilashAgarwal */

#include<stdio.h>

struct node
{
    int data;
    struct node * next;
};

struct node * Top = NULL , * Bot = NULL;

struct node * newNode()
{
    struct node * N =(struct node * ) malloc(sizeof(struct node ));
    N->data = 0;
    N->next=NULL;
    return N;
}
void swapTwoNodes(int p1, int p2)
{
       int v1, v2, t1,t2;
       struct node * x= newNode();
       x=Top;
       struct node * y= newNode();
       y=Top;
       t1=p1;
       t2=p2;
        while(--t1>0)
            x=x->next;
        while(--t2>0)
            y=y->next;
        v1=x->data;
        v2 = y->data;
        x->data = v2;
        y->data = v1;
}
/*void sortList()
{
    struct node * x= newNode();
    struct node * y= newNode();
    x=Top;
    int pos1=-1, m, q, pos2;
    while(x->next!=NULL)
    {
        m= x->data;
        pos1++;
        y=x->next;
        for(q=0;y!=NULL;q++)
        {
            if(y->data < m)
            {
                pos2 = q+pos1+1;
            }
        y=y->next;
        }
        swapTwoNodes(pos1, pos2);
        x=x->next;
    }
}*/

int minNode(struct node * N)
{
    //printf("\nInside MinNode procedure");
    struct node * x= newNode();
    x=N;
    int minPos = 0;
    int m = N->data;
    int c=-1;
    while(x!=0)
    {
        //printf("\ninside the loop C = %d", c);
        c++;
        if(x->data<m)
        {
            m=x->data;
            minPos=c;
        }
        x=x->next;
    }
    printf("\nThe minimum element is : %d  at position   %d", m,minPos);
    return minPos;
}

void sortList()
{
    struct node * x= newNode();
    x=Top;
    int minPos, c=0;
    while(x->next!=NULL)
    {
        minPos = minNode(x);
        printf("\nmin pos  %d   ", minPos);
        x=x->next;
        swapTwoNodes(c,minPos);
        c++;
    }
printf("\nThe list has been sorted");
}

void insertBot(int x)
{
    struct node * n = newNode();
    if(n==NULL)
    {
        printf("\nError in memory allocation");
        return;
    }
    n->data=x;
    if(Bot==NULL)
    {
        printf("\nIts the first Element\n");
        Top=n;
        Bot=Top;
        return;
    }
   Bot->next=n;
    Bot=n;
}

void displayList()
{
    printf("\n\t\tDISPLAY THE LIST\n\n\t");
    struct node * n = newNode();
    n=Top;
    while(n!=NULL)
    {
        printf("%d    ->  ", n->data);
        n=n->next;
    }
}
/*
void append(struct node * A , struct node * B)
{
    struct node * x= newNode();
    x=A;
    while(x->next!=NULL)
        x=x->next;
    x->next = B;
}

void insertTop(int x)
{
    struct node * n = newNode();
    n->data=x;
    if(n==NULL)
    {
        printf("\nError in memory allocation");
        return;
    }
    if(Top==NULL)
    {
        printf("\nIts the first Element\n");
        n->next=Top;
        Top=n;
        Bot=Top;
        return;
    }
    n->next=Top;
    Top=n;
}
int countNodes()
{
    struct node * n = newNode();
    n=Top;
    int c=0;
    while(n!=NULL)
    {
        n=n->next;
        c++;
    }
    return c;
}
int getNth(int n)
{
    struct node * x= newNode();
    x=Top;
    while(--n>0)
      x=x->next;
    return x->data;
}
*/
main()
{
    int x;
    printf("\nEnter the elements to insert in List and 0 to trerminate   :  \n");
   scanf("%d",&x);
   while (x!=0)
    {
        insertBot(x);
        scanf("%d",&x);
    }
    displayList();

   /* int c = countNodes();
    printf("\n The no of nodes are : %d",c);
    int n = getNth(2);
     printf("\n The nth value in nth node is  : %d",n);*/
      //swapTwoNodes(2,3);
      //sortList();
      //int minPos  = minNode();
     // printf("\nThe min is at position  : %d", minPos);
     sortList();
     displayList();
}
