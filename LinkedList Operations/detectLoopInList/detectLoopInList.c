/** Program: @DetectLoopInLkdList       Author : @AbhilashAgarwal   */

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
int detectLoopList()
{

    if(Top==NULL||Top->next==NULL)
        return 0 ;
    else if(Top->next->next == NULL)
    {
        if(Top->next==Top->next)
            return 1;
        else
            return 0;
    }
    struct node * fast = newNode();
    struct node *slow = newNode();
    slow = Top;
    fast = Top->next;
    while(slow!=NULL&&fast!=NULL)
    {
        if(slow==fast)
            return 1;
        slow=slow->next;
        fast=(fast->next->next);//: fast->next;
    }
    return 0;
}
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
    Bot->next=Top->next;
    if(detectLoopList() == 1)
        printf("\nThe loop exists in the Linked List : ");
    else
        printf("\nNo Loop exists : ");
}

