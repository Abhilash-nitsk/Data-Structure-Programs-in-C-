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

void reverseList()
{
    struct node * fast= newNode();
    struct node * mid = newNode();
    struct node * slow = newNode();
    if(Top->next!=NULL)
    {
        fast = Top->next;
        mid = Top;
        slow = NULL;
        while(1)
        {
             mid->next=slow;
            if(fast == NULL)
                break;
            slow = mid;
            mid = fast;
            fast = fast -> next;
        }
        Top = mid;
    }
    printf("\nThe List has been Reversed");
    displayList();
    printf("\n******************************");

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
    reverseList();
    displayList();
    return 0;
}
