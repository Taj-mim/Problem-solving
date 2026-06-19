#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,x;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
   int mult=a*b*c*d;
    x=mult%100;
    if(x<10)
    {
        cout<<"0"<<x;
    }
    else
    {
        cout<<x;
    }
return 0;

}
