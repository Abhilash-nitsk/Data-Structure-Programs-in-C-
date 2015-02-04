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
struct node * kthReverse(struct node * l, int k)
{
        struct node * t = newNode(0);
        struct node * prev = newNode(0);
        struct node * cur = newNode(0);
        prev = NULL;
        t=l;
        cur = t;
        int c=0;
        while(t!=NULL&&c<k)
        {
                cur->next = prev;
                cur = t->next;
                prev = cur;
                t=t->next;
                c++;
        }
        if(t->next!=NULL)
        {
                t->next=kthReverse(t->next, k);
        }
        return prev;

}
int main()
{
        int k = 3;
        struct node * top = newNode(1);
        struct node * n1 = newNode(2);
        struct node * n2 = newNode(2);
        struct node * n3 = newNode(4);
        struct node * n4 = newNode(5);
        struct node * n5 = newNode(6);
        struct node * n6 = newNode(7);
        n5->next = n6;
        n4->next = n5;
        n3->next = n4;
        n2->next = n3;
        n1->next = n2;
        top->next = n1;
        display(top);
       top= kthReverse(top,k);
        printf("\n");
        display(top);
}
