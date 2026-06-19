#include<stdio.h>
int main()
{
    int age =30;
    int *pAge=&age;
    printf("%d",&*&age);
}
