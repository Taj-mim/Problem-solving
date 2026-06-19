#include<iostream>
using namespace std;
class shape
{
protected:
    int width,length;
public:
    shape(int a,int b)
    {
        width=a;
        length=b;
    }
    virtual void area()
{
    cout<<"parent class area:"<<endl;
}

};
class rectangle: public shape
{
public:
    rectangle(int a,int b):shape(a,b)
    {

    }
    void area()
    {
        cout<<"rectangle area:"<<width*length<<endl;

    }
};
class triangle:public shape
{
    public:
        triangle(int a,int b):shape(a,b){}
        void area()
        {
            cout<<"triangle area:"<<(width*length/2)<<endl;
        }
};
int main()
{
    shape *shape;
    rectangle rec(23,4);
    triangle tri(2,4);
    shape=&rec;
    shape->area();
    shape=&tri;
    shape->area();
    return 0;
}
