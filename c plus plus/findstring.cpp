#include<iostream>
int main()
{
    std::string name;
    std::getline(std::cin,name);
    std::cout<<name.find('a');
    return 0;
}
