#include<stdio.h>
main()
{
    int num,i;
    printf("enter number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d=%d\n",num,i,num*i);

    }
}
