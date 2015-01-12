/** Program : to @RemoveDuplicatesInLkdList      Author : @AbhilashAgarwal  */

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
/*void deleteNode(struct node * L, struct node * current)
{
    struct node * runner= newNode();
    runner = Top;
    while(runner->next!=current)
        runner=runner->next;
    runner->next=current->next;;
}
void removeDuplicateNode(struct node * L)
{
    struct node * runner= newNode();
    if(L==NULL)
        return;
    runner = L;
    while(runner!=NULL)
    {
        if(L->data==runner->data)
            deleteNode(L,runner);
    }

}*/
void removeDuplicateNode()
{
    struct node * runner = newNode();
    struct node * current = newNode();
    current = Top;
    if(Top==NULL)
        return;
    while(current!=NULL)
    {
        runner = current;
        while(runner->next!=NULL)
        {
            if(current->data==runner->next->data)
            {
                runner->next = runner->next->next;
                free runner->next;
            }
            else
            runner=runner->next;
        }
        current=current->next;
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
    removeDuplicateNode();
    displayList();
}

