#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int arr[n][m];
    bool ch=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                ch=1;
            }
        }
    }
    if(ch==0)
    {
        cout<<"will take number"<<endl;
    }
    else
    {
        cout<<"will not take number"<<endl;
    }

}
