#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,pal=0;
    cin>>n;
   long long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0,j=n-1;i<n&&j>=0;i++,j--)
    {
       if(arr[i]!=arr[j])
       {
            pal=1;
            break;
       }

    }
        if(pal==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
