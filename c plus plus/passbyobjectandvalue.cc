#include<iostream>
using namespace std;
class time
{
    int hours;
    int mini;
public:
    void getdata(int h,int m);
    void total(time t1,time t2);
    void display();
};
void time::getdata(int h,int m)
{
    hours=h;
    mini=m;
}
void time::total(time t1,time t2)
{
    mini=t1.mini+t2.mini;
    hours=hours+t1.hours+t2.hours+(mini/60);
    mini=mini%60;
}
void time::display()
{
     cout<<hours<<"hrs"<<mini<<"min";
}
int main()
{
    time obj1,obj2,obj3;
    obj1.getdata(2,45);
    obj2.getdata(3,30);
    obj3.total(obj1,obj2);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
