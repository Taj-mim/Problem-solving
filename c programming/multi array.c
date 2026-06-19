#include<stdio.h>
int main()
{
    int mat1[100][100],mat2[100][100],multi[100][100],r1,r2,c1,c2,i,j,sum=0,k;
    printf("how many row you want to take in matrix 1=");
    scanf("%d",&r1);
    printf("how many column you want to take in matrix 1=");
    scanf("%d",&c1);
     printf("\n");
    printf("how many row you want to take in matrix 2=");
    scanf("%d",&r2);
    printf("how many column you want to take in matrix 2=");
    scanf("%d",&c2);
     printf("\n");
    if(r1==c2||r2==c1)
    {
        printf("take input for matrix 1=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("mat1[%d][%d]=",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");

     printf("take input for matrix 2=\n");
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("mat2[%d][%d]=",i,j);
            scanf("%d",&mat2[i][j]);

        }

    } printf("\n");


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                  sum=sum+mat1[i][k]*mat2[k][j];
            }
           multi[i][j]=sum;
           sum=0;
        }

    }
     printf("multiplication of matrix1 and matrix2=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {

            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
    }
    else
        {
        printf("row,column are not equal and for that multiple can't happen");

        }
        return 0;

}
