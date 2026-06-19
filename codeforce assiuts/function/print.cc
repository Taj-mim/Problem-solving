#include<bits/stdc++.h>
using namespace std;
void prinnt(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i;
        if(i<n)
        {
            cout<<" ";
        }

    }
}
int main()
{
    int x;
    cin>>x;
    prinnt(x);
}
