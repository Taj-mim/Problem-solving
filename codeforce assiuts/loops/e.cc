#include<iostream>
using namespace std;
int main()
{
    int n,number,max=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>number;
        if(number>max)
        {
            max=number;
        }
    }
    cout<<max;
}
