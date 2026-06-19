#include<bits/stdc++.h>
using namespace std;
class sample
{
    int x;
public:
    void getvalue(int a);
    void showvalue();
};
void sample::getvalue(int a)
{
     x=a;
}
void sample::showvalue()
{
    cout<<x<<endl;
}
int main()
{
    sample taj[3];
    for(int i=10;i<13;i++)
    {
        taj[i-10].getvalue(i);
    }
    for(int i=10;i<13;i++)
    {
        taj[i-10].showvalue();
    }
    return 0;
}
