#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100],n,i,pos;
    printf("how many input you wat to take=");
    scanf("%d",&n);
    printf("which posiiton you want to delete=");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
          scanf("%d",&array[i]);
    }
    system("cls");
    printf("before deletion");
     for(i=0;i<n;i++)
    {
          printf("%d ",array[i]);
    }
    printf("\n");

    for(i=pos;i<=n;i++)
    {
        array[i]=array[i+1];
    }
   n--;
   printf("after deletion \n");

       for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }


}
