#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxx,minn,maxind,minind;
    maxx=minn=arr[0];
    maxind=minind=0;

    for(int i=0;i<n;i++)
    {
       if(arr[i]>maxx)
       {
           maxx=arr[i];
           maxind=i;
       }
       if(arr[i]<minn)
       {
           minn=arr[i];
           minind=i;
       }
    }
    int temp=arr[maxind];
    arr[maxind]=arr[minind];
    arr[minind]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
