#include<stdio.h>
int main()
{
    int num1,num2;
    char s;
    scanf("%d %c %d",&num1,&s,&num2);
    if(num1<num2||num1>num2||(num1==num2))
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }
    return 0;
}
