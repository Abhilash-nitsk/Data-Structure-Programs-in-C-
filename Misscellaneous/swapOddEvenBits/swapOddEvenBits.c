/** \brief Program to swap all the odd and even binary bits of the given number  Author : @AbhilashAgarwal */

#include<stdio.h>

int swapOddEvenBits(int num)
{
        int oddCon = 0x55555555;
        int evenCon = 0xAAAAAAAA;
        int oddBits;
        int evenBits;
        oddBits = oddCon&num;
        evenBits = evenCon&num;
        oddBits = oddBits<<1;
        evenBits = evenBits>>1;
        return(oddBits|evenBits);
}

int main()
{
        int num;
        printf("\nEnter the number  :  ");
        scanf("%d", &num);
        printf("\nThe odd and even bits swapped number is  :  %d" , swapOddEvenBits(num));
}
