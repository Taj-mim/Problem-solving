#include<iostream>
using namespace std;
//overloded function share same name with different parameter
void name( )
{
    cout<<"taj mim";
}
void name(string name)
{
    cout<<name;
}
void name(string name1,string name2)
{
    cout<<name1<<name2;
}
int main()
{
    string name1,name2;
    cin>>name1;
    cin>>name2;
    name(name1,name2);
}
