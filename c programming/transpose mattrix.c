#include<stdio.h>
int main()
{
    int array1[30][30],array2[30][30],i,j,r,c;
    printf("how many number you want to take for row=");
    scanf("%d",&r);
     printf("how many number you want to take for column=");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&array1[i][j]);

        }
        printf("\n");
    }
    printf("\nA=\n");

   for(i=0;i<r;i++)
   {
       printf("\t");
       for(j=0;j<c;j++)
       {
           printf("%d ",array1[i][j]);
       }
       printf("\n");
   }
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           array2[j][i]=array1[i][j];
       }
   }
    for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",array2[i][j]);
       }
       printf("\n");
   }

}
