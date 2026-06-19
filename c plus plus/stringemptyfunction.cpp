#include<iostream>
int main()
{
    std::string name;
    std::getline(std::cin,name);
    if(name.empty())
    {
        std::cout<<"please take a name";
    }
    else
    {
      std::cout<<"taj "<<name;
    }

    return 0;
}
