#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    set<int>s;
    for(int i=0;i<q;i++)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        else if(type==2)
        {
            int x;
            cin>>x;
            s.erase(x);
        }
        else if(type==3)
        {
            int x;
            cin>>x;
            auto it=s.find(x);
            if(it!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
