#include<stdio.h>
main()
{
    inti,j,k;

    for(i=1;i<=6;i++)
        {
            for(k=5;k>=i;k--)

             {
                   printf(" ",k);
              }

            for(j=1;j<=7;j++)
            {
                if(i==1||i==6||j==1||j==7||j==i)
                printf("★");
                else
                     printf(" ");
            }

              printf("\n");

    }
 }



