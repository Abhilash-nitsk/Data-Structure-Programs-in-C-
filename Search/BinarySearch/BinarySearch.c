/** Program to Search an Element in a given Sorted array using @BinarySearch
    Author: @AbhilashAgarwal */

#include<stdio.h>
void binarySearch(int * A , int low, int high, int num)
{
    int i, j, mid;
    int static pass = 0;
    mid=(low+high)/2;
    pass++;
   if(high<=low)
   {
       return;
   }
    if(A[mid]==num)
    {
        printf("\nSearch Successful in  %d  pass",pass);
        return;
    }
    else if(A[mid]>num)
        binarySearch(A,low,mid,num);
    else
        binarySearch(A,mid+1,high, num);
   }
int main()
{
    int A[10];
    int i,j,num;
    printf("\nEnter the Elements for Array  :\n");
    for(i=0;i<10;i++)
        scanf("%d",&A[i]);
    printf("\nNow Enter the number to Search for : ");
    scanf("%d",&num);
    binarySearch(A,0,9, num);
}
