#include<iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void getroll(int r)
    {
        roll=r;
    }
    void display()
    {
        cout<<"Roll:"<<roll<<endl;
    }
};
class test:virtual public student
{
protected:
    int part1,part2;
public:
    void getnum(int p1,int p2)
    {
        part1=p1;
        part2=p2;
    }
    void display_t()
    {
        cout<<"parts:"<<part1<<endl<<part2<<endl;
    }
};
class sports:virtual public student
{
protected:
    int score;
public:
    void getscore(int s)
    {
        score=s;
    }
    void display_s()
    {
        cout<<"sports mark:"<<score<<endl;
    }
};
class result:public test,public sports
{
    int total;
public:
    void display_r()
    {
        total=part1+part2+score;
        display();
        display_t();
        display_s();
        cout<<"total mark:"<<total<<endl;
    }
};
int main()
{
    result r1;
    r1.getroll(2);
    r1.getnum(99,96);
    r1.getscore(98);
    r1.display_r();
}
