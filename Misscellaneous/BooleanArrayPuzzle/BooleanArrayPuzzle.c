/** \brief given array of 2 elements, possible values are 0,1 one element is definitely 0, change both elements to 0
        Author : @AbhilashAgarwal  */

#include<stdio.h>

void puzzle(int * A)
{
        A[A[1]] = A[A[0]];
}
int main()
{
        int A[2] = { 0,1};
        printf("\nA[0] :  %d,   A[1] :   %d", A[0], A[1]);
        puzzle(A);
        printf("\nA[0] :  %d,   A[1] :   %d", A[0], A[1]);
}
