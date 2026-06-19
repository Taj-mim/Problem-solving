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
    vector<int>v(10,5);
    v.push_back(4);
    printvec(v);
    v.pop_back();
    printvec(v);

}
