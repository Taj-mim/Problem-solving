#include<stdio.h>
main()
{
    int num,i,count=0;
    printf("enter any number=");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;


        }

    }
        if(count==0)
        printf("prime number");
        else
            printf("not prime number");

}
