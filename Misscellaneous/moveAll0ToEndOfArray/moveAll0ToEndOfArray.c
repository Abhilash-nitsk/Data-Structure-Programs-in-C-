/**\brief Program to move all the zeros that are not in end to the end of the array  Author : @AbhilashAgarwal */

#include<stdio.h>

void swapN(int * a, int *b)
{
        int t = *a;
        *a = *b;
        *b = t;
}
void moveZeros(int A[], int s)
{
        int i=0,j=s-1;
        while(i<j)
        {
                if(A[i]!=0)
                        i++;
                if(A[j]==0)
                        j--;
                if(A[i]==0&&A[j]!=0)
                  {
                          swapN(&A[i],&A[j]);
                          i++;
                          j--;
                  }
        }
}

int main()
{
        int A[10];
        int i;
        printf("\nEnter All the 10 elements  : \n");
        for(i=0;i<10;i++)
                scanf("%d",&A[i]);
        moveZeros(A,10);
        printf("\nThe 0 elements are moved :\n");
        for(i=0;i<10;i++)
               printf("%d\t",A[i]);
}
