#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(sum<0)
    {
        cout<<abs(sum);
    }
    else
    {
        cout<<sum;
    }
}
