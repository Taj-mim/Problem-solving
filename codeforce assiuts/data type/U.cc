#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n,rem;
    cin>>n;
    rem=n-floor(n);
    if(rem==0)
    {
        cout<<"int "<<floor(n);
    }
    else
    {
        cout<<"float "<<floor(n)<<" "<<rem;
    }
    return 0;
}
