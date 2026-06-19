#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>b&&b>c)
    {
        printf("%lld %lld",c,a);
    }
    else if(b>a&&a>c)
    {
        printf("%lld %lld",c,b);
    }
    else
    {
        printf("%lld %lld",a,c);
    }

    return 0;
}
