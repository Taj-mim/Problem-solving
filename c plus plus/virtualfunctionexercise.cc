#include<iostream>
#include<string>
using namespace std;
class media
{
protected:
    string title;
    int price;
public:
    media(string a,int b)

    {
        title=a;
        price=b;
    }
    virtual void display()
    {
        cout<<title<<"\t"<<price<<endl;
    }
};
class book:public media
{
    int numpage;
    public:
    book(string a,int b,int page):media(a,b)
    {
       numpage=page;
    }
    void display()
    {
        media::display();
        cout<<"pages:"<<numpage<<endl;
    }
};
class tape:public media
{
    int playing_t;
public:
    tape(string a,int b,int time):media(a,b)
    {
       playing_t=time;
    }
    void display()
    {
        media::display();
        cout<<"playing time:"<<playing_t<<endl;
    }
};
int main()
{
    book book1("macbeth",23,44);
    tape tape1("gladiator",21,33);

    media *list[2]={&book1,&tape1};
    for(int i=0;i<2;i++)
    {
        list[i]->display();
    }
return 0;


}
