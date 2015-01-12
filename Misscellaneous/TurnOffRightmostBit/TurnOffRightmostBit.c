/** \brief Program to turn off the rightmost set bit   Author : @AbhilashAgarwal  */

#include<stdio.h>

int turnOffRightSetBit(int num)
{
        return (num&(num-1));
}
int main()
{
        int num;
        printf("\nEnter the nUmber  : ");
        scanf("%d",&num);
        printf("\nNumber after turning the rightmost bit set off is :    %d", turnOffRightSetBit(num));
}
