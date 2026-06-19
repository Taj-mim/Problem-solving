#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string re=" ";
    string found="EGYPT";
    size_t pos=0;
    while((pos=s.find(found,pos))!=string::npos)
    {
        s.replace(pos,found.length(),re);
        pos+=re.length();
    }
    cout<<s;
}
