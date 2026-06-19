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
            if(x<=10)
            {
                cout<<s<<endl;
            }
         else
            {
                int counnt=0;
                for(int i=1;i<x-1;i++)
                {
                    counnt++;
                }
                cout<<s[0]<<counnt<<s[x-1];
            }
    }
}
