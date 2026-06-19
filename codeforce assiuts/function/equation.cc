#include<bits/stdc++.h>
using namespace std;
long long  eq(int a,int b)
{
    long long int sum=0;
    for(int i=2;i<=b;i=i+2)
    {
        sum+=pow(a,i);
    }
    return sum;
}
int main()
{
    int x,n;
    cin>>x>>n;
    eq(x,n);
    cout<<eq(x,n);
}
