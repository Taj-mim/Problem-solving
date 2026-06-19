#include<bits/stdc++.h>
using namespace std;
class binary
{
    string s;
public:
    void read();
    void chk_binary();
    void ones_compliment();
    void display();
};
void binary :: read()
{
    cout<<"take input:";
    cin>>s;
}
void binary :: chk_binary()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1')
        {
            cout<<"Incorrect element";
            exit(0);
        }
    }
}
void binary :: ones_compliment()
{
    chk_binary();//nesting chk_binary function
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}
void binary :: display()
{
    cout<<"binary number is";
    for(int i=0;i<s.length();i++)
    {

        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
   // b.chk_binary();
    b.display();
    b.ones_compliment();
    b.display();

}
