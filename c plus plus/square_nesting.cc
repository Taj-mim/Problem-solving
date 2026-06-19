#include<bits/stdc++.h>
using namespace std;
class sqr
{
    int x;
public:
    void getdata();
    int square();
    void display();
};
void sqr:: getdata()
{
    cout<<"Take any number:";
    cin>>x;
}
int sqr:: square()
{
    return x*x;
}
void sqr::display()
{
    cout<<"square of the number:"<<square();
}
int main()
{
    sqr object;
    object.getdata();
    object.square();
    object.display();
    return 0;
}
