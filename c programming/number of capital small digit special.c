#include<stdio.h>
int main()
{
    char name[100];
     gets(name);
     int i=0,small=0,capital=0,digit=0,special=0,space=0;
     while(name[i]!='\0')
     {
        if(name[i]>=65&&name[i]<=90)
      capital++;
    else if(name[i]>=97&&name[i]<=122)
        small++;
    else if(name[i]>=48&&name[i]<=57)
        digit++;
    else if(name[i]==' ')
    space++;
    else
        special++;
        i++;
     }
    printf("%d\n",capital);
    printf("%d\n",small);
    printf("%d\n",digit);
    printf("%d\n",space);
    printf("%d\n",special);
}
