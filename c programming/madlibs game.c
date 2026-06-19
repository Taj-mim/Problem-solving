#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],fav[20],pronoun[20];
    printf("enter name=");
    fgets(name,20,stdin);
    printf("favourite thing=");
    fgets(fav,20,stdin);
    printf("pronoun=");
    fgets(pronoun,20,stdin);
    printf("my name is %s\n",name);
    printf("i love %s\n",fav);
    printf("stay away from %s",pronoun);

}
