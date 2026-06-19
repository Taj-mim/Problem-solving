#include<bits/stdc++.h>
using namespace std;
class addnumber
{
    int x,y;
    void getnumber();
public:
    int addition();
    void display();
};
void addnumber::getnumber()
{
    cin>>x>>y;
}
int addnumber::addition()
{
    getnumber();
    int add;
    add=x+y;
    return add;
}
void addnumber::display()
{
      cout<<addition();
}
int main()
{
    addnumber taj;
    taj.display();
    return 0;
}
