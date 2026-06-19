#include<bits/stdc++.h>
using namespace std;
const int item=50;
class cart
{
private:
    string productname[item];
    int productquantity[item];
    int priceperunit[item];
    int numproduct;

public:
    string customername;
    void getinfo();
    int totalamount();
    void display();

};
void cart::getinfo()
{
    cout<<"customername:";
    cin>>customername;
    cout<<"number of product:";
    cin>>numproduct;
    for(int i=0;i<numproduct;i++)
    {

        cin>>productname[i];
        cin>>productquantity[i];
        cin>>priceperunit[i];
    }
}
int cart::totalamount()
{
    int sum=0;
    for(int i=0;i<numproduct;i++)
    {
        sum=+productquantity[i]*priceperunit[i];
    }
   return sum;
}
void cart::display()
{
    cout<<customername<<endl;
    for(int i=0;i<numproduct;i++)
    {
        cout<<productname[i]<<endl;
        cout<<productquantity[i]<<endl;
        cout<<priceperunit[i]<<endl;
    }
    cout<<totalamount()<<endl;

}
int main()
{
    cart cart1,cart2;
    cart1.getinfo();
    cart2.getinfo();
    cart1.display();
    cart2.display();

    return 0;
}
