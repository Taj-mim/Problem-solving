#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int x;
    x=str.length();
    for(int i=0;i<x;i++)
    {
        if(str[i]==',')
        {
            str[i]=' ';
        }
        else if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<str<<endl;

}
