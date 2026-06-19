#include<iostream>
using namespace std;
void see(int n)
{
    if(n!=0)
   { see(n-1);
    cout<<"I love Recursion"<<endl;
   }

}
int main()
{
    int n;
    cin>>n;
    see(n);

}
