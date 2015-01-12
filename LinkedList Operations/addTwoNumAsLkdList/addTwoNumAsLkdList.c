/** Program: \brief add two numbers represented as lkdlist   Author : @AbhilashAgarwal  */
#include<stdio.h>

struct node
{
    int data;
    struct node * next;
};

struct node * newNode()
{
    struct node * Temp;
    Temp = ( struct node *)malloc(sizeof(struct node));
    Temp->next=NULL;
    Temp->data=0;
    return Temp;
}
void insertNode(struct node ** list , int x)
{
    struct node * temp = newNode();
    temp->data=x;
    if(temp==NULL)
    {
            printf("\nFailed abort");
            return;
    }
    if(*list==NULL)
    {

       *list=temp;
        return;
    }
    temp->next =*list;
    *list=temp;
    return;
}
void displayList(struct node * list)
{
    printf("\n\t\tDISPLAY THE LIST\n\n\t");
    struct node * n = newNode();
    n = list;
    while(n!=NULL)
    {
        printf("%d    ->  ", n->data);
        n=n->next;
    }
}
struct node * addNumAsList(struct node * A, struct node * B)
{
    //struct node * result=NULL;
    struct node * temp;
    temp = A;
    int carry=0, buff, sum;
    if(A==NULL)
        return B;
    if(B==NULL)
        return A;
    while(A!=NULL&&B!=NULL)
    {
        sum = (A->data) + (B->data)+carry;
        carry = sum/10;
        buff = sum%10;
        A->data = buff;
        A=A->next;
        B=B->next;
    }

    /*if(A==NULL)
    {
        printf("\n*************************");
        //displayList(B);
        printf("\n*************************");
    }*/
   /* if(B==NULL)
    {
        while(carry==1)
        {
            sum = A->data+1;
            if(sum>10)
            {
                A->data = sum%10;
                carry = 1;
                A=A->data;
            }
            else
                carry = 0;
        }
    }*/
    displayList(temp);
    return temp;
}

int main()
{
    int x;
    struct node * ListA = NULL;
    struct node * ListB = NULL;
    struct node * result = NULL;
    printf("\nEnter the elements to insert in List1 and 0 to trerminate   :  \n");
   scanf("%d",&x);
   while (x!=0)
    {
        insertNode(&ListA , x);
        scanf("%d",&x);
    }
    printf("\nEnter the elements to insert in List2 and 0 to trerminate   :  \n");
   scanf("%d",&x);
   while (x!=0)
    {
        insertNode(&ListB , x);
        scanf("%d",&x);
    }
    displayList(ListA);
    displayList(ListB);
    result = addNumAsList(ListA , ListB);
    displayList(result);
}
