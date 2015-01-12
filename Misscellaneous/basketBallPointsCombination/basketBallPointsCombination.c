/** \brief program to find all the possible combinations forming from basketball points : 1,2,3 of the given points
        Author : @AbhilashAgarwal */

#include<stdio.h>

void printArray(int A[],int s)
{
        int i;
        printf("\n");
        for(i=0;i<s;i++)
                printf("\t%d",A[i]);
}
void basketBallPoints(int num, int s)
{
        static int p[100];
        if(num==0)
                printArray(p,s);
        else if(num>0)
        {
                int k;
                for(k=1;k<4;k++)
                {
                        p[s] = k;
                        basketBallPoints(num-k,s+1);
                }
        }
}
int main()
{
        int points;
        printf("\nEnter the total points  [MAX 100]  :  ");
        scanf("%d",&points);
        basketBallPoints(points,0);
}
