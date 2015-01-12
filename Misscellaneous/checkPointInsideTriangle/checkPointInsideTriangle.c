/** \brief Program to check if the given point is inside the triangle of given cordinates  Author : @AbhilashAgarwal //some error */

#include<stdio.h>

int areaTriangle( int xa , int xb, int xc , int ya , int yb , int yc)
{
       int area = (xa*(yb-yc)) + (xb*(yc-ya)) + (xc*(ya-yb));
       return area;
}
int main()
{
       int xa,xb,xc, ya,yb,yc, Px, Py;//Let us assume that the cordinate system supports only integer positions....
        xa = 0;
        ya = 0;
        xb = 10;
        yb = 30;
        xc = 20;
        yc = 0;
        Px = 30;
        Py = 15;
        int A = areaTriangle(xa,xb,xc,ya,yb,yc);
        int A1 = areaTriangle(xa,xb,Px, ya,yb,Py);
        int A2 = areaTriangle(xa,Px,xc, ya,Py, yc);
        int A3 = areaTriangle(Px,xb,xc, Py,yb,yc);
        if(A1+A2+A3==A)
                printf("\nSucessFull ... point lies in the Fucking triangle");
        else
                printf("\nPoint does not lie in the triiangle");
}
