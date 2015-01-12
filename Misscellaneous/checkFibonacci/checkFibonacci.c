/** \brief Program to check a given num is fibonacci or not   Author : @AbhilashAgarwal  */

#include<stdio.h>
#include<math.h>

int main()
{
        int num,a,b;
        printf("\nEnter the num : ");
        scanf("%d", &num);
        if(num==1||num==2)
        {
                printf("\nNumber is Fibonacci");
                return;
        }
        a = (5*(num*num))+4;
        b = (5*(num*num))-4;
        int i = sqrt(a);
        int j = sqrt(b);
        if(i*i==a||j*j == b)
        {
                printf("\nNumber is Fibonacci");
                return;
        }
        printf("\nThe given num is not fibonacci");
}
