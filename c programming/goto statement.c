#include<stdio.h>
main()
{
    int a=1;
    l:
        if(a<100)
    printf("%d\n",a);
    a++;
    goto l;
}
