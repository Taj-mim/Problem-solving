
#include<stdio.h>
main()
{
    float a,result;
    printf("a=");
    scanf("%f",&a);
    result=round(a);
    //round function will give us the around output(if floating is 1 to 4 it will add o 5to 9 add 1)
    printf("%f\n",result);
    result=trunc(a);
    //trunc will give only the number before a fraction
    printf("%f\n",result);
     result=ceil(a);
   // je mark dewa hbe tar uporer purnosonkha output dbe
    printf("%f\n",result);
     result=floor(a);
    //je mark dewa hbe tar nicher purnosonkha output dbe number line er
    printf("%f",result);

}
