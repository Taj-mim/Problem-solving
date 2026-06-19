#include<bits/stdc++.h>
using namespace std;
int binarySearch(long long int arr[],int low,int high,long long int x)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            low=mid+1;
        else
         high=mid-1;
    }
    return -1;

}
int main()
{
    int n,m;
    cin>>n>>m;
   long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(m--)
    {
        long long int x;
        cin>>x;
        int result=binarySearch(arr,0,n-1,x);
        if(result==-1)
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
        }
    }
}
