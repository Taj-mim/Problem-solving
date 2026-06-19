#include<iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void getnum(int a)
    {
        roll=a;
    }
    void putnum()
    {
        cout<<roll<<endl;
    }
};
class test: virtual public student
{
protected:
    int part1,part2;
public:
    void getmarks(int p1,int p2)
    {
        part1=p1;
        part2=p2;
    }
    void putmarks()
    {
        cout<<part1<<endl<<part2<<endl;
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
    void putscore()
    {
        cout<<score<<endl;
    }
};
class result:public test,public sports
{
    int total;
public:
    void display()
    {
        total=part1+part2+score;
        putnum();
        putmarks();
        putscore();
        cout<<total<<endl;
    }
};
int main()
{
    result s1;
    s1.getnum(45839);
    s1.getmarks(4543,876);
    s1.getscore(55565);
    s1.display();
    return 0;
}
