#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t-->0)
    {
        string s;
        cin>>s;
        int x;
        x=s.length();
        bool ch=0;
        for(int i=0;i<x-2;i++)
        {
            if(s[i]=='0')
               {
                   if(s[i+1]=='1'&&s[i+2]=='0')
                   ch=1;
               }
            else if(s[i]=='1')
            {
                if(s[i+1]=='0'&&s[i+2]=='1')
                {
                    ch=1;
                }
            }
        }
        if(ch==0)
        {
            cout<<"Bad"<<endl;
        }
        else
        {
            cout<<"Good"<<endl;
        }
    }
}
