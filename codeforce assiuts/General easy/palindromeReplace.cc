#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int left=0,right=n-1;
    while(left<=right)
    {
        if(s[left]=='?'&&s[right]=='?')
        {
            s[left]=s[right]='a';
        }
        else if(s[left]=='?')
        {
            s[left]=s[right];
        }
        else if(s[right]=='?')
        {
            s[right]=s[left];
        }
        else if(s[left]!=s[right])
        {
            cout<<"-1"<<endl;
            return 0;
        }
        left++;
        right--;
    }
    cout<<s<<endl;

}
