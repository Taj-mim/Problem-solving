#include<iostream>
int main()
{
    std::string name;
   // std::cin>>name;
   // std::cout<<"my name is "<<name;
    std::getline(std::cin>>std::ws,name);
    std::cout<<"my name is "<<name;
    return 0;
    }
