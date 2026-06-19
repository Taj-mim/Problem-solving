
#include<stdio.h>
main()
{
int a;
printf("a=");
scanf("%d",&a);
switch(a)
{
case 0 ...59:
    printf("F");
    break;
    case 60 ...79:
    printf("B");
    break;
    case 80 ...100:
    printf("A");
    break;
    default:
        printf("invalid");

}

}
