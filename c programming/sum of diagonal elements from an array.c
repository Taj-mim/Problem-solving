#include<stdio.h>
int main()
{
    int mat[100][100],i,j,sum=0,r,c;
    printf("row and column for the matrix=\n");
    scanf("%d %d",&r,&c);
    printf("insert the element of the matrix=\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);

        }
    }
    printf("matrix=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",mat[i][j]);
             printf("\t");
        }printf("\n");
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
             sum=sum+mat[i][j];
            }
        }
    }
     printf("sum of diagonal elements from an array=%d\n",sum);
}
