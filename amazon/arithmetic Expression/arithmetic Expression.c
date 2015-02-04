#include<stdio.h>
#include<string.h>

int main()
{
        int r=0, b, i,k=0;
        char exp[]="2+2*3",c;
        for(i=0;i<strlen(exp);i++)
        {
                if(i==0)
                        r=exp[i]-48;
                if(k%2==0)
                {
                        b=exp[i]-48;
                        if(c=='+')
                                r=r+b;
                        else if(c=='-')
                                r=r-b;
                        else if(c=='*')
                                r=r*b;
                       else if(c=='/')
                                r=r/b;
                }
                else
                {
                        c=exp[i];
                }
                k++;
        }
        printf("\nResult : %d",r);
}
