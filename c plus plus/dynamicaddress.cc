#include<iostream>
using namespace std;
int main()
{
    int *pointer=NULL;
    pointer=new int;
    *pointer=90;
    cout<<*pointer<<endl;
    cout<<"adress="<<pointer;
    delete pointer;
}
