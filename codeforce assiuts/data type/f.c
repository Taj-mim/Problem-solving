#include<stdio.h>
int main()
{
    long long int num1,num2,sum=0;
    scanf("%lld %lld",&num1,&num2);
    sum=(num1%10)+(num2%10);
    printf("%lld",sum);
    return 0;
}
