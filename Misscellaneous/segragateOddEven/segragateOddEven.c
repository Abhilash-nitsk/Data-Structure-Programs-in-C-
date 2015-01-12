/** \brief Program to put all the even numbers in the list first then odd in end  Author : @AbhilashAgarwal */

#include<stdio.h>
void swap(int * a, int * b)
{
        int t;
        t = *a;
        (*a) = (*b);
        (*b) = t;
}
void segragate(int* a)
{
        int i, left, right;
        left = 0;
        right = 9;
        while(left<right)
        {
              while(a[left]%2==0&&left<right)
                        left++;
              while(a[right]%2==1&&left<right)
                        right--;
                if(left<right)
                {
                        swap(&a[left],&a[right]);
                        left++;
                        right--;
                }
        }
}
int main()
{
        int a[10], i;
        printf("\nEnter the list : \n");
        for(i=0;i<10;i++)
                scanf("%d",&a[i]);
        segragate(&a);
        for(i=0;i<10;i++)
                printf("\t%d",a[i]);
}
