#include<bits/stdc++.h>
using namespace std;
class a
{
private:
    int b;
public:
    void set_data(int value)
    {
        b=value;
    }
   int get_data()
   {
       return b;
   }

};
int main()
{
    a e,f,g,h;
    e.set_data(140);
    f.set_data(99);
    g.set_data(38);
    h.set_data(22);
    cout<<e.get_data()<<endl<<f.get_data()<<endl<<g.get_data()<<endl<<h.get_data()<<endl;
}
