
/**\brief program to find if the two LL are intersecting if yes then at what point  Author : @AbhilashAgarwal  */

#include<stdio.h>
struct node
{
        int data;
        struct node * next;
};
struct node * newNode(int e)
{
        struct node * N = (struct node *)malloc(sizeof(struct node));
        N->data = e;
        N->next = NULL;
        return N;
}
int sizeList(struct node * l)
{
        int c = 0;
        while(l!=NULL)
        {
                l=l->next;
                c++;
        }
        return c;
}
void intersectionPoint(struct node * L1, struct node * L2)
{
        int s1 = sizeList(L1);
        int s2 = sizeList(L2);
        int diff = s1-s2;
        int point = diff;
        while(diff--)
                L1=L1->next;
        while(L1!=L2&&L1!=NULL&&L2!=NULL)
        {
                L1=L1->next;
                L2=L2->next;
                point++;
        }
        if(L1==NULL||L2==NULL)
                {
                        printf("\nSorry no intersection");
                        return;
                }
        printf("\nYes the intersection point found in Point  :  %d   from the first (larger)  list",point);
}
void displayList(struct node * t)
{
        printf("\n");
        while(t!=NULL)
        {
                printf("%d     ->  ",t->data);
                t=t->next;
        }
}
int main()
{
        struct node * l1 = newNode(1);
        struct node * n1 = newNode(2);
        struct node * n2 = newNode(3);
        struct node * l2 = newNode(4);
        struct node * n3= newNode(5);
        struct node * n4= newNode(6);
        n3->next = n4;
        l2->next = n3;
        n2->next = l2;
        n1->next = n2;
        l1->next = n1;
        displayList(l1);
        displayList(l2);
        intersectionPoint(l1,l2);
}
