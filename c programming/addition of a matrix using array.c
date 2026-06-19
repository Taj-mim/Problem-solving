#include<stdio.h>
int main()

{
    int a[10][10],b[10][10],c[10][10],i,j,r,C;

    scanf("%d %d",&r,&C);
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

   printf("A=\n");
    for(i=0;i<r;i++)
    {
        printf("\t");
        for(j=0;j<C;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
    }

   printf("\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }printf("\n");
    }

    printf("B=\n");
    for(i=0;i<r;i++)
    {
        printf("\t");
        for(j=0;j<C;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("\na+b=c\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<C;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("C=\n");
     for(i=0;i<r;i++)
     {
         printf("\t");
         for(j=0;j<C;j++)
         {
             printf(" %d ",c[i][j]);
         }printf("\n");
     }
     getch();
}
