#include<iostream>
#include<string>
using namespace std;
const int sizee=2;
class shopping
{
public:
    int id[sizee];
    string name[sizee];
    float price[sizee];
    void getdata();
    float cal();
    void display();

};
void shopping::getdata()
{
    for(int i=0;i<sizee;i++)
    {
        cin>>id[i]>>name[i]>>price[i];
    }
}
float shopping::cal()
{
    float sum=0.0;
    for(int i=0;i<sizee;i++)
    {
        sum+=price[i];
    }
    return sum;
}
void shopping::display()
{
    cout<<cal()<<endl;
}
int main()
{
    shopping item1,item2;
    item1.getdata();
    item1.display();
    item2.getdata();
    item2.display();
    return 0;
}
