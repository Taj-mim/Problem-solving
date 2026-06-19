
#include<stdio.h>
int exp(int base,int exp)
{
    int result=1,i=1;
    while(i<=exp)
    {
        i++;
         result=result*base;
    }
    return result;
}
int main()
{
    int exp(x,y),x,y;
    scanf("%d %d",&x,&y);
   printf("%d",exp(x,y));
}
