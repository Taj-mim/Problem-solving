#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v.size();
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int>temp;
    for(int j=0;j<v.size();j++)
    {
        int y;
        cin>>y;
        temp.push_back(y);
    }
        v.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        printvec(v[i]);
    }
}
