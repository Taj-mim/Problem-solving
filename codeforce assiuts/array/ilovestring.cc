#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,t;
  while(n-->0)
   {
       cin>>s;
       cin>>t;
   string result;
   int min_len=min(s.length(),t.length());
   for(int i=0;i<min_len;i++)
   {
       result+=s[i];
       result+=t[i];
   }
       if(s.length()>t.length())
       {
           result+=s.substr(min_len);
       }
       else if(t.length()>s.length())
       {
           result+=t.substr(min_len);
       }
        cout<<result<<endl;
   }
}
