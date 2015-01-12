/** \brief Program to determine min and max of given list in maximum of 3*(n/2) steps Author : @AbhilashAgarwal */

#include<stdio.h>

void minMaxList(int * a)
{
        int min=a[0];
        int max = a[0];
        int i;
        for(i=0;i<10;i=i+2)
        {
                if(a[i]>a[i+1])
                {
                        if(a[i]>max)
                                max = a[i];
                        if(a[i+1]<min)
                                min = a[i+1];
                }
                else
                {
                        if(a[i+1]>max)
                                max = a[i+1];
                        if(a[i]<min)
                                min = a[i];
                }
        }
        printf("\n max is  :  %d \t min is :  %d",max,min);
}

int main()
{
        int a[10],i;
        printf("\nEnter the list of 10 Numbers  : \n");
        for(i=0;i<10;i++)
                scanf("%d",&a[i]);
        minMaxList(a);
}
