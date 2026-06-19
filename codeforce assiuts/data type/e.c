#include<stdio.h>
#include<math.h>
#define PI 3.141592653
int main()
{
    double r,area;
    scanf("%lf",&r);
    area=PI*pow(r,2);
    printf("%.9lf",area);
    return 0;
}
