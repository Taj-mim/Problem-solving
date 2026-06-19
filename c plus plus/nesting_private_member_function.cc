#include<bits/stdc++.h>
using namespace std;
class creditmoney
{
    int x;
    void input();
public:
    void credit();
    void display();
};
void creditmoney:: input()
{
    cin>>x;
}
void creditmoney::credit()
{
    input();
    if(x>=0&&x<=100)
        x=x+5;
    else
        x=x+20;
}
void creditmoney::display()
{
    cout<<x;
}
int main()
{
    creditmoney money;
    money.credit();
    money.display();
    return 0;
}
