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
    int ch=0;
    for(int i=0,j=n-1;i<n&&j>=0;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            ch=1;
            break;
        }
    }
    if(ch==0)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

}
