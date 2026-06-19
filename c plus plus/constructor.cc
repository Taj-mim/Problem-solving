#include<iostream>
using namespace std;
class test
{
    int e,f;
public:
    test()
    {
        e=10;
        f=20;
    }
    void add_display();
};
void test::add_display()
{
   int sum;
   sum=e+f;
   cout<<sum;
}
int main()
{
    test ob;
    ob.add_display();
}
