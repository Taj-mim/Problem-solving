#include<stdio.h>
int main()
{
    int marks[5],i,sum=0;
    for(i=0;i<=4;i++)
    {
    scanf("%d",&marks[i]);
    }
 for(i=0;i<=4;i++)
 {
 sum=sum+marks[i];
 }
 printf("sum=%d\n",sum);
  printf("avg=%.3f",((float)sum/5));





}
