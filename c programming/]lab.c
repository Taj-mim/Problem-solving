#include<stdio.h>
main()
{
 int i,j,k;
 printf("ID:23103406\noutput:\n");
 for(i=1;i<=5;i++)
 {
 for(j=4;j>=i;j--)
 { printf(" ");}
 for(k=1;k<=2*i-1;k++)
 { printf("* ");}
 printf("\n");
 }
}
