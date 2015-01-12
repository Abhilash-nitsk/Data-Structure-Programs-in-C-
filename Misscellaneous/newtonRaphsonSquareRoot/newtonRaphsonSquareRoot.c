/** \brief Program to find the square root of a number using Newton/Raphson method  Author : @AbhilashAgarwal */

#include<stdio.h>
#define APPROXIMATION  0.000001
float findSquareRoot(float num)
{
        float x=num , y=1;
        while(x-y>APPROXIMATION)
        {
                x=(x+y)/2;
                y=num/x;
        }
        return x;
}

int main()
{
        float num;
        printf("\nEnter the number whose square root is to be estimated :  ");
        scanf("%f",&num);
        printf("\nThe square root of the given number is close to   :   %f", findSquareRoot(num));
}
