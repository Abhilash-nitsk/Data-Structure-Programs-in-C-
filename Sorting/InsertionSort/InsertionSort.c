/** Program to Sort a stream of numbers using @InsertionSort
    @AbhilashAgarwal
*/

#include<stdio.h>
int main()
{
    int array[10];
    int i,j,n,k;
    n=10;
    printf("\nEnter the 10 Elements to sort\n");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    for(i=1;i<n;i++)
    {
        k=array[i];
        for(j=i-1;j>=0&&k<array[j];j--)
        {
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    printf("\n%d",array[i]);
}
