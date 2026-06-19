#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    int space=n-1;
for(i=1;i<=n;i++)
{
    for(k=space;k>0;k--)
    {
        cout<<" ";
    }
    for(j=1;j<i*2;j++)
    {
        cout<<"*";
    }
    space--;
    cout<<endl;
}
}
