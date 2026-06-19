#include<iostream>
using namespace std;
class add
{
    int x,y;
public:
    add(int m,int n);
    add(add &obj );
    void display();
};
add::add(int m,int n)
{
    x=m;
    y=n;
}
add::add(add &obj)
{
    x=obj.x;
    y=obj.y;
}
void add::display()
{
   int sum;
   sum=x+y;
   cout<<sum<<endl;
}
int main()
{
    add ob1(10,20);
    add ob2=ob1;
    ob1.display();
    ob2.display();
}
