#include<bits/stdc++.h>
using namespace std;
void ntime(int a,int b,char x)
{
   while(a-->0)
    {
        cin>>b>>x;
        for(int i=0;i<b;i++)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t,n;
    cin>>t;
    char c;
    ntime(t,n,c);
}
