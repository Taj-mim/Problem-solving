#include<bits/stdc++.h>
using namespace std;
const int item=50;
class shopping
{
public:
    int itemcode[item];
    int itemprice[item];
    int count;
    void cnt()
    {
        count=0;
    }
    void getdata();
    void displayvalue();
    void remove();
    void displayall();
};
void shopping::getdata()
{
    cout<<"item code:";
    cin>>itemcode[count];
    cout<<"item price: ";
    cin>>itemprice[count];
    count++;
}
void shopping::displayvalue()
{
    int sum=0;
    for(int i=0;i<count;i++)
    {
        sum+=itemprice[i];
    }
    cout<<"total price: "<<sum<<endl;
}
void shopping::remove()
{
    int a;
    cin>>a;
    for(int i=0;i<count;i++)
    {
        if(itemcode[i]==a)
        {
            itemprice[count]=0;
        }
    }
}
void shopping::displayall()
{
    for(int i=0;i<count;i++)
    {
        cout<<itemcode[i]<<endl;
        cout<<itemprice[i]<<endl;
    }
}
int main()
{
    shopping item;
    item.cnt();
    int x;
    do
    {
    cout<<"which thing you want to know: "<<endl;
    cin>>x;
    switch(x)
     {
    case 1:
        item.getdata();
        break;
    case 2:
        item.displayvalue();
        break;
    case 3:
        item.remove();
        break;
    case 4:
        item.displayall();
        break;
   default:
        cout<<"error!"<<endl;

     }

    }while(x!=5);
    return 0;
}
