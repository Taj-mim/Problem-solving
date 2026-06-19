#include<bits/stdc++.h>
using namespace std;
void prin(int n)
{
    if(n<=0)
    {
return;
    }
    cout<<n;
    if(n>1)
    {
        cout<<" ";
    }
    prin(n-1);

}
int main()
{
    int n;
    cin>>n;
    prin(n);
    return 0;
}


