/** Program : @ReverseSingleLinkedListIteratively  Author : @AbhilashAgarwal */

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

void recReverseList(struct node ** List)
{

    struct node * first = newNode();
    struct node * rest= newNode();
    if(*List==NULL)
        return;
    first = *List;
    rest = (*List)->next;
    if(rest == NULL)
        return;
    recReverseList(&rest);
    first->next->next = first;
    first->next=NULL;
    *List = rest;
    //printf("\nEnd recReverseList procedure");
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

int main()
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
    recReverseList(&Top);
    displayList();
    return 0;
}

