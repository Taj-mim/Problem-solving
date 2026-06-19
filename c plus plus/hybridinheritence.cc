#include<iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    student(int r)
    {
        roll=r;
    }
    void display_s()
    {
        cout<<"roll of the student"<<roll<<endl;
    }
};
class test: public student
{
protected:
    int part1,part2;
public:
    test(int r,int p1,int p2):student(r)
    {
        part1=p1;
        part2=p2;
    }
    void display_t()
    {
        display_s();
        cout<<"test of 1st part:"<<part1<<endl;
        cout<<"test of 2nd part:"<<part2<<endl;
    }
};
class sports: public student
{
protected:
    int score;
public:
    sports(int r,int s):student(r)
    {
        score=s;
    }
    void display_sp()
    {
        cout<<"mark of sports:"<<score<<endl;
    }
};
class result:private test,protected sports
{
    int total;
public:
    result(int r,int p1,int p2,int s,int t):test(r,p1,p2),sports(r,s)
    {
        total=t;

    }
    int cal()
    {
         total=part1+part2+score;
         return total;
    }
    void display_r()
    {

        display_sp();
        display_t();
        cout<<"result:"<<cal()<<endl;

    }
};
int main()
{
    result r1(2,30,40,90,5);
    r1.display_r();
    return 0;
}
