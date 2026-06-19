#include<stdio.h>
int main()
{
    int array[100],n,i,count=0,j;
    printf("the number you want to take=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if (array[i]==array[j])
        {
            count++;
           break;
        }
        }
    }
     printf("%d",count);

}
