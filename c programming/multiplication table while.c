#include<stdio.h>
main()
{
    int num,i=1;
    printf("enter number:");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d X %d=%d\n",num,i,num*i);
         i++;
    }
}

