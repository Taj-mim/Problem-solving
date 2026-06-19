#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            reverse(s.begin(),s.begin()+i-1);
             cout<<s[i];
        }
