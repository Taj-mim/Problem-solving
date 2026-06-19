#include<stdio.h>
int main()
{
    char name1[]={"tahmim"},name2[]={"tajmim"};
 int d=strcmp(name1,name2);
  if(d==0)
  {
      printf("equal");
  }
  else
  {
      printf("not equal");
  }
  return 0;
}
