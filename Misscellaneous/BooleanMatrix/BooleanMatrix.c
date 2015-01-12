/** \brief Program to solve Boolean Matrix problem      Author : @AbhilashAgarwal  */

#include<stdio.h>

int main()
{
        int a[5][5]={{0,0,0,1,0},{0,0,0,0,0},{0,0,0,0,0},{0,1,0,0,0},{0,0,0,0,0}};
        int row[5] = {0,0,0,0,0}, col[5] = {0,0,0,0,0}, i,j;
        for(i=0;i<5;i++)
        {
                printf("\n");
                for(j=0;j<5;j++)
                        printf("  %d",a[i][j]);
        }
        printf("\n");
        for(i=0;i<5;i++)
                for(j=0;j<5;j++)
                        if(a[i][j]==1)
                        {
                                row[i]=1;
                                col[j] = 1;
                        }
        for(i=0;i<5;i++)
        {
                if(row[i]==1)
                {
                        for(j=0;j<5;j++)
                                a[i][j]= 1;
                }
                if(row[i]==1)
                {
                        for(j=0;j<5;j++)
                                a[j][i]= 1;
                }
        }
         for(i=0;i<5;i++)
        {
                printf("\n");
                for(j=0;j<5;j++)
                        printf("  %d",a[i][j]);
        }
}
