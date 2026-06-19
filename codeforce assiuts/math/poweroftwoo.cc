#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    bool ch=0;
    for(int i=0;i<100;i++)
    {
        if(pow(2,i)==n)
        {
            ch=1;
        }
    }
    if(ch==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
