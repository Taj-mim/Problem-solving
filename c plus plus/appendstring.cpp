#include<iostream>
int main()
{
    std::string name;
    using std::cin,std::cout;
    std::getline(cin,name);
    name.append("taj mim");
    cout<<name;
    return 0;
}
