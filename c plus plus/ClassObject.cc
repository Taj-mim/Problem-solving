#include<bits/stdc++.h>
using namespace std;
class employee
{
private:
    float salary;
    float yearly_increment;
public:
    string name,position;
    int id;
    int year;
    void getinfo()
    {
        cin>>name>>id>>position>>year;
    }
    void increment(int s,int yrly)
    {
        salary=s;
        yearly_increment=yrly;
        if(year>=1)
        {
             for(int i=1;i<=year;i++)
        {
            salary+=(salary*( yearly_increment/100));
        }
        }
    }
    void display()
    {
        cout<<salary;
    }

};
int main()
{
    employee employee1;
    employee1.getinfo();
    employee1.increment(35000.0,7.0);
    employee1.display();
    return 0;
}
