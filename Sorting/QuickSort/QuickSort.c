/** Program to sort the stream of integers using @QuickSort by recursion
    Author: @AbhilashAgarwal */

#include<stdio.h>

void quickSort(int * array, int low, int high)
{
    int pivot;
    if(low<high)
    {
        printf("\nin the quickSort procedure :");
        pivot = partitionKey(array, low, high);
        quickSort(array , low , pivot);
        quickSort(array, pivot+1, high);
    }
}
int partitionKey(int *array, int low, int high)
{
    int i,j;
    i=low;
    j=high;
    int p=high;
    int x=array[p];
    printf("\n in THe partition key procedure : ");
    while(1)
    {
        while(array[i++]<x);
        while(array[j--]>x);
        if(i<j)
        {
            int temp;
            temp= array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        else
        {
            int temp;
            temp= array[i];
            array[i]=array[p];
            array[p]=temp;
            break;
        }
    }
    return p;
}
int main()
{
    int array[10], i;
    printf("\nEnter the array to sort : \n");
    for(i=0;i<10;i++)
        scanf("%d",&array[i]);
    quickSort(array, 0, 9);
    printf("\nThe Array has been Sorted : \n");
    for(i=0;i<10;i++)
        printf("\n%d",array[i]);
}
