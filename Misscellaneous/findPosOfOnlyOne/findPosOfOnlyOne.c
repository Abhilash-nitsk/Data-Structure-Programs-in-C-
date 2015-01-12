/** Find the position of one in the given number containing only one '1' in binary   Author : @AbhilashAgarwal */

#include<stdio.h>

int findPos(int num)
{
        int i = 1;
        int c =1;
        while(num)
        {
                i= 1&num;
                if(i==1)
                        return c;
                c++;
                num=num>>1;
        }
}

int isPowerOfTwo(unsigned n)
{
    return n && (! (n & (n-1)) );
}


int main()
{
        int num;
        A:
        printf("\nEnter the number (only power of 2) : ");
        scanf("%d", &num);
        if(! isPowerOfTwo(num))
        {
                printf("\nInvalid input enter again\n");
                goto A;
        }
        printf("\nThe position of the one in binary representation is  :  %d", findPos(num));
}
