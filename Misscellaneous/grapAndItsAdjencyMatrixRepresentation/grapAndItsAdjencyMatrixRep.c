/** \brief Program to represent a Graph using Adjacency matrix  Author : @AbhilashAgarwal */

#include<stdio.h>
#define MAX_V  11

int main()
{
        int vertices,i,j,c=0;
        int adjacency[MAX_V][MAX_V];
        printf("\nEnter the number of vertices [max 10] :  ");
        scanf("%d",&vertices);
        printf("\nEnter [1] if vertices exist from given first vertex to other, else [0]   : \n");
        for(i=0;i<vertices;i++)
        {
                for(j=0;j<vertices;j++)
                {
                        printf("\nFrom  %d    to    %d    :  ",i,j);
                        scanf("%d",&adjacency[i][j]);
                }
        }

        printf("\nThe graph has been formed  :  \n");
        for(i=0;i<vertices;i++)
        {
                for(j=i;j<vertices;j++)               //since it is undirected graph so we should count only one vertex from one v to other
                {
                        if(adjacency[i][j]==1)
                        {
                                c++;
                                printf("\nEdge  %d  :  From vertex : %d   To  %d ", c,i,j);
                        }
                }
        }
}
