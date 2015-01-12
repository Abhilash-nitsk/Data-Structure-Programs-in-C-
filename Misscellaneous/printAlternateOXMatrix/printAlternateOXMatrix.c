/**\brief Program to print a matrix of mxn filled with alternate layers of X and O  Author : @AbhilashAgarwal  */

#include<stdio.h>
int main()
{
        int n, m,k=1, l = 1,i,j;
        printf("\nEnter m  :  ");
        scanf("%d",&m);
        printf("\nEnter the n :  ");
        scanf("%d",&n);
        for(i=0;i<m;i++)
        {
                printf("\n");
                for(j=0;j<n;j++)
                {
                        if(i==0||i==m-1||j==0||j==n-1)
                                printf("X ");
                        else
                        {
                                if(k%2==1&&l%2==1)
                                        printf("X ");
                                else
                                        printf("O ");
                        }
                }
                k++;
        }
}
