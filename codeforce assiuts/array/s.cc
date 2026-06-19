#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool ch=0;
    int x;
    cin>>x;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(x==arr[i][j])
            ch=1;
        }
    }
    if(ch==0)
    {
        cout<< "will take number";
    }
    else
    {
        cout<<"will not take number";
    }
}
