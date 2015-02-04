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
void display(struct node * t)
{
        struct node * n = newNode(0);
        n=t;
        while(n!=NULL)
        {
                printf("    %d",n->data);
                n=n->next;
        }
}
void deleteRight(struct node * l)
{
        struct node * prev = newNode(0);
        struct node * fast = newNode(0);
        struct node * cur = newNode(0);
        cur = l;
        if(l==NULL||l->next==NULL)
                return;
        if(l->data<l->next->data)
        {
                struct node * t = newNode(0);
                t = l;
                l=l->next;
                free(t);
        }
        prev = l;
        fast = l->next->next;
        cur = l->next;
        while(fast!=NULL)
        {
                if(cur->data<fast->data)
                {
                        struct node * t = newNode(0);
                        t=cur;
                        prev->next = fast;
                        cur = fast;
                        free(t);
                }
                prev = cur;
                cur = fast;
                fast = fast->next;
        }
}
int main()
{
        struct node * top = newNode(5);
        struct node * n1 = newNode(47);
        struct node * n2 = newNode(3);
        struct node * n3 = newNode(1);
        n2->next = n3;
        n1->next = n2;
        top->next = n1;
        display(top);
                printf("\n");
        deleteRight(top);
        printf("\n");
        display(top);
}

