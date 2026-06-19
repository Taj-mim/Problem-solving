#include<iostream>
#include<string>
using namespace std;
class Tech_product
{
private:
    string os;
    int price;
public:
    Tech_product(string n,int p)
    {
        os=n;
        price=p;
    }
    void print_tech()
    {
        cout<<"operating system name:"<<os<<endl<<"price:"<<price<<endl;
    }
};
class Mobile:public Tech_product
{
private:
    int battery_size,screen_size;
public:
    Mobile(string n,int p,int b,int s):Tech_product(n,p)
    {
        battery_size=b;
        screen_size=s;
    }
    void print_mobile()
    {
        print_tech();
        cout<<"size of battery:"<<battery_size<<endl<<"size of screen:"<<screen_size<<endl;
    }
};
class Samsung:public Mobile
{
private:
    string brand_name;
public:
    Samsung(string n,int p,int b,int s,string bn):Mobile(n,p,b,s)
    {
        brand_name=bn;
    }
    void print_sam()
    {
        print_mobile();
        cout<<"name of brand:"<<brand_name<<endl;
    }
};
int main()
{
    Samsung s("windows",3455,45,20,"poco");
    s.print_sam();
    return 0;
}
