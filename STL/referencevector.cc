#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(99);
    cout<<endl;
}
int main()
{
   vector<int>v;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }
   printvec(v);
   vector<int>v2=v;
   printvec(v2);
}
