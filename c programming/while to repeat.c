#include<stdio.h>
main()
{

    while(1)//to repeat several time
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
}

