#include<stdio.h>
main()

{
    int a;
    printf("a=");
    scanf("%d",&a);
    (a%400==0&&a%4==0)?printf("leap year"):printf("not leap year");

    }
