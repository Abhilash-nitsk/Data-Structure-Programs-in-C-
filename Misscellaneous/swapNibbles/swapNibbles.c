/** \brief Program to swap two nibbles of the byte of data given  Author : @AbhilashAgarwal */

#include<stdio.h>

unsigned char swapNibble(unsigned char c)
{
        return((c&0x0F)<<4|(c&0xF0)>>4);
}

int main()
{
        unsigned char c = 100;
        printf("\nThe Swapped nibble of the character is  :  %u",swapNibble(c));
}
