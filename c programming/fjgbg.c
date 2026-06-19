#include<stdio.h>
int main()
{
    int array[100],n,i,temp,j,max,min;
    printf("How many number you want to take=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("input=");
     for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
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
    printf("sorting=");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
