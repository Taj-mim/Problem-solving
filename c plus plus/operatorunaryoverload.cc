#include<iostream>
using namespace std;
class Distance
{
    int f,i;
public:
    Distance()
    {
    f=0;
    i=0;
    }
   Distance(int feet,int inch)
    {
    f=feet;
    i=inch;
    }
    void display()
    {
    cout<<f<<"feet"<<i<<"inch"<<endl;
    }
    void operator -()
    {
    f=-f;
    i=-i;
    }
};

int main()
{
    Distance a(10,20),b(-2,-3);
    -a;
    a.display();
    -b;
    b.display();
    return 0;
}
