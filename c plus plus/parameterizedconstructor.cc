#include<iostream>
#include<string>
using namespace std;
class info
{
    string name;
    string address;
    int telephone;
    int phone;
    string head;
public:
    info(string a,string b,int c,int d,string e);
    void display();
};
info::info(string a,string b,int c,int d,string e)
{
    name=a;
    address=b;
    telephone=c;
    phone=d;
    head=e;

}
void info::display()
{
    cout<<name<<endl;
    cout<<address<<endl;
    cout<<telephone<<endl;
    cout<<phone<<endl;
    cout<<head<<endl;
}
int main()
{
    info ob("taj","uttara",34556,1999,"jalil");
    ob.display();
}
