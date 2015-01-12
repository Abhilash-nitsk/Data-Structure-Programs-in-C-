/** Program : @ReverseString   Author : @AbhilashAgarwal  */

#include<stdio.h.>
#include<string.h>

void reverseString(char * name)
{
    int len = strlen(name);
    int i;
    for(i=0;i<len/2;i++)
       {
           char temp;
           temp = name[i];
           name[i]= name[len-i-1];
           name[len-i-1] = temp;
       }
}
int main()
{
    char name[20] = "my name is Abhi";
    char * revName;
    printf("\nThe Original string is   :  %s", name);
    reverseString(name);
    printf("\nThe Reversed string is   :  %s", name);
}
