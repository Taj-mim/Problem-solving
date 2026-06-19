#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v)
{
        cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int y;
    cin>>y;
    v.erase(v.begin()+y-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    printvec(v);
}
