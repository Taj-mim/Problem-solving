#include<bits/stdc++.h>
using namespace std;
void printvec(map<int,string>&m)
{
    for(auto &name:m)
    {
        cout<<name.first<<" "<<name.second<<endl;
    }
    cout<<endl;
}
int main()
{
    map<int,string>m;
    m[1]="fatema";
    m[2]="taj";
    m[3]="mim";
    auto it=m.find(3);
    m.erase(it);
    /*if(it==m.end())
    {
        cout<<"no value";
    }
    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    */
    printvec(m);
}

