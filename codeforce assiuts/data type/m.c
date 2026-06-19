#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
    {
        printf("ALPHA\n");
        {
             if(ch>=65&&ch<=90)
        {
            printf("IS CAPITAL");
        }
        else if(ch>=97&&ch<=122)
        {
            printf("IS SMALL");
        }
        }
    }
    else if (ch>=48&&ch<=57)
    {
        printf("IS DIGIT");
    }
   return 0;
}
