#include<bits/stdc++.h>
using namespace std;
class employee
{
    string name;
    int age;
public:
    void getdata();
    void putdata();
};
void employee:: getdata()
{
    cin>>name>>age;
}
void employee:: putdata()
{
    cout<<name<<endl<<age<<endl;
}
int main()
{
    employee man[3];
    for(int i=0;i<3;i++)
    {
        man[i].getdata();
    }
     for(int i=0;i<100;i++)
    {

        man[i].putdata();
    }
    return 0;

}
