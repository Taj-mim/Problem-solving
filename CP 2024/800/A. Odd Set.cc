
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        int even=0,odd=0;
        for(int j=0;j<2*m;j++)
        {
           cin>>a;

           if(a%2==0)
           {
               even++;
           }
           else
           {
               odd++;
           }
        }
        if(even==odd)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
