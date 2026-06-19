#include<stdio.h>
int main()
{
    int num[]={1,2,5,4,6,6,7},pos=-1,value=5,i;
    for(i=0;i<7;i++)

      {

       if(value==num[i])
        {
            pos=1+i;

        break;
        }

      }
      if(pos==-1)
      printf("not found");
      else
        printf("the value of %d is %d",value,pos);
      return 0;



}
