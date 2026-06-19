#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d %d %d",&a,&b,&c);
    (a>b&&a>b)?printf("a is the largest "):(b>a&&a>c)?printf("b is the largest"):printf("c is the largest");

}
