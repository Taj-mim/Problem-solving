#include<iostream>
using namespace std;
class item
{
    int price,code;
public:
    void getdata(int p,int c)
    {
        price=p;
        code=c;
    }
    void display()
    {
        cout<<price<<endl<<code<<endl;
    }
};
int main()
{
    item d;
    item *obj=&d;
    (*obj).getdata(4,5);
    obj->display();
}
