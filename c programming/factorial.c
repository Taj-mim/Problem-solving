#include<stdio.h>

main()

{
    int num;
    printf("enter any positive number=");
    scanf("%d",num);
    int fact=1,i;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;

    }
    printf("%d/n",fact);
}
