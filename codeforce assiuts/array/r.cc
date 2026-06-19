#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }

    bool ch=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++)
    {
        if(arr1[i]!=arr2[i])
            ch=1;
    }
    if(ch==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"no";

    }
}
