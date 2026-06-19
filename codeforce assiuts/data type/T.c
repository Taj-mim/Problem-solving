#include<stdio.h>
int main()
{
    long long int num1,num2,num3;
    scanf("%lld %lld %lld",&num1,&num2,&num3);
    if (num1>num3&&num3>num2)
    {
        printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld",num2,num3,num1,num1,num2,num3);
    }
    else if(num3>num1&&num1>num2)
    {
        printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld",num2,num1,num3,num1,num2,num3);
    }
    else if(num2>num1&&num1>num3)
    {
        printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld",num3,num1,num2,num1,num2,num3);
    }
    else if(num2>num3&&num3>num1)
    {
        printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld",num1,num3,num2,num1,num2,num3);
    }
    else if(num3>num2&&num2>num1)
    {
        printf("%lld\n%lld\n%lld\n\n%llld\n%lld\n%lld",num1,num2,num3,num1,num2,num3);
    }
    else if(num1>num2&&num2>num3)
    {
        printf("%lld\n%lld\n%lld\n\n%lld\n%lld\n%lld",num3,num2,num1,num1,num2,num3);
    }
    return 0;
}
