#include <stdio.h>

// See http://www.geeksforgeeks.org/archives/25621 for details of this function
int binomialCoeff(int n, int k);

// Function to print first n lines of Pascal's Triangle
void printPascal(int n)
{
        int line, i;
  // Iterate through every line and print entries in it
  for (line = 0; line < n; line++)
  {
    // Every line has number of integers equal to line number
    for ( i = 0; i <= line; i++)
      printf("%d ", binomialCoeff(line, i));
    printf("\n");
  }
}

// See http://www.geeksforgeeks.org/archives/25621 for details of this function
int binomialCoeff(int n, int k)
{
        int i;
    int res = 1;
    if (k > n - k)
       k = n - k;
    for ( i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// Driver program to test above function
int main()
{
  int n = 7;
  printPascal(n);
  return 0;
}
