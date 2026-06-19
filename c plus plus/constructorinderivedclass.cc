#include<iostream>
using namespace std;
class alpha
{
    int x;
public:
    alpha(int i)
    {
        x=i;
    }
    void show_alpha()
    {
        cout<<"X:"<<x<<endl;
    }
};
class beta
{
    int y;
public:
    beta(int b)
    {
        y=b;
    }
    void show_beta()
    {
        cout<<"Y:"<<y<<endl;
    }
};
class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma(int a,int b,int c,int d):alpha(a),beta(b)
    {
        m=c;
        n=d;
    }
    void show_gamma()
    {
        cout<<"M:"<<m<<endl<<"N:"<<n<<endl;
    }
};
int main()
{
    gamma g(20,10,30,40);
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
}

