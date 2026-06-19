#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    while(b!=0)
    {
        long long int temp=a;
        a=b;
        b=temp%a;
    }
    return a;
}
long long int lcm(long long int a,long long int b)
{
    return a/(gcd(a,b))*b;
}
int main()
{
    long long int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
}
