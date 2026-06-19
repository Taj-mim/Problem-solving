#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string arr[n][m];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
          cin>>arr[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    int ch=0;
    for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=m;j++)
        {
            if((arr[i][j]=="x")&&((arr[x][y]=="x")||(arr[x][y]==".")))
               {
                ch=1;
               }
        }
    }
    if(ch==1)
    {
       cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
