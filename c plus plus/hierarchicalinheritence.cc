#include<iostream>
using namespace std;
class shape
{
protected:
    int height,width;

};
class rectangle:public shape
{
private:
    int length;
protected:
    int height,width;
public:
    void assign_r(int l,int w)
    {
        length=l;
        width=w;
    }
    int area_r()
    {
        return length*width;
    }
};
class triangle:private shape
{
private:
    int base,height,width;
public:
    void assign_t(int b,int h)
    {
        base=b;
        height=h;
    }
    float area_t()
    {
        return 0.5*base*height;
    }
};
int main()
{
    rectangle r1;
    r1.assign_r(10,15);
    cout<<"area of the rectangle:"<<r1.area_r()<<endl;
    triangle t1;
    t1.assign_t(10,20);
    cout<<"area of triangle:"<<t1.area_t()<<endl;
    return 0;
}
