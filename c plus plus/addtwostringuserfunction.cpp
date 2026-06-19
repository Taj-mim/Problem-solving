#include<iostream>
using namespace std;
string name(string name1,string name2)
{
      return name1+name2;
    //return name1+" "+name2;
}
int main()
{
 string name1,name2;
 cin>>name1;
 cin>>name2;
 string fullname;
 fullname=name(name1,name2);
 cout<<fullname;
}
