#include<bits/stdc++.h>
using namespace std;
class y;
class x
{
    int a;
    friend void change(x &t1,y &t2);
public:
    void getdata(int p)
    {
        a=p;
    }
};
class y
{
    int b;
    friend void change(x &t1,y &t2);
public:
    void getdata(int p)
    {
        b=p;
    }

};
void change(x &t1,y &t2)
{
    int temp;
    temp=t1.a;
    t1.a=t2.b;
    t2.b=temp;
}
int main()
{
    x num1;
    y num2;
    num1.getdata(20);
    num2.getdata(39);
    change(num1,num2);
    cout<<num1.a<<" "<<num2.b;
}
