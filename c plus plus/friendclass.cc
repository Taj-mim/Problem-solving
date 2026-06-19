#include<iostream>
using namespace std;
class sqr
{
    float x,circumstence,area;
public:
    void getdata(int a);
    friend class homework;
};
void sqr::getdata(int a)
{
    x=a;
    circumstence=a*3;
    area=(1.73*a*a)/4;

}
class homework
{
public:
    void putdata(sqr t)
    {
        cout<<"circumstence: "<<t.circumstence<<endl;
        cout<<"Area:"<<t.area<<endl;
    }
};
int main()
{
    sqr p;
    p.getdata(5);
    homework ob;
    ob.putdata(p);
}
