#include<stdio.h>
int main()

{
    int marks[100],i,n,sum=0;
    printf("how many number=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0;i<n;i++)

    {
        sum=sum+marks[i];
    }
    printf("%d",sum);
}
