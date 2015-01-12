/** Program: @SelectionSort  Author : @AbhilashAgarwal */

#include<stdio.h>
int A[10];
void selectionSort()
{
    int i,j,pos;
    for(i=9;i>=0;i--)
    {
        pos=i;
        for(j=0;j<i;j++)
        {
            if(A[j]>A[pos])
                pos=j;
        }
        int temp=A[pos];
        A[pos]=A[i];
        A[i]=temp;
    }
}
int main()
{
    int i;
    printf("\nEnter The array of 10 numb. to Sort after beep\a\n");
    for(i=0;i<10;i++)
        scanf("%d",&A[i]);
    selectionSort();
    printf("\nThe Array has been Sorted : \n");
    for(i=0;i<10;i++)
        printf("\n%d",A[i]);
}
