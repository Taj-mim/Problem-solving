#include<bits/stdc++.h>
using namespace std;
class employee
{
public:
    int totalsalary;
    int salaryperhour;
    int numberofworkinghour;
    void getinfo();
    int addsalary();
    int bonus();
    void display();
};
void employee::getinfo()
{
    cout<<"salary per hour: ";
    cin>>salaryperhour;
    cout<<"number of working hour:";
    cin>>numberofworkinghour;
}
int employee::bonus()
{
    cout<<"salary:";
    cin>>totalsalary;
    if(totalsalary>500)
    {
        totalsalary=totalsalary+50;
    }
    return totalsalary;
}
int employee::addsalary()
{
 return  bonus();
}
void employee::display()
{
cout<<addsalary()<<endl;
}
int main()
{
    employee emp;
    emp.display();
    return 0;
}
