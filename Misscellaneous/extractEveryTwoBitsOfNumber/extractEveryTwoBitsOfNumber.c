/** \brief Program to extract every two bits of the given byte in an array of size 4  Author : @AbhilashAgarwal */

#include<stdio.h>

unsigned char * extractBitPairs(unsigned char c)
{

        unsigned char a[4];
        int i;
        a[0] = 0x03;
        a[1] = 0x0C;
        a[2] = 0x30;
        a[3] = 0xC0;
        for(i=0;i<4;i++)
        {
                        printf("\nvalue of A before anding  :  %d", a[i]);
                        a[i] = a[i]&c;
                        printf("\nvalue of A after anding  :  %d", a[i]);
        }
        return a;
}
int main()
{
        int i;
        unsigned char c;
        unsigned char * a;
        printf("\nEnter the character   :  ");
        scanf("%c",&c);
        a = extractBitPairs(c);
        for(i=0;i<4;i++)
                printf("\n%d", a[i]);

}
