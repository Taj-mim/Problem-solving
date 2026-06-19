#include<iostream>
using namespace std;
int main()
{
   long long int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&b<c||a<b&&b==c||a==b&&b<c||a==b&&b==c)
    {
        cout<<a<<endl<<b<<endl<<c<<endl<<"\n"<<a<<endl<<b<<endl<<c;
    }
    else if(b<a&&a<c||b<a&&a==c)
    {
        cout<<b<<endl<<a<<endl<<c<<endl<<"\n"<<a<<endl<<b<<endl<<c;
    }
    else if(b<c&&c<a)
    {
        cout<<b<<endl<<c<<endl<<a<<endl<<"\n"<<a<<endl<<b<<endl<<c;
    }
    else if(c<b&&b<a||c<b&&b==a||b==c&&c<a)
    {
        cout<<c<<endl<<b<<endl<<a<<endl<<"\n"<<a<<endl<<b<<endl<<c;
    }
    else if(c<a&&a<b)
    {
        cout<<c<<endl<<a<<endl<<b<<endl<<"\n"<<a<<endl<<b<<endl<<c;
    }
    else if(a<c&&c<b||a==c&&a<b)
    {
        cout<<a<<endl<<c<<endl<<b<<endl<<"\n"<<a<<endl<<b<<endl<<c;
    }
    return 0;
}
