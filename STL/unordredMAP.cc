/*Given N strings and Queries.
in each query you are given a string
print frequency of that string
N<=10^5
s=100
Q=10^6*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<string,int>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    /*for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }*/

}
