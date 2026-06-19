#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int x;
    cin>>x;
    long long int in=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            in=i;
            break;
        }
    }
    cout<<in;
}
