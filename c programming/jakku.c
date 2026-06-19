#include<stdio.h>
int main()
{
    int array[100],n,i,temp,j,count=0,odd=0,even=0;
    printf("how many number you want to take=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            if (array[i]>array[j])
        {
            temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        }
    }
    printf("\nsorting= ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(array[i]<0)
        {
        count++;
        }


        else if(array[i]%2==0)
        {
            even++;
        }

       else
        {
          odd++;
        }

    }

printf("negative=%d\n",count);
printf("even=%d\n",even);
printf("odd=%d\n",odd);

}

