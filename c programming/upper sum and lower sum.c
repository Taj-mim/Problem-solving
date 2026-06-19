#include<stdio.h>
int main()
{
    int mat[100][100],i,j,uppersum=0,lowersum=0,r,c;
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
            if(i<j)
                {
                uppersum=uppersum+mat[i][j];
                }
           if(i>j)
           {
               lowersum=lowersum+mat[i][j];
           }
        }
    }
    printf("uppersum of triangle=%d\n",uppersum);
    printf("\nlowersum of triangle=%d\n",lowersum);
     return 0;

}
