#include<bits/stdc++.h>
using namespace std;
class Time
{
    int minn;
    int hr;
public:
    void getdata(int a,int b);
    void sumtime(Time x,Time y);
    void display();

};
void Time::getdata(int a,int b)
    {
        minn=a;
        hr=b;
    }
void Time::sumtime(Time x,Time y)
{
   minn = x.minn + y.minn;
    hr = x.hr + y.hr + minn / 60;
    minn = minn % 60;
}
void Time::display()
{
    cout<<hr<<"hrs and "<<minn<<endl;
}
int main()
{
   Time a1, b1, c1;
   a1.getdata(22,30);
   a1.display();

   b1.getdata(20,40);
   b1.display();

   c1.sumtime(a1,b1);
   c1.display();

   return 0;
}
