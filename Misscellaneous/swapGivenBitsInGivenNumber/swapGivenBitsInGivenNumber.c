/** \brief Program to swap the bits from the given positions of the number Author : @AbhilashAgarwal */

/**  ----------------  incomplete experimental program ----------*/

#include<stdio.h>
#define MAX_SIZE = 32 //size of integer 4 bytes = 32 bits
int swapBitsNUM(int num, int p, int q, int s)
{
                int st1 = num>>p;
}

int main()
{
        int num, p,q, s;
        printf("\nEnter the Number and position one and two respectively  also number of bits to swap: \n ");
        scanf("%d",&num);
        scanf("%d",&p);
        scanf("%d",&q);
        scanf("%d",&s);
        printf("\nNumber after swapping the given bits  is  ", swapBitsNum(num, p, q, s) );
}
