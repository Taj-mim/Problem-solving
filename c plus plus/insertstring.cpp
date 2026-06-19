#include<iostream>
int main()
{
    std::string name;
    using std::cin,std::cout;
    std::getline(cin,name);
    cout<<name.insert(2,"j");
    return 0;

}
