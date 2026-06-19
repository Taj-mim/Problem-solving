#include<bits/stdc++.h>
using namespace std;
class sample
{
    int x,y,z;
public:
    void getdata(int a,int b,int c);
    void display();
    void changesign(sample s);
};
void sample::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void sample::display()
{
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}
void sample::changesign(sample s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
    cout<<"after changing sign:"<<endl;
    cout<<s.x<<endl;
    cout<<s.y<<endl;
    cout<<s.z<<endl;
}
int main()
{
    sample obj;
    obj.getdata(-1,0,7);
    obj.display();
    obj.changesign(obj);
}
