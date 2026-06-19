#include<iostream>
using namespace std;
class abc;
class xyz
{
    int x;
public:
    void setdata(int a)
    {
        x=a;
    }
    friend void maxx(xyz t1,abc t2);
};
class abc
{
    int y;
public:
    void setdata(int a)
    {
        y=a;
    }
      friend void maxx(xyz t1,abc t2);
};
void maxx(xyz t1,abc t2)
{
    if(t1.x>t2.y)
    {
        cout<<t1.x;
    }
    else
        cout<<t2.y;
}
int main()
{
    xyz m;
    abc n;
    m.setdata(20);
    n.setdata(12);
    maxx(m,n);
}
