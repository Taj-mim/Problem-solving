#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int num=0;
    int minn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
           num=0;
        while(arr[i]%2==0)
        {
            num++;
            arr[i]/=2;

        }
        minn=min(num,minn);
    }
    cout<<minn;
}
