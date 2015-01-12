/** \brief Program to check if the given sequence of brackets if balanced   Author : @AbhilashAgarwal  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN_SEQ 100  //maximum length of the permissible bracket sequence
int main()
{
        int P = 0, S = 0, C = 0,i=0;  // P = parenthesis () , S= Square Brackets[] , C = Curly Brackets{}
        char brackets[MAX_LEN_SEQ];
        printf("\nEnter the Sequence of Brackets : ");
        gets(brackets);
        while(brackets[i]!='\0')
        {
                if(P<0||S<0||C<0)
                {
                        printf("\nSequence Not Balanced");
                        exit(1);
                }
                if(P>S||S>C||P>C)
                {
                        printf("\nSequence Not Balanced");
                        exit(1);
                }
                if(brackets[i] == '(')
                        P++;
                else if(brackets[i] == ')')
                        P--;
                else if(brackets[i] == '{')
                        C++;
                else if(brackets[i] == '}')
                        C--;
                else if(brackets[i] == '[')
                        S++;
                else if(brackets[i] == ']')
                        S--;
                else
                {
                        printf("\nUnrecognized character ERROR    %c",brackets[i]);
                        exit(1);
                }
                i++;
        }
        if(P==0&&C==0&&S==0)
                printf("\nThe Given Sequence of Brackets is Balanced");
        else
                printf("\nThe Given Sequence of Brackets is NOT BALANCED");
}
