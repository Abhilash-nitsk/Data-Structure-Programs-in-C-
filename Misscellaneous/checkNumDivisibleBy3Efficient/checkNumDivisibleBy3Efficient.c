/** \brief Program to check a given num is divisible by 3 efficiently using bit operation  Author : @AbhilashAgarwal */

#include<stdio.h>

int numDivisible3(int num)
{
        int oddSets =0 , evenSets = 0;
         if(num < 0)   num = -num;
            if(num == 0) return 1;
            if(num == 1) return 0;
        while(num)
        {
                if(num&1==1)
                        oddSets++;
                num = num>>1;
                if(num&1==1)
                        evenSets++;
                num=num>>1;
        }
        if(numDivisible3(abs(evenSets - oddSets)))
                return 1;
        else
                return 0;
}
int main()
{
        int num;
        printf("\nEnter the num  : ");
        scanf("%d", &num);
        if(numDivisible3(num))
                printf("\nThe Given Number is Divisible by 3  ");
        else
                printf("\nNot sivisible by 3");
}
