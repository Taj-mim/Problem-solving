#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long arr[n],brr[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    int counnt=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==brr[z])
        {
          counnt++;
          z++;
        }
    }
    if(counnt==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
