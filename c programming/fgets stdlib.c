#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30];
    printf("enter a name=");
    fgets(name,20,stdin);
    printf("my name is %s",name);
}
