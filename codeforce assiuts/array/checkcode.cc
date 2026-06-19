#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int l=s.length();
    if(l<a||s[a]!='-')
    {
         cout<<"No";
         return 0;
    }

        bool ch=0;
       for(int i=0;i<l;i++)
       {
           if((s[i]<'0'||s[i]>'9')&&i!=a)
            ch=1;
       }
       if(ch==0)
       {
           cout<<"Yes";
       }
       else
        cout<<"No";
}
