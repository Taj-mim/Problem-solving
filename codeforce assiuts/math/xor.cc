#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,q;
    cin>>a>>b>>q;
    int pos=q%3;
    if(pos==1)
    {
        cout<<a;
    }
    else if(pos==2)
    {
        cout<<b;
    }
    else if (pos==0)
    {
        cout<<(a^b);
    }
}
