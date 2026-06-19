#include<bits/stdc++.h>
using namespace std;
class employee
{
private:
    string name;
    int id;
    string position;
    int salary,yearly_in;
    int tsalary=0;
public:
    void getinfo( )
    {
        cout<<"name:";
      cin>>name;
      cout<<"ID:";
      cin>>id;
      cout<<"position:";
      cin>>position;
      cout<<"salary:";
      cin>>salary;
      cout<<"yearly increment:";
      cin>>yearly_in;
    }
    void increment(int No_of_working_years,int sal )
    {
        for(int y=0;y<No_of_working_years;y++)
        {
          tsalary+=(yearly_in/100)*salary;
        }
    }

    void display()
    {
        cout<<"name:"<<name<<endl<<"id:"<<id<<endl;
        cout<<"position:"<<position<<endl<<"salary:"<<salary<<endl;
        cout<<"total salary:"<<tsalary;
    }
};
int main()
{
    employee emp1,emp2;
    emp1.getinfo();
    emp2.getinfo();
     int y1,y2;
     cout<<"year 1:";
     cin>>y1;
     cout<<"year 2:";
     cin>>y2;
    emp1.increment(y1);
    emp2.increment(y2);
    emp1.display();
    emp2.display();

}
