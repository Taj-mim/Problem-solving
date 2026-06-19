#include<stdio.h>
int main()
{
    long long int num,years,months,days;
    scanf("%lld",&num);
    years=num/365;
    months=(num%365)/30;
    days=((num%365)%30);
    printf("%lld years\n%lld months\n%lld days",years,months,days);
    return 0;

}
