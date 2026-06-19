#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,res1,res2,res3;
    scanf("%lld %lld",&a,&b);
    res1=floor((float)a/b);
    res2=ceil((float)a/b);
    res3=round((float)a/b);
    printf("floor %lld / %lld = %lld\n",a,b,res1);
    printf("ceil %lld / %lld = %lld\n",a,b,res2);
    printf("round %lld / %lld = %lld",a,b,res3);
    return 0;
}
