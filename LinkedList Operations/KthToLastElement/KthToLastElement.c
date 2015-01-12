/** Program: \brief find Kth node from last   Author : @AbhilashAgarwal  */
#include<stdio.h>

struct node
{
    int data;
    struct node * next;
};

struct node * Top;
struct node * newNode()
{
    struct node * Temp;
    Temp = ( struct node *)malloc(sizeof(struct node));
    Temp->next=NULL;
    Temp->data=0;
    return Temp;
}
void insertNode(int x)
{
    struct node * temp = newNode();
    temp->data=x;
    if(temp==NULL)
    {
            printf("\nFailed abort");
            return;
    }
    if(Top==NULL)
    {
        Top=temp;
        return;
    }
    temp->next = Top;
    Top=temp;
    return;
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
int KthToLastElement(int k)
{
    struct node * current;
    struct node * runner ;
    current = Top;
    runner = Top;
    while(k-->0)
        runner=runner->next;
    while(runner!=NULL)
    {
        runner=runner->next;
        current = current->next;
    }
    return current->data;
}
int main()
{
    int x;
    printf("\nEnter the elements to insert in List and 0 to trerminate   :  \n");
   scanf("%d",&x);
   while (x!=0)
    {
        insertNode(x);
        scanf("%d",&x);
    }
    displayList();
    int pos,kthEle;
    printf("\nEnter the Kth Position");
    scanf("%d",&pos);
    kthEle = KthToLastElement(pos);
    printf("\nThe Kth element is  :  %d",kthEle );
}
