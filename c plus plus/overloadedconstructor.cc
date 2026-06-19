#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    int id;
    string address;
public:
    student();
    student(string n,int i);
    student(string n,int i,string ad);
    void display();
};
student::student()
{
    name="unknown";
    id=0;
    address="not avilable";
}
student::student(string n,int i)
{
    name=n;
    id=i;
    address="not avilable";
}
student::student(string n,int i,string ad)
{
    name=n;
    id=i;
    address=ad;
}
void student::display()
{
    cout<<name<<endl;
    cout<<id<<endl;
    cout<<address<<endl;
}
const int s=10;
int main()
{
    student students[s];
    students[0] = student();
    students[1] = student("Alice", 20);
    students[2] = student("Bob", 22, "123 Main St");
    students[3] = student("Charlie", 18);
    students[4] = student("David", 25, "456 Park Ave");
    students[5] = student("Eva", 21);
    students[6] = student("Frank", 19, "789 Elm St");
    students[7] = student("Grace", 23, "567 Oak St");
    students[8] = student("Henry", 24);
    students[9] = student("Ivy", 20, "345 Pine St");

    for(int i=0;i<10;i++)
    {
        students[i].display();
    }
}
