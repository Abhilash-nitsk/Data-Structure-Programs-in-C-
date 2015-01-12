/** Program: @BubbleSort  author: @AbhilashAgarwal  */

#include<stdio.h>
int A[10];

void bubbleSort()
{
    int i,j;
    for(i=9;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(A[j]>A[j+1])
            {
                    int temp;
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i;
    printf("\nEnter the arrray to Sort:  \n");
    for(i=0;i<10;i++)
        scanf("%d",&A[i]);
    bubbleSort();
    printf("\nThe array has been sorted: ");
    for(i=0;i<10;i++)
        printf("\n%d",A[i]);
}
