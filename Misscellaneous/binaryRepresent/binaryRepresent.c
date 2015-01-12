/** \brief Program to print the binary form without actually converting the given num  Author  : @AbhilashAgarwal */

#include<stdio.h>

void binary(unsigned n)
{
        unsigned i;
        for(i=1 << 31; i>0;i=i>>1)
                (n&i)?printf("1"): printf("0");
}
int main()
{
        binary(102400000000);
}
