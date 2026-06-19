#include<iostream>
int main()
{
    using std::cin,std::cout;
  char opt;
  double x,y;
  cout<<"num1=";
  cin>>x;
  cout<<"num2=";
  cin>>y;
  cout<<"which operation you want to do=";
  cin>>opt;
  switch(opt)
  {
  case'+':
      {
          cout<<x+y;
      }
      break;
  case'-':
    {
        cout<<x-y;
    }
   break;
  case'*':
    {
        cout<<x*y;
    }
    break;
  default:
    {
        cout<<x/y;
    }
  }
}
