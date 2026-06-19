#include<iostream>
int main()
{
    int i=0;
  while(i<20)
    {
        i++;
     /*   if(i==9)
   {
        break;
    } */
    if(i==10)
    {
        continue;
    }
    std::cout << i << '\n';
  }
}
