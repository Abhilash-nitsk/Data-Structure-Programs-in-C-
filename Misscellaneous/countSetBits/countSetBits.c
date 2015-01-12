/** \brief Program to count the number of set bits in the number  Author : @AbhilashAgarwal  */
 ///    THIS PROGRAM IS  NOT CORRECT AND FUNCTIONAL JUST EXPERIMENTAL

int countSetBits1(unsigned int n) /// counts number of set bits using normal looping technique in O(n)
{
  unsigned int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

int countSetBits2(int n)  /// counts number of set bits using Brian Kernighan’s Algorithm in O(logn)
{
        int c=0;
        while(n>0)
        {
                n=n&(n-1);
                c++;
        }
        return c;

}
int main()
{
    int num;
    printf("\nEnter the number  :  ");
    scanf("%d", &num);
    printf("\nThe Number of Set bits are  : %d",countSetBits2(num));
    return 0;
}
