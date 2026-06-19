#include<bits/stdc++.h>
using namespace std;
const int m =100;
class item
{
   int itemcode[m];
   int itemcost[m];
   int count;
public:
     void cnt()
   {
       count=0;
   }
   void getdata();
   void display();
   void Remove();
   void displayall();

};
void item::getdata()
{
    cout<<"add an item:";
    cin>>itemcode[count];
    cout<<"price of that item:";
    cin>>itemcost[count];
    count++;
}
void item:: display()
{
    int sum=0;
    for(int i=0;i<count;i++)
    {
        sum+=itemcost[i];
    }
    cout<<"Total sum:"<<sum<<endl;
}
void item :: Remove()
{
    int a;
    cout<<"You want to delete:";
    cin>>a;
    for(int i=0;i<count;i++)
    {
        if(itemcode[i]==a)
        {
           itemcost[i]==0;
           return;
        }
    }
}
void item :: displayall()
{
    cout<<"Code and Price:"<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<itemcode[i]<<endl;
        cout<<itemcost[i]<<endl;
    }
}

int main()
{
    item object;
    object.cnt();
    int x;
    do
    {
        cout << "1 :Add an Item"<<endl;
        cout << "2 : Display total value"<<endl;
        cout << "3 : Delete an Item"<<endl;
        cout << "4 : Display All Item"<<endl;
        cout << "5 : quit"<<endl;
        cin>>x;
        switch(x)
        {
            case 1:
              object.getdata();
              break;
            case 2:
              object.display();
              break;
            case 3:
              object.Remove();
              break;
            case 4:
             object.displayall();
             break;
            case 5:
            {
                cout<<"QUIT";
            }
            default:
            {
                cout<<"you take an invalid item";
            }
        }
    }while(x!=5);


}
