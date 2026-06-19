#include<stdio.h>
int main()
{
    char name1[100]={"tajmim"},name2[100]={" fatema"};
    int i=0,j=0,len=0;
    /*gets(name1);
    gets(name2);
    printf("%s",strcat(name1,name2));
    name3[100]=name1[100]+name2[100];
    printf("%s",name3);*/
while(name1[i]!='\0')
{
    i++;
    len++;
}
while(name2[j]!='\0')
{
   name1[len+j]=name2[j];
   j++;
}

printf("%s",name1);
}
