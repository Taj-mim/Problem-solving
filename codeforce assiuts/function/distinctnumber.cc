#include<bits/stdc++.h>
using namespace std;
int dis(int arr[ ],int a)
{
    int countt=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            countt++;
        }
    }
    return countt;
}
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {

        cout<<0;
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<dis(arr,n)<<endl;
}
