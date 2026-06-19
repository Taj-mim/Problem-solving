#include<stdio.h>
main()
{
    int num;
    printf("number is=");
    scanf("%d",&num);
    if(num%2==1)
    {
        printf("the number is odd");

    }
    else if (num==0)
    {
        printf("the number is zero ");
    }
    else
        printf("the number is even");
}
