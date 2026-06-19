#include<iostream>
using namespace std;
class shape
{
public:
    int length,width;
    void setdata(int w)
    {
        width=w;
    }
};
class rectengle: private shape
{
public:
    void setdata_r(int w,int l)
    {
        setdata(w);
        length=l;
    }
    int area()
    {
        return length*width;
    }
};
int main()
{
    rectengle obj;
    obj.setdata_r(3,4);
    cout<<"area:"<<obj.area();
}
