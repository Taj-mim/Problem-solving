#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,min;
    int pos=1;
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    min=arr[1];
    for(i=1;i<=n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            pos=i;
        }
    }
    cout<<min<<" "<<pos<<endl;

}
