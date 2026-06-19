#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string temp="hello";
    int x=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]==temp[x])
        {
            x++;
        }

    }
    if (x==5)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";

}
