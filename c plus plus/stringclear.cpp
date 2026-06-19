#include<iostream>
int main()
{
    std::string name;
    std::getline(std::cin,name);
    name.clear();
    std::cout<<name;
    return 0;
}
