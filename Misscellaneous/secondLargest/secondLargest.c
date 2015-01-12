/** \brief Program to find the largest and second largest number in given array   Author : @AbhilashAgarwal */

#include<stdio.h>

int main()
{
        int a[10], i, fm, sm;
        printf("\nEnter the 10 numbers  :  ");
        for(i=0;i<10;i++)
                scanf("%d", &a[i]);
        fm = sm = a[0];
        for(i=1;i<10;i++)
        {
                if(fm<a[i])
                {
                        sm = fm;
                        fm = a[i];
                }
                else if(sm<a[i])
                        sm = a[i];
                else continue;
        }
        printf("\nThe Largest num is  : %d  \nsecond largrest is   :  %d",fm, sm);
}
