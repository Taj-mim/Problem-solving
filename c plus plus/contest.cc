#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int l1=s.length();
    int l2=t.length();
    bool p=1;
    for(int i=0;i<l1;i++)
    {
        if(i>=l2||s[i]!=t[i])
            p=0;
            break;
    }
    if(p==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
}
