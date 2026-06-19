#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=0;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        sum=sum+(s[i]-'0');
    }
    cout<<sum;
}
