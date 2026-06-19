#include<stdio.h>
int main()
{
    char name1[100],name2[100];
    int len=0,i=0,j;
    gets(name1);
    while(name1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        name2[j]=name1[i];
    }
    name2[j]='\0';
    printf("%s",name2);
    printf("\n");
    int d=strcmp(name1,name2);
    if(d==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    getch();
}
