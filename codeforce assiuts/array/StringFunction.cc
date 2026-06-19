#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    string query;
      int l,r;
    while(q-->0)
    {
        cin>>query;
        if(query=="pop_back")
        {
               s.pop_back();
        }

        else if(query=="front")
        {
              cout<<s.front()<<endl;
        }

        else if(query =="back")
        {
              cout<<s.back()<<endl;

        }
        else if(query=="sort")
        {
            cin>>l>>r;
            if(l>r)
                 swap(l,r);
               sort(s.begin()+l-1,s.begin()+r);
        }

        else if(query=="reverse")
        {
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            reverse(s.begin()+l-1,s.begin()+r);
        }

        else if(query=="print")
        {
            int pos;
            cin>>pos;

              cout<<s[pos-1]<<endl;

        }

        else if(query=="substr")
        {
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            string a=s.substr(l-1,(r-1)+1);
            cout<<a<<endl;
        }

        else
        {
            char x;
            cin>>x;
            s.push_back(x);
      }


    }
}
