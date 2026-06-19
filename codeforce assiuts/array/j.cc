#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[0]==arr[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"Unlucky";
    }
    else
    {
        cout<<"Lucky";
    }
}
