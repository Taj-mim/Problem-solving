#include<iostream>
using namespace std;
void name(string name,int age)
{
    cout<<"my name is "<<name<<'\n';
    cout<<"i am "<<age<<" year's old";
}
int main()
{
    string namee;
    int age;
    getline(cin,namee);
    cin>>age;
    name(namee,age);
}
