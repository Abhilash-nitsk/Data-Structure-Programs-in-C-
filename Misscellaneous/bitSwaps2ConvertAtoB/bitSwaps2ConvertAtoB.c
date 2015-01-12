/** \brief Program to count number of required bit swaps to convert a number A to B    Author : @AbhilashAgarwal */

#include<stdio.h>

void countSwaps(int a, int b)
{
        int c = 0;
        while(a^b!=0)
        {
                c++;
        }
        printf("\nNumber of swaps are : %d ", c);
}
int main()
{
        countSwaps(24, 56);
}
