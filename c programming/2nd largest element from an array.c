#include<stdio.h>
int main()
{
    int array[100],i,j,temp,n,max;
    printf("how many numbers you want to take=");
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
    printf("sorting=");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    max=array[0];
    printf("\n");
    printf("second largest=");
    for(i=1;i<n;i++)
    {
        if(max<array[i])
        max=array[i-1];

    }
        printf("%d",max);
}
