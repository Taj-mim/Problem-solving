#include<iostream>
using namespace std;
class a
{
protected:
    int a;
public:
    void setdata_a()
    {
        cin>>a;
    }
    void display_a()
    {
        cout<<a<<endl;
    }
};
class b:public a
{
protected:
    int b,p;
public:
   void setdata_b()
    {
        setdata_a();

        cin>>b;
    }
    void display_b()
    {
        display_a();
        cout<<b;
    }
    void cal()
    {
        p=a*b;
        cout<<"product of a and b is:"<<p<<endl;
    }

};
int main()
{
    b ob;
    ob.setdata_b();
    ob.cal();
    return 0;
}
