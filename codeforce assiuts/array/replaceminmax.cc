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
    int maxx,minn;
    maxx=minn=arr[0];
    int pos1,pos2;
    pos1=pos2=0;
    for(int i=1;i<n;i++)
    {
        if(maxx<arr[i])
        {
            maxx=arr[i];
            pos1=i;
        }
        if(minn>arr[i])
        {
            minn=arr[i];
            pos2=i;
        }

    }
    swap(arr[pos1],arr[pos2]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
