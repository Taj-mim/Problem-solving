#include<iostream>
using namespace std;
class taj
{
public:
    virtual void show()=0;
};
class a:public taj
{
public:
    void show()
    {
        cout<<"fatema ";
    }
};
class b:public taj
{
 public:
     void show()
     {
         cout<<"taj mim";
     }
};
int main()
{
    a e1;
    b e2;
   taj *obj[2]={&e1,&e2};
    for(int i=0;i<2;i++)
    {
        obj[i]->show();
    }
}
