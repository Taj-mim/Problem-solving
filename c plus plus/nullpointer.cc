#include<iostream>
using namespace std;
int main()
{  /*swap
    int x=10,y=2,temp;
    int *pX=&x;
    int *pY=&y;
    temp=*pX;
    *pX=*pY;
    *pY=temp;
    cout<<*pX<<" "<<*pY;
*/
int *pointer=nullptr;
int x=23;
pointer=&x;
if(pointer==nullptr)
{
    cout<<"value is not assigned \n";
}
else
{
cout<<"the value is assigned="<<*pointer;
}

}
