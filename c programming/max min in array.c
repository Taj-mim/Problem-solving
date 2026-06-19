//we will take the input in accending order
#include<stdio.h>
int main()
{
    int array[30],i,min,max;
    for(i=0;i<5;i++)
        {
            scanf("%d",&array[i]);
        }
        printf("input=");
     for(i=0;i<5;i++)
        {
            printf("%d ",array[i]);
        }
printf("\n");
   max=min=array[0];
   for(i=1;i<5;i++)
   {
       if(max>array[i])
       max=array[i];
        if(min<array[i])
       min=array[i];

   }
   printf("max=%d\n",max);
   printf("min=%d",min);


}
