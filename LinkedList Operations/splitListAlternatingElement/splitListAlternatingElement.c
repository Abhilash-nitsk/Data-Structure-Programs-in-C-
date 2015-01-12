/** \brief Program to split a given lkd lst with alternate elements of original list    Author : @AbhilashAgarwal  */
#include<stdio.h>

struct node
{
    int data;
    struct node * next;
};

void displayList(struct node * L)
{
    printf("\n\t\tDISPLAY THE LIST\n\n\t");
    struct node * n = (struct node *)malloc(sizeof(struct node));
    n=L;
    if(L==NULL)
        printf("\nEmpty List");
    while(n!=NULL)
    {
        printf("%d    ->  ", n->data);
        n=n->next;
    }
}

void insertBot(struct node ** Top, int x)
{
    struct node * n = (struct node * ) malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("\nError in memory allocation");
        return;
    }
    n->data=x;
    n->next = NULL;
    if((*Top)==NULL)
    {
        printf("\nIts the first Element\n");
        (*Top)=n;
        return;
    }
    n->next =(*Top);
    (*Top) = n;
}

void splitList(struct node *p, struct node ** childA, struct node ** childB)
{
        struct node * A  = (struct node *) malloc (sizeof(struct node ));
        struct node * B = (struct node *) malloc (sizeof(struct node ));
        int k = 0;
        if(k==0)
        {
                A = p;
                (*childA) = A;
                p=p->next;
                k++;
        }
         if(k==1)
        {
                B= p;
                (*childB) = B;
                p=p->next;
                k++;
        }
        while(p!=NULL)
        {
                if(k%2==0)
                {
                       A->next = p;
                        A=A->next;
                        p=p->next;
                        k++;
                }
                else
                {
                         B->next = p;
                        B=B->next;
                        p=p->next;
                        k++;
                }
        }
       //displayList((*childA));
}
int main()
{
        struct node * parent  = (struct node *) malloc (sizeof(struct node ));
        struct node * even  = (struct node *) malloc (sizeof(struct node ));
        struct node * odd  = (struct node *) malloc (sizeof(struct node ));
        parent = NULL;
        int x;
        printf("\nEnter the Elements for the lkd List and 0 to quit entering: \n");
        scanf("%d", &x);
        while(x!=0)
        {
                insertBot(&parent , x);
                scanf("%d", &x);
        }
        displayList(parent);
        splitList(parent , &even , &odd);
        displayList(even);
        displayList(odd);
}
