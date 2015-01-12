/** \brief Program to solve the stock span problem in finance  Author : @AbhilashAgarwal  */

#include<stdio.h>

int main()
{
        int a[7], i,j,c[7] = {1,1,1,1,1,1,1};
        printf("\nEnter the stock prices for last 7 days of this week  : \n");
        for(i=0;i<7;i++)
                scanf("%d", &a[i]);
        for(i=0;i<7;i++)
        {
                for(j=i-1;j>0;j--)
                {
                        if(a[j]<a[i])
                                c[i]++;
                        else
                                break;
                }
        }
        printf("\nThe stock span for each day corresponding to the day is  :  \n");
        for(i=0;i<7;i++)
                printf("\nDay  :   %d\t Stack Span : %d", i, c[i]);
}
