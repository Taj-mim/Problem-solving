#include<stdio.h>
int main()
{
    int num,result;
    scanf("%d",&num);
    result=num/1000;
   if(result%2==0)
   {
       printf("EVEN");
   }
   else
   {
       printf("ODD");
   }
   return 0;
}
