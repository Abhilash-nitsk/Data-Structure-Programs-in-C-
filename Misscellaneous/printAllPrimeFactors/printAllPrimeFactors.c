/** \brief Program to print all the prime factors of the given number   Author : @AbhilashAgarwal  */

#include<stdio.h>

void primeFactor(int num)
{
        int i;
        while(num%2==0)
        {
                printf("\t2");
                num=num/2;
        }
        for(i=3;i*i<=num;i=i+2)
        {
                while(num%i==0)
                {
                        printf("\t%d",i);
                        num=num/i;
                }
        }
        if(num>2)
                printf("\t%d",num);
}
int main()
{
        int num;
        printf("\nEnter the Number  :  ");
        scanf("%d",&num);
        printf("\nThe prime factors of the given number are : \n");
        primeFactor(num);
}
