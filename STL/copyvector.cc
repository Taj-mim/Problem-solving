#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
 vector<int>v;//O(1)
 v.push_back(45);
 v.push_back(30);
 printvec(v);
 vector<int>v2=v;//O(N)
 v2.push_back(26);
 printvec(v2);
}
