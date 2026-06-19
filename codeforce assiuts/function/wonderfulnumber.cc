#include<bits/stdc++.h>
using namespace std;
void wonderful(long long int x)
{
    long long int q,rem;
    q=x;
    string binary="";
    while(q!=0)
    {
        rem=q%2;
        binary+=to_string(rem);
        q/=2;

    }
    string rev=binary;
    reverse(binary.begin(),binary.end());
    if(binary==rev&&x%2!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
int main()
{
    long long int n;
    cin>>n;
    wonderful(n);
}
