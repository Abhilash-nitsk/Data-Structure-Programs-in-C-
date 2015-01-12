/** \brief add 1 to given num without the use of any arithmetic operations    Author : @AbhilashAgarwal   */
#include<stdio.h>

int addOne(int x)
{
   return (-(~x));
}

/* Driver program to test above functions*/
int main()
{
  printf("%d", addOne(15));
  getchar();
  return 0;
}
