#include<iostream>
using namespace std;
class complex
{
    float i,r;
public:
    complex()
    {
        r=0;
        i=0;
    }
    complex(float real,float img)
    {
        r=real;
        i=img;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return temp;
    }
    friend void display(complex c);

};
void display(complex c)
    {
           cout<<c.r<<"+"<<c.i<<"i"<<endl;
    }
int main()
{
    complex c1(2.2,5.6),c2(3.4,5.8),c3;
    display(c1);
    display(c2);
    c3=c1+c2;
    display(c3);
}
