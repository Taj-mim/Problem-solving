#include<stdio.h>
int main()
{
    char name[100],name2[100];
    int i=0,len=0,j;
    gets(name);
    //printf("%s",strrev(name));

    while(name[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        name2[j]=name[i];
    }
    name2[j]='\0';
    printf("%s",name2);
}
