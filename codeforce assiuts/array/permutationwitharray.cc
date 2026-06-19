#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
      bool ch=0;
    long long int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    sort(brr,brr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=brr[i])
        {
            ch=1;
        }
    }
    if(ch==1)
    {
        cout<<"no";
    }
    else
        cout<<"yes";
}
