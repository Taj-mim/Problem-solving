#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    map<string,int>m;
    for(int i=0;i<q;i++)
    {
         int type;
         cin>>type;
         if(type==1)
           {
               string x;
               cin>>x;
               int y;
               cin>>y;
               m[x]=m[x]+y;

           }
    else if(type==2)
    {
        string x;
        cin>>x;
        m.erase(x);
    }
    else if(type==3)
    {
        string x;
        cin>>x;
        if(m.find(x)!=m.end( ))
        {
          cout<<m[x]<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }

    }
    }

}
