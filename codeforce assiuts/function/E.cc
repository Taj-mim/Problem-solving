#include<iostream>
using namespace std;
void sw(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}
int main()
{
    int x,y;
    cin>>x>>y;
    sw(x,y);
}
