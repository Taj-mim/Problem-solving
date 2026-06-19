#include<stdio.h>
main()
{
    char op;
    printf("choice an operator (+,-,*,/)=");
    scanf("%c",&op);
    double X,Y,sum,sub,multi,div;
    printf("value of X and Y=\n");
    scanf("%lf %lf",&X,&Y);

    switch(op)

    {
    case '+':
        sum=X+Y;
        printf("summation of two number=%lf",sum);
        break;
    case '-':
        sub=X-Y;
        printf("subtraction of two number=%lf",sub);
        break;
        case '*':
        sum=X*Y;
        printf("multiplication of two number=%lf",multi);
        break;
    case '/':
        sub=X/Y;
        printf("division of two number=%lf",div);
        break;

    default:
        printf("error");

    }
}
