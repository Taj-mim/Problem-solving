#include<iostream>
using namespace std;
int main()
{
    int num1,num2,div1,div2,rem;
    cin>>num1>>num2;
    while(num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    cout<<num1;
}
