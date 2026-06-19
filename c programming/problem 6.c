# include<stdio.h>
main()

{
    int a,b,c,d,e,total, full_marks;
    float average,percentage;
    printf("enter a=");
    scanf("%d",&a);
     printf("enter b=");
    scanf("%d",&b);
     printf("enter c=");
    scanf("%d",&c);
     printf("enter d=");
    scanf("%d",&d);
     printf("enter e=");
    scanf("%d",&e);
    printf("full marks=");
    scanf("%d",&full_marks);
    total=(a+b+c+d+e);
    printf("total=%d\n",total);
    average=(total/5);
    printf("average=%f\n",average);
    percentage=((float)total/full_marks)*100;
    printf("percentage=%f",percentage);


}
