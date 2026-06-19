#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input,i,numbers[100];
    long long int sum=0;
    scanf("%d",&input);
    for(i=0;i<input;i++)
    {
        scanf("%d",&numbers[i]);
        sum=sum+numbers[i];
    }
    if (sum<0)
    {
        printf("%lld",sum*(-1));
    }
    else
    {
          printf("%lld",abs(sum));
    }

    return 0;


}
