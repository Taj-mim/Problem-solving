#include<iostream>
using namespace std;
class weight
{
    int a;
public:
    weight();
    weight(int x);
    void display();
    weight operator++();
    weight operator++(int);
};
weight::weight()
{
    a=0;
}
weight::weight(int x)
{
    a=x;
}
void weight::display()
{
    cout<<a<<endl;
}
weight weight::operator++()
{
    weight temp;
    temp.a=++a;
    return temp;
}
weight weight:: operator++(int)
{
    weight temp;
    temp.a=a++;
    return temp;
}
int main()
{
    weight a(9),b,c;
    a.display();
    b=a++;
    b.display();
    c=++a;
    c.display();
}
