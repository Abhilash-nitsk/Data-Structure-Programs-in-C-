/** \brief Program to find the next higher number with same number of Bits  Author : @AbhilashAgarwal */

/**------------------------INCOMPLETE EXPERIMENTAL PROGRAM--------------------*/
#include<stdio.h>
#include<math.h>

int nextHigh(int num)
{
        int c = 0,t = 1;
        int x = num,i;
        while(x)
        {
                if(x&t==1)
                        c++;
                x=x>>1;
        }
        printf("\nNumber of set bits are  :  %d",c);
        x = num;
        t=0;
        while(x&1 == 1)
                {x=x>>1;t++;}
        printf("\nPosition of 0 is :  %d",t);
        i=t;
        while(c-i-1>=0)
        {

        }
}

int main()
{
        int num;
        printf("\nEnter the Number  :  ");
        scanf("%d",&num);
        printf("\nThe next higher number with same number of bits is  :   %d", nextHigh(num));
}
