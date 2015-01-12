/** \brief Program to Left shift by one the MSB of given  no.  Author : @AbhilashAgarwal  */

#include<stdio.h>
#include<math.h>
int leftShiftMSB(int num)
{
        int k = num, c = 0;
         while(k)
         {
                 k = k>>1;
                 c++;
         }
         num = num-pow(2,c-1);
         c = pow(2,c);
         printf(" NUM =  %d,   and C =  %d",num, c);
         num = num|c;
         return num;
}

int main()
{
        int num;
        printf("\nEntetr the number : ");
        scanf("%d",&num);
        printf("\nThe number after left shifting the MSB by 1 is   :   %d", leftShiftMSB(num));
}
