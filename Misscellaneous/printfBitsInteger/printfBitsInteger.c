/** \brief Program to print the individual bits of a given integer  Author : @AbhilashAgarwal  */

#include<stdio.h>
#include<math.h>

void printBitsRevOrder(int num)
{
        int buff = 1;
        while(num)
        {
                if(num&buff)
                printf("1");
                else
                        printf("0");
                num>>=1;
        }
}
void printBitsOrder(int num)
{
        int buff = 1,i;
        int n = sizeof(int)*8;    //total size of bits
        int a[n] ;
        for(i=0;i<n;i++)
                a[i] = 0;
        i=n-1;
        while(num)
        {
                if(num&buff)
                a[i] = 1;
                else
                        a[i] = 0;
                i--;
                num>>=1;
        }
        int k = 0;
        for(i=0;i<n;i++)
        {
                k++;
                printf("%d", a[i]);
                if(k==8)
                {
                        printf(" ");    //space between each bytes
                        k=0;
                }

        }
}


int main()
{
        int num;
        printf("\nEnter the Number : ");
        scanf("%d", &num);
        printf("\nThe Bits of the integer %d  are  :\n", num);
        printBitsOrder(num);
}
