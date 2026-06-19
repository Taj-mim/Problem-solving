#include<stdio.h>
int max(value1,value2)
{
    int max;
    if(value1>value2)
   {
       max=value1;
   }
    else
    {
        max=value2;
    }

    return max;
}
int main()
{
    printf("%d",max(2,1));
}
