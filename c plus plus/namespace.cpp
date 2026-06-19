#include<iostream>
namespace first {
int x=1;}
namespace second{
float x=3.5;}
int main()
{
  int x=4;
  std::cout<<second::x<<std::endl;
  //or

  std::cout<<first::x<<'\n';
  //or
  using namespace std;
  cout<< x;
   return 0;
}
