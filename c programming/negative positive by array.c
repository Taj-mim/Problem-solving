#include<stdio.h>
int main()
{
    int array[100],n,i,temp,j;
    printf("how many number you want to take=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            if(array[i]>array[j])
        {

            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }

    }
      printf("\n");
      printf("sorting input=");
  for(i=0;i<n;i++)
  {
      printf("%d ",array[i]);
  }
printf("\n");
  for(i=0;i<n;i++)
     {
         printf("\n");
      if(array[i]>=0)
        printf("positive= %d ",array[i]);

      if(array[i]<0)
        printf("negative=%d ",array[i]);

      }
}
