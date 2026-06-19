#include<iostream>
using namespace std;
int main()
{
    string arr[3];
    fill(arr,arr+1,"fatema");
    fill(arr+1,arr+2,"taj");
    fill(arr+2,arr+3,"mim");
    for(string name:arr)
    {
        cout<<name<<" ";
    }
}
