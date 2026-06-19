#include<iostream>
using namespace std;
class A
{
      int code,price;
public:
    void getdata(int a,int b)
    {
        code=a;
        price=b;
    }
    void show()
    {
        cout<<code<<endl<<price<<endl;
    }
};
const int size=2;
int main()
{
    A *p=new A[size];
    A *d=p;
    int x;
    int y;
    for(int i=0;i<size;i++)
    {
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }
    for(int i=0;i<size;i++)
    {
        d->show();
        d++;
    }
    return 0;
}
