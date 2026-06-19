#include<stdio.h>
int main()
{
    char name1[100],name2[100],temp[100];
    scanf("%s",&name1);
   scanf("%s",&name2);

  strcpy(temp,name1);
   strcpy(name1,name2);
   strcpy(name2,temp);
   printf("\nname1=%s\n",name1);
    printf("name2=%s",name2);

getch ();
}
