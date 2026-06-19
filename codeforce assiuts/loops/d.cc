#include<iostream>
using namespace std;
int main()
{
    int password=1999,i,number;
    while(1)
    {
        cin>>number;
        if(number!=password)
        {
            cout<<"Wrong"<<endl;
        }
        else
        {
            cout<<"Correct";
            break;
        }
    }
}
