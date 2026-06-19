#include<iostream>
using namespace std;
class M
{
protected:
    int m;
public:
    void assign_m(int x)
    {
        m=x;
    }
};
class N
{
protected:
    int n;
public:
    void assign_n(int y)
    {
        n=y;
    }
};
class P:protected M,private N
{
public:
    void assign_p(int a,int b)
    {
       assign_m(a);
       assign_n(b);
    }
    void display()
    {
        cout<<m<<endl<<n<<endl<<m*n<<endl;
    }
};
int main()
{
    P p1;
    p1.assign_p(5,7);
    p1.display();
    return 0;
}
