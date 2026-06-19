#include<stdio.h>
main()
{
    int num;
    for(num=0;num<20;num++)
    {
        if(num%3==0)
            continue;
        printf("%d\n",num);

        if(num==10)
            break;

            printf("%d\n",num);


    }
}
