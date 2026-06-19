#include<iostream>
using namespace std;
class getdata
{
    int a;
protected:
    int b;
public:
    void get_a()
    {
        cout<<"take input for a:";
        cin>>a;
    }
    void get_b()
    {
         cout<<"take input for b:";
        cin>>b;
    }
    void display_a()
    {
        cout<<a<<endl;
    }

};
class add : public getdata
{
    int c,p;
public:
    void get_c()
    {
        get_a();
        get_b();
         cout<<"take input for c:";
        cin>>c;
    }
    void display_b_c()
    {
        cout<<"show a:";
        display_a();
        cout<<"show b and c:\n"<<b<<endl<<c<<endl;
    }
    void add_display()
    {
        p=b+c;
        cout<<"addition:"<<p<<endl;
    }
};
int main()
{
    add obj;
    obj.get_c();
    obj.display_b_c();
    obj.add_display();
    return 0;
}
