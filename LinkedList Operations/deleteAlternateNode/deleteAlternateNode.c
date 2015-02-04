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
void display(struct node * l)
{
        while(l!=NULL)
        {
                printf("   %d  ",l->data);
                l=l->next;
        }
}
void deleteAlternate(struct node * l)
{
        int k = 0;
        struct node *t = newNode(0);
        struct node *save = newNode(0);
        t=l;
        while(t->next!=NULL&&t!=NULL)
        {
                if(k%2==0)
                {
                        save = t->next->next;
                        free(t->next);
                        t->next = save;
                }
                t=t->next;
                k++;
        }
}
int main()
{
        struct node * l = newNode(1);
        struct node * n1 = newNode(2);
        struct node * n2 = newNode(3);
        struct node * n3 = newNode(4);
        n2->next = n3;
        n1->next = n2;
        l->next = n1;
        display(l);
        deleteAlternate(l);
        display(l);
}
