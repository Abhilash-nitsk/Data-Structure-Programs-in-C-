/** \brief Program to find the powe of a given number without using Multiplication  Author : @AbhilashAgarwal  */

#include<stdio.h>

int powNonMultplyIter(int num, int pow)
{
        int res =num, i,j,buf =0, sum;
        for(i=0;i<pow;i++)
        {
                for(j=0;j<num;j++)
                {
                        sum = res + buf;
                        res = sum;
                        //
                }
                printf("%d ", buf);
                buf = res;
                res = 0;
        }
        return sum;
}
int main()
{
        int pow, num, res;
        printf("\nEnter the Number : ");
        scanf("%d", &num);
        printf("\nEnter the Power : ");
        scanf("%d", &pow);
       // res = powNonMultplyRec(num, pow);
       // printf("\nResult with recursion :  %d", res);
        res = powNonMultplyIter(num, pow);
        printf("\nResult with iteratively :  %d", res);
}
