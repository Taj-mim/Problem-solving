#include<iostream>
using namespace std;
int main()
{
    int *number=NULL,size;
    cout<<"size of the array=";
    cin>>size;
    number=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<number[i]<<" ";
    }
    delete[]number;
    return 0;
}
