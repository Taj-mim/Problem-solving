#include<stdio.h>
int main()
{
    int n;
    long long int numbers[100],input,pos=-1,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&numbers[i]);
    }
    scanf("%lld",&input);
    for(i=0;i<n;i++)
    {
         if(input==numbers[i])
   {
       pos=pos+1+i;
       printf("%lld",pos);
       break;
   }
    if(input!=numbers[i])
       printf("%lld",pos);
    break;
    }



}
