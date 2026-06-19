#include<stdio.h>
main()
{
    int choice;
    float converttemp,temp;
    printf("temparature conversion\n");
    printf("1.celsius to fahrenheit\n");
    printf("2.fahrenheit to celsius \n");
    printf("choice=");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
           printf("enter celsius temparature");
            scanf("%f",&temp);
            converttemp=(temp-32)*1.8;
            printf("%f",converttemp);
            break;

        }
    case 2:
         {

           printf("enter fahrenheit temparature");
           scanf("%f",&temp);
           converttemp=(temp*1.8)+32;
           printf("%f",converttemp);


         }
    }
}
