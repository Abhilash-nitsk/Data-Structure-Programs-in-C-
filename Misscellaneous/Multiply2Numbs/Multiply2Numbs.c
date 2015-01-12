/** \brief Program to multiply 2 numbs without using multiply, bitwise, and no loops  Author : @AbhilashAgarwal */

#include<stdio.h>
int multiply(int x, int y)
{
   if(y == 0)
     return 0;
   if(y > 0 )
     return (x + multiply(x, y-1));
   if(y < 0 )
     return -multiply(x, -y);
}
int main()
{
  printf("\n %d", multiply(2, 4));
  getchar();
  return 0;
}
