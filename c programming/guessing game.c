#include<stdio.h>
int main()
{
    int number=2,guess,guesslimit=3,count=0,outofguess=0;
    while(number!=guess&&outofguess==0)
    {
        if(count<guesslimit)
            {
      printf("guess=");
        scanf("%d",&guess);
        count++;
    }
    else
    {
        outofguess=1;
    }
  }

    if(outofguess==1)
    {
        printf("you loss");
    }
    else
    {
        printf("you win");
    }

}
