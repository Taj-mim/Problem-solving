#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        char c=s[i];
        int counter =1;
        while(s[i]==s[++i])
        {
            counter++;
        }
        cout<<c<<" : "<<counter<<endl;
        i--;
    }
}
