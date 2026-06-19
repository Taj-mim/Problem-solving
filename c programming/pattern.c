#include <stdio.h>

int main()
 {
int n,i,j;
printf("enter any positive number=");
scanf("%d",&n);
for (i=1;i<=n;i++)

{
    for(j=1;j<=i;j++)
   printf("%d ",j%2);

   printf("\n");
}


}
