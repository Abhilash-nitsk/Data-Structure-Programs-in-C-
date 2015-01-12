/** \brief Program to find all the primes till the given num using sieve of eratsothenes Author : @AbhilashAgarwal */
#include<stdio.h>

void markArray(int a[], int n, int num)
{
        int i = 2,k;
        while((i*n)<=num)
        {
                k = i*n;
                a[k - 1] = 1;
                i++;
        }
}

void sieveEratsothenes(int num)
{
        if(num>=2)
        {
        int a[num] ,n,i;
        memset(a, 0, sizeof(a));
        for(i=1;i<num;i++)
        {
                if(a[i] == 0)
                {
                        printf("\t%d",i+1);
                        markArray(a, i+1, num);
                }
        }
        }

}
int main()
{
        int num;
        printf("\nEnter the number  :  ");
        scanf("%d", &num);
        printf("\nTHe sieve of Eratsothenes is  :  \n");
        sieveEratsothenes(num);
}
