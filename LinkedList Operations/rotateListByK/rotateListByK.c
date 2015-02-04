#include<stdio.h>
#include<stdlib.h>
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

struct node *rotateList(struct node * l, int k)
{
        struct node * t = newNode(0);
        struct node * fast = newNode(0);
        struct node * slow = newNode(0);
        int s = k,c=0;
        t = l;
        slow = l;
        while(t!=NULL||c<k)
               {
                     t=t->next;
                     c++;
               }
        if(t->next==NULL)
                return slow;
        fast = t->next;
        t->next=NULL;
        while(fast->next!=NULL)
                fast=fast->next;
        fast->next=slow;
        return fast;
}

int main()
{
        struct node * top = newNode(10);
        struct node * n1 = newNode(20);
        struct node * n2 = newNode(30);
        struct node * n3 = newNode(40);
        struct node * n4 = newNode(50);
        struct node * n5 = newNode(60);
        struct node * L = newNode(60);

        n4->next = n5;
        n3->next = n4;
        n2->next = n3;
        n1->next = n2;
        top->next = n1;
        int  k =4;
        display(top);
        L = rotateList(top,k);
        printf("\n");
        display(top);
}

