#include<stdio.h>
int main()
{
    long long int num1,num2,num3,num4,x;
    scanf("%lld %lld %lld %lld",&num1,&num2,&num3,&num4);
    x=(num1*num2)-(num3*num4);
    printf("Difference = %lld",x);
    return 0;
}
