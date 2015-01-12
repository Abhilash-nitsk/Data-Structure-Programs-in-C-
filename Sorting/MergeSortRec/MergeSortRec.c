/** Program to Sort the Stream of numbers using @MergeSort using Recursion
    Author: @AbhilashAgarwal
*/

#include<stdio.h>
int array[20];

int main()
{
    int i,j,k;
    printf("\nEnter The 20 elements which u want to Merge sort : \n");
    for(i=0;i<20;i++)
        scanf("%d",&array[i]);
    mergeSort(0,19);
    printf("\nThe Array is Sorted\n");
    for(i=0;i<20;i++)
        printf("%d",array[i]);
}
void mergeSort(int low, int high)
{
    if(low!=high)
    {
        int mid=(low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merge(low,mid,high);
    }
}
void merge(int low,int mid,int high)
{
	int temp[20];
	int i = low;
	int j = mid +1 ;
	int k = low ;

	while( (i <= mid) && (j <=high) )
	{
		if(array[i] <= array[j])
			temp[k++] = array[i++] ;
		else
			temp[k++] = array[j++] ;
	}/*End of while*/
	while( i <= mid )
		temp[k++]=array[i++];
	while( j <= high )
		temp[k++]=array[j++];

	for(i= low; i <= high ; i++)
		array[i]=temp[i];
}/*End of merge()*/
