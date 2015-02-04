#include<stdio.h>
struct node
{
        int data;
        struct node * next;
};

struct node * newNode(int d)
{
        struct node * n = (struct node *)malloc(sizeof(struct node));
        n->data = d;
        n->next = NULL;
        return n;
}
void display(struct node * n)
{
        while(n!=NULL)
        {
                printf("    %d",n->data);
                n=n->next;
        }
}
void pairwiseSwap(struct node * no)
{
        int d;
        struct node *n = newNode(1);
        n = no;
        if(n==NULL)
                return;
        while(n!=NULL&&n->next!=NULL)
        {
                d = n->data;
                n->data = n->next->data;
                n->next->data = d;
                n=n->next->next;
        }
}
int main()
{
        struct node * top = newNode(1);
        struct node * n1 = newNode(2);
        struct node * n2 = newNode(3);
        struct node * n3 = newNode(4);
        n2->next = n3;
        n1->next = n2;
        top->next = n1;
        display(top);
        pairwiseSwap(top);
        printf("\n");
        display(top);
}
