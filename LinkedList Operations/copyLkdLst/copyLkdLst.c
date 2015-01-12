/** \brief  Copy a Linked list which has two pointer one normal as single lkdlist other arbit pointer pointing to any  arbitrary element in the linked list             Author  :  @AbhilashAgarwal   */

#include<stdio.h>

struct node
{
        int data;
        struct node * next;
        struct node * arbit;
};
struct node * newNode(int d)
{
        //struct node * n = NULL;
        struct node * n = (struct node *)malloc(sizeof(struct node ));
        n->data = d;
        n->next = NULL;
        n->arbit = NULL;
        return n;
}
void display(struct node * L)
{
        struct node * runner = (struct node *)malloc(sizeof(struct node ));
        runner = L;
        while(runner!=NULL)
        {
                printf("    %d->  ",runner->data);
                runner=runner->next;
        }

}
struct node * copyList(struct node * L)
{
        struct node * runner = (struct node *)malloc(sizeof(struct node ));
        int x;
        runner = L;
        while(runner!=NULL)
        {
                x = runner->data;
                struct node * temp = newNode(x);
                temp->next = runner->next;
                temp->arbit = runner->arbit;
                runner->next = temp;
                runner = temp->next;
        }
}

int main()
{
        struct node * L = (struct node *)malloc(sizeof(struct node ));
        struct node * copyL = (struct node *)malloc(sizeof(struct node ));
        L->data = 2;
        struct node * node1 = newNode(3);
        struct node * node2 = newNode(4);
        L->next = node1;
        L->arbit = node2;
        node1->next = node2;
        node1->arbit = node2;
        node2->next = NULL;
        node2->arbit = L;
        display(L);
        copyL = copyList(L);
        display(L);
}
