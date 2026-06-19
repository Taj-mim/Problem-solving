#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,result;
    char opt;
    scanf("%d",&num1);
    scanf("%c",&opt);
    scanf("%d",&num2);
    switch(opt)
    {
    case'+':
        result=num1+num2;
        printf("%d",result);
        break;
    case'-':
         result=num1-num2;
        printf("%d",result);
        break;
    case'*':
         result=num1*num2;
        printf("%d",result);
        break;
    case'/':
         result=(num1/num2);
        printf("%d",result);
        break;

    }
    return 0;

}
