/**Program to Search a given element in given array using @LinearSearch
    Author: @AbhilashAgarwal */

#include<stdio.h>

int main()
{
    int A[10],i,num,flg=0;
    printf("\nEnter the Array \n");
    for(i=0;i<10;i++)
        scanf("%d",&A[i]);
    printf("\nEnter the Number to Search : ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
        if(A[i]==num)
        {
                flg=1;
                break;
        }
    if(flg==1)
        printf("\nSuccessfull Number Found in : %d  : index",i+1);
    else
        printf("\nSearch Failed ");

}

