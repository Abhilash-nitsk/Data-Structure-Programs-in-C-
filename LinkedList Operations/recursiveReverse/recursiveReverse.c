#include<stdio.h>

struct node
{
        int data;
        struct node * next;
};
struct node * newNode(int d)
{
        struct node *  list = (struct node *)malloc(sizeof(struct node));
         list->data = d;
         list->next = NULL;
         return list;
}
void displayList(struct node * l)
{
        while(l!=NULL)
                {printf("     %d ->", l->data);l=l->next;}
}
void reverseRec(struct node* head)
{
  // Base case
  if(head == NULL)
    return;

  // print the list after head node
  reverseRec(head->next);

  // After everything else is printed, print head
  printf("%d  ", head->data);
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
        displayList(top);
       printf("\n\n");
       reverseRec(top);
}
