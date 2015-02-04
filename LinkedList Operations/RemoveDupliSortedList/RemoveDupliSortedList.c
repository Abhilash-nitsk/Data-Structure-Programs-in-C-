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
void removeDupli(struct node * l)
{
        struct node * cur = newNode(1);
        struct node * save = newNode(1);
        cur = l;
        while(cur->next!=NULL)
        {
                if(cur->data == cur->next->data)
                {
                        save = cur->next->next;
                        free(cur->next);
                        cur->next = save;
                }
                else
                        cur=cur->next;
        }
}
int main()
{
        struct node * top = newNode(1);
        struct node * n1 = newNode(2);
        struct node * n2 = newNode(2);
        struct node * n3 = newNode(4);
        n2->next = n3;
        n1->next = n2;
        top->next = n1;
        display(top);
        removeDupli(top);
        printf("\n");
        display(top);
}
