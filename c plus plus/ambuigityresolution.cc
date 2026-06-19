#include<iostream>
using namespace std;
class A
{
public:
    void display(void)
    {
        cout<<"fatema ";
    }
};
class B
{
public:
    void display(void)
    {
        cout<<"taj mim";
    }
};
class P:public A,public B
{
public:

    void display_p(void)
    {
        A::display();
    }
};
int main()
{
    P p;
    p.display_p();
    p.B::display();
    return 0;
}
