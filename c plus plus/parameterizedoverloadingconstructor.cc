#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex();
    complex(int z);
    complex(int x,int y);
    friend complex sum(complex ob1,complex ob2);
    friend void show(complex ob3);
};
complex::complex(int z)
{
    a=z;
    b=z;
}
complex::complex(int x, int y)
{
    a=x;
    b=y;
}
complex sum(complex ob1,complex ob2)
{
    complex obj;
    obj.a=ob1.a+ob2.a;
    obj.b=ob1.b+ob2.b;
    return obj;
}
void show(complex ob3)
{
    cout<<ob3.a<<"+"<<ob3.b<<"j"<<endl;
}
int main()
{
    complex A(5,6);
    complex B(3);
    complex C;
    C=sum(A,B);
    show(A);
    show(B);
    show(C);
    return 0;
}
